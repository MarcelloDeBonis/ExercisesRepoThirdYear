// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/AttackComponents/RangedAttackComponent.h"

#include "DataTableInfo.h"
#include "Character/RPGCharacter.h"
#include "Weapon/Arrow.h"
#include "Weapon/WeaponInfo.h"

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

	const FWeaponInfo WeaponInfo = UDataTableInfo::GetStructByRowName<FWeaponInfo>("/Game/DT/WeaponDT.WeaponDT", "Arrow");
	TSubclassOf<AWeapon> WeaponClass = WeaponInfo.WeaponClass;
	
	Weapon = GetWorld()->SpawnActor<AWeapon>(WeaponClass, GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation(), FActorSpawnParameters());
	Weapon->InitTeam(Cast<ARPGCharacter>(GetOwner())->GetTeam());
	
	if(Weapon)
	{
		Weapon->SetDamage(Damage, this);
	}
	
	Weapon->FollowerComponent->SetActorToFollow(GetOwner());
	Cast<AArrow>(Weapon)->Init(ArrowDistanceIncrease);
	Weapon->DeactiveWeapon();
}


