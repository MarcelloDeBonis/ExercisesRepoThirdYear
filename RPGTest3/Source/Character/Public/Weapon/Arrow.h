// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Arrow.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API AArrow : public AWeapon
{
	GENERATED_BODY()
public:
	
	AArrow(float _ArrowDistanceIncrease);
	virtual void ActiveWeapon(float TimeActivation) override;

private:
		
	AArrow();
	void ResetPosition();
	void Move();
	
	float ArrowDistanceIncrease = 0.00f;
	float CurrentDistance = 0.0f;
	
	FTimerHandle MoveTimerHandle;
};
