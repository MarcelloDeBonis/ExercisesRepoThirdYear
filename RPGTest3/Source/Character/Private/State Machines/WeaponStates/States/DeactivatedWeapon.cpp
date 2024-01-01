// Fill out your copyright notice in the Description page of Project Settings.


#include "State Machines/WeaponStates/States/DeactivatedWeapon.h"

#include "Weapon/Weapon.h"

void UDeactivatedWeapon::OnEnter_Implementation(AWeapon* _Weapon)
{
	Super::OnEnter_Implementation(_Weapon);
	Weapon->SetActorHiddenInGame(true);
	Weapon->SetActorEnableCollision(false);
}

void UDeactivatedWeapon::OnExit_Implementation()
{
	Super::OnExit_Implementation();
}
