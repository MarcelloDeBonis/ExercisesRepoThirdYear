// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/AttackComponents/MeleeAttackComponent.h"

#include "DataTableInfo.h"
#include "Character/RPGCharacter.h"
#include "Weapon/Sword.h"
#include "Weapon/WeaponInfo.h"

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

	const FWeaponInfo WeaponInfo = UDataTableInfo::GetStructByRowName<FWeaponInfo>("/Game/DT/WeaponDT.WeaponDT", "Sword");
	TSubclassOf<AWeapon> WeaponClass = WeaponInfo.WeaponClass;
	
	Weapon = Cast<AWeapon>(GetWorld()->SpawnActor<AWeapon>(WeaponClass, GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation(), FActorSpawnParameters()));
	Weapon->InitTeam(Cast<ARPGCharacter>(GetOwner())->GetTeam());
	
	if(Weapon)
	{
		Weapon->SetDamage(Damage, this);
	}
	
	Weapon->FollowerComponent->SetActorToFollow(GetOwner());
	Weapon->DeactiveWeapon();
}


