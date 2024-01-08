﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachines/ControllerState/CharacterState.h"
#include "AttackingState.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API UAttackingState : public UCharacterState
{
	GENERATED_BODY()
public:
	virtual void OnEnter_Implementation(ARPGCharacter* CharacterRef, URPGCharacterStateMachine* StateMachineRef) override;
	virtual void OnUpdate_Implementation(float DeltaTime) override;
	virtual void OnExit_Implementation() override;
};