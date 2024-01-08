// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackComponent.h"
#include "MeleeAttackComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API UMeleeAttackComponent : public UAttackComponent
{
	GENERATED_BODY()

public:
	
	UMeleeAttackComponent();
	virtual void SpawnWeapon(int Damage, float _WeaponDuration) override;
	
protected:
	
	virtual void BeginPlay() override;
};
