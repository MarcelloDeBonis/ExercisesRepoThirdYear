// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/ControllerState/CharacterState.h"

void UCharacterState::OnEnter_Implementation(ARPGCharacter* CharacterRef,URPGCharacterStateMachine* StateMachineRef)
{
	Character = CharacterRef;
	StateMachine = StateMachineRef;
	if(Character!=nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Entering in state: %s with character: %s"), *GetClass()->GetName(), *Character->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Entering in state: %s with character: nullptr"), *GetClass()->GetName());
	}
}

void UCharacterState::OnUpdate_Implementation(float DeltaTime)
{
	if(Character!=nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Updating state: %s with character: %s"), *GetClass()->GetName(), *Character->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Updating state: %s with character: nullptr"), *GetClass()->GetName());
	}
}

void UCharacterState::OnExit_Implementation()
{
	if(Character!=nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Exiting state: %s with character: %s"), *GetClass()->GetName(), *Character->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Exiting state: %s with character: nullptr"), *GetClass()->GetName());
	}
}

