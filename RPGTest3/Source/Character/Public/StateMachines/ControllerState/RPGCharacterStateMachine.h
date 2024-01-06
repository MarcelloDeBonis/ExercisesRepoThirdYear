// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterState.h"
#include "Character/RPGCharacter.h"
#include "UObject/Object.h"
#include "RPGCharacterStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API URPGCharacterStateMachine : public UObject
{
	GENERATED_BODY()
public:

	URPGCharacterStateMachine();
	void SetState(UCharacterState* NewState);
	void OnMoveX(float AxisValue);
	void OnMoveY(float AxisValue);
	void OnAttack();
	void OnAttacked();

	float GetXMovement();
	float GetYMovement();
	bool IsAttacking();

	ARPGCharacter* GetCharacter();

	UPROPERTY()
	UCharacterState* CurrentState =  nullptr;

	void Init(ARPGCharacter* CharacterRef);
private:
	
	UPROPERTY()
	ARPGCharacter* Character = nullptr;
	
	float XMovement = 0.0f;
	float YMovement = 0.0f;
	bool Attacking = false;

};
