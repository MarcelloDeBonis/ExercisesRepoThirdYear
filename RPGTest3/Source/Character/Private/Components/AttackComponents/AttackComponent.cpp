// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/AttackComponents/AttackComponent.h"

UAttackComponent::UAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAttackComponent::UseWeapon()
{
	if(Weapon->AvaiableWeapon())
	{
		Weapon->ActiveWeapon(WeaponDuration);
	}
}

void UAttackComponent::SpawnWeapon(int Damage, float _WeaponDuration)
{
	WeaponDuration = _WeaponDuration;
}

