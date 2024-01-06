// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackComponent.h"
#include "RangedAttackComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API URangedAttackComponent : public UAttackComponent
{
	GENERATED_BODY()

public:
	
	URangedAttackComponent();

protected:

	float ArrowDistanceIncrease = 0.05f;
	
	virtual void BeginPlay() override;
	virtual void SpawnWeapon(int Damage, float _WeaponDuration) override;

};
