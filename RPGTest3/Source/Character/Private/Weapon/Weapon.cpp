// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Weapon.h"

#include "Character/RPGCharacter.h"
#include "StateMachines/WeaponStates/States/ActivatedWeapon.h"
#include "StateMachines/WeaponStates/States/DeactivatedWeapon.h"

void AWeapon::ActiveWeapon(float TimeActivation)
{
	CanCollide = true;
	GetWorld()->GetTimerManager().ClearTimer(ActivationTimerHandle);
	SetState(NewObject<UActivatedWeapon>());
	GetWorld()->GetTimerManager().SetTimer(ActivationTimerHandle, this, &AWeapon::DeactiveWeapon, TimeActivation, false);
}

void AWeapon::DeactiveWeapon()
{
	CanCollide = false;
	SetState(NewObject<UDeactivatedWeapon>());
	if(AttackComponent!=nullptr)
	{
		if(Cast<ARPGCharacter>(AttackComponent->GetOwner())->Controller!=nullptr)
		{
			Cast<ARPGCharacter>(AttackComponent->GetOwner())->Controller->OnDeactiveAttack();
		}
	}
}

void AWeapon::InitTeam(ETeam _Team)
{
	Team = _Team;
}

void AWeapon::OnCollision(AActor* OtherCharacter)
{
	if(CanCollide && OtherCharacter->IsA<ARPGCharacter>())
	{
		if(Cast<ARPGCharacter>(OtherCharacter)->GetTeam()!=Team)
		{
			ARPGCharacter* Character = Cast<ARPGCharacter>(OtherCharacter);
			Character->HealthComponent->Damage(Damage);
			DeactiveWeapon();
		}
	}
}

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWeapon::SetDamage(int _Damage, UAttackComponent* _AttackComponent)
{
	Damage = _Damage;
	AttackComponent = _AttackComponent;
}

void AWeapon::SetState(UWeaponState* NewState)
{
	if(CurrentState!=nullptr)
	{
		CurrentState->OnExit();
	}
	
	CurrentState = NewState;
	
	CurrentState->OnEnter(this);
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	FollowerComponent->SetDistanceToMaintain(StartDistance);
	DeactiveWeapon();
}



