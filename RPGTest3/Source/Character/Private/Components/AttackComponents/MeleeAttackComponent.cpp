// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/AttackComponents/MeleeAttackComponent.h"

#include "Weapon/Sword.h"

UMeleeAttackComponent::UMeleeAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMeleeAttackComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UMeleeAttackComponent::SpawnWeapon(int Damage)
{
	Super::SpawnWeapon(Damage);
	Weapon = GetWorld()->SpawnActor<ASword>(GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());

	if(Weapon)
	{
		Cast<ASword>(Weapon)->ASword::ASword();
		Weapon->SetDamage(Damage);
	}
	
	Weapon->FollowerComponent->SetActorToFollow(GetOwner());
	Weapon->DeactiveWeapon();
}


