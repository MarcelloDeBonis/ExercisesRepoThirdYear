// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachines/WeaponStates/WeaponState.h"
#include "DeactivatedWeapon.generated.h"

class AWeapon;
/**
 * 
 */
UCLASS()
class CHARACTER_API UDeactivatedWeapon : public UWeaponState
{
	GENERATED_BODY()
public:
	virtual void OnEnter_Implementation(AWeapon* _Weapon) override;
	virtual void OnExit_Implementation() override;
};
