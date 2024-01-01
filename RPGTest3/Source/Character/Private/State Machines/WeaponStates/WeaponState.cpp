// Fill out your copyright notice in the Description page of Project Settings.


#include "State Machines/WeaponStates/WeaponState.h"

void UWeaponState::OnEnter_Implementation(AWeapon* _Weapon)
{
	Weapon = _Weapon;
}

void UWeaponState::OnExit_Implementation()
{
}
