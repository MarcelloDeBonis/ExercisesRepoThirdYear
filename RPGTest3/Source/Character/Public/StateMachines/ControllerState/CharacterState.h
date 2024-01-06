// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGCharacter.h"
#include "UObject/Object.h"
#include "CharacterState.generated.h"

class URPGCharacterStateMachine;


UCLASS()
class CHARACTER_API UCharacterState : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintNativeEvent)
	void OnEnter(ARPGCharacter* CharacterRef, URPGCharacterStateMachine* StateMachineRef);

	UFUNCTION(BlueprintNativeEvent)
	void OnUpdate(float DeltaTime);
	
	UFUNCTION(BlueprintNativeEvent)
	void OnExit();
protected:

	UPROPERTY()
	ARPGCharacter* Character = nullptr;

	UPROPERTY()
	URPGCharacterStateMachine* StateMachine = nullptr;
};
