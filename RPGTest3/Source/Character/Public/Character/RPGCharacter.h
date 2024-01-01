// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HealthComponent.h"
#include "GameFramework/Actor.h"
#include "State Machines/ControllerState/CharacterState.h"
#include "RPGCharacter.generated.h"

UCLASS(Abstract)
class CHARACTER_API ARPGCharacter : public APawn
{
	GENERATED_BODY()

public:
	
	ARPGCharacter();
	UHealthComponent* HealthComponent = nullptr;
	
protected:
	
	virtual void InitComponents();
	void ChangeState(UCharacterState* NewState);
	
	UCharacterState* CurrentState = nullptr;

private:

	void InitHealthComponent();
};
