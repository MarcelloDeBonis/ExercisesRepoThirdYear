// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGEnemy.h"

#include "Character/RPGPlayer.h"
#include "Components/AttackComponents/MeleeAttackComponent.h"
#include "Components/AttackComponents/RangedAttackComponent.h"

ARPGEnemy::ARPGEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	InitHealthComponent();
	AttackComponent = CreateDefaultSubobject<UAttackComponent>(TEXT("AttackComponent"));
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

void ARPGEnemy::InitMeleeAttackComponent()
{
	UAttackComponent* NewSpecificComponent = NewObject<UAttackComponent>(this, UMeleeAttackComponent::StaticClass());
	AttackComponent = NewSpecificComponent;
}

void ARPGEnemy::InitRangedAttackComponent()
{
	UAttackComponent* NewSpecificComponent = NewObject<UAttackComponent>(this, URangedAttackComponent::StaticClass());
	AttackComponent = NewSpecificComponent;
}

void ARPGEnemy::InitDamage(int Damage, float _WeaponDuration)
{
	AttackComponent->SpawnWeapon(Damage, _WeaponDuration);
}

void ARPGEnemy::InitHealth(int Health)
{
	HealthComponent->SetMaxLife(Health);
}

void ARPGEnemy::InitComponents()
{
	Super::InitComponents();
	
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



