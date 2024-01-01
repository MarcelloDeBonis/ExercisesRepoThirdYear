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

void UAttackComponent::SetDamage(int Damage)
{
	Weapon->SetDamage(Damage);
}

void UAttackComponent::SpawnWeapon(int Damage)
{
	
}

