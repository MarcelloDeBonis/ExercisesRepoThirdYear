// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weapon/Weapon.h"
#include "AttackComponent.generated.h"

UCLASS(Abstract)
class CHARACTER_API UAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UAttackComponent();
	void UseWeapon();
	virtual void SpawnWeapon(int Damage,float _WeaponDuration);
protected:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	AWeapon* Weapon = nullptr;

	float WeaponDuration = 2;
};
