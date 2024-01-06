// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/AttackComponents/MeleeAttackComponent.h"

#include "Character/RPGCharacter.h"
#include "Weapon/Sword.h"

UMeleeAttackComponent::UMeleeAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMeleeAttackComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UMeleeAttackComponent::SpawnWeapon(int Damage, float _WeaponDuration)
{
	Super::SpawnWeapon(Damage, _WeaponDuration);
	Weapon = GetWorld()->SpawnActor<ASword>(GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
	Weapon->InitTeam(Cast<ARPGCharacter>(GetOwner())->GetTeam());
	
	if(Weapon)
	{
		Cast<ASword>(Weapon)->ASword::ASword();
		Weapon->SetDamage(Damage);
	}
	
	Weapon->FollowerComponent->SetActorToFollow(GetOwner());
	Weapon->DeactiveWeapon();
}


