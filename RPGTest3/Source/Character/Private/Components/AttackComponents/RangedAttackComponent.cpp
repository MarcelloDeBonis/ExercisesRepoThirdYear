// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/AttackComponents/RangedAttackComponent.h"

#include "Character/RPGCharacter.h"
#include "Weapon/Arrow.h"

URangedAttackComponent::URangedAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void URangedAttackComponent::BeginPlay()
{
	Super::BeginPlay();
}

void URangedAttackComponent::SpawnWeapon(int Damage, float _WeaponDuration)
{
	Super::SpawnWeapon(Damage, _WeaponDuration);
	Weapon = GetWorld()->SpawnActor<AArrow>(GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
	Weapon->InitTeam(Cast<ARPGCharacter>(GetOwner())->GetTeam());
	
	if(Weapon)
	{
		Cast<AArrow>(Weapon)->AArrow::AArrow(ArrowDistanceIncrease);
		Weapon->SetDamage(Damage);
	}
	
	Weapon->FollowerComponent->SetActorToFollow(GetOwner());
	Weapon->DeactiveWeapon();
}


