// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGEnemy.h"

#include "Character/RPGPlayer.h"

ARPGEnemy::ARPGEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARPGEnemy::Init(float _MinAttackDistance, float _VisibilityRange)
{
	AttackDistance = _MinAttackDistance;
	VisibilityRange = _VisibilityRange;
}

void ARPGEnemy::InitExp(int _ExpOnDied)
{
	ExpOnDied = _ExpOnDied;
}

void ARPGEnemy::InitAttackComponent(UAttackComponent* Component)
{
	AttackComponent = Component;
}

void ARPGEnemy::InitDamage(int Damage, float _WeaponDuration)
{
	AttackComponent->SpawnWeapon(Damage, _WeaponDuration);
}

void ARPGEnemy::InitHealth(int Health)
{
	HealthComponent->SetMaxLife(Health);
}

bool ARPGEnemy::IsPlayerInVisibilityRange()
{
	float Dist = FVector::Dist(this->GetActorLocation(), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation());
	return Dist <= VisibilityRange;
}

void ARPGEnemy::OnDied()
{
	Super::OnDied();
	ARPGPlayer* Player = Cast<ARPGPlayer>(GetWorld()->GetFirstPlayerController()->GetPawn());
	Player->ExpComponent->GainExp(ExpOnDied);
	Destroy();
}

bool ARPGEnemy::InRangeForAttack()
{
	float Dist = FVector::Dist(this->GetActorLocation(), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation());
	return Dist <= AttackDistance;
}



