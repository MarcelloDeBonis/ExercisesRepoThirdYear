// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachines/WeaponStates/States/ActivatedWeapon.h"
#include "Weapon/Weapon.h"

void UActivatedWeapon::OnEnter_Implementation(AWeapon* _Weapon)
{
	Super::OnEnter_Implementation(_Weapon);
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetActorEnableCollision(true);
}

void UActivatedWeapon::OnExit_Implementation()
{
	Super::OnExit_Implementation();
}
