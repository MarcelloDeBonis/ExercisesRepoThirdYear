// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponState.generated.h"

class AWeapon;
/**
 * 
 */
UCLASS(Abstract)
class CHARACTER_API UWeaponState : public UObject
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintNativeEvent)
	void OnEnter(AWeapon* _Weapon);

	UFUNCTION(BlueprintNativeEvent)
	void OnExit();
protected:

	UPROPERTY()
	AWeapon* Weapon = nullptr;
};
