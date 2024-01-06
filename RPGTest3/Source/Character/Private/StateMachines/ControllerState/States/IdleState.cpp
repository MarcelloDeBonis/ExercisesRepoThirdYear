// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/ControllerState/States/IdleState.h"

#include "StateMachines/ControllerState/RPGCharacterStateMachine.h"
#include "StateMachines/ControllerState/States/AttackingState.h"
#include "StateMachines/ControllerState/States/MovingState.h"

void UIdleState::OnEnter_Implementation(ARPGCharacter* CharacterRef, URPGCharacterStateMachine* StateMachineRef)
{
	Super::OnEnter_Implementation(CharacterRef, StateMachineRef);
}

void UIdleState::OnUpdate_Implementation(float DeltaTime)
{
	Super::OnUpdate_Implementation(DeltaTime);

	if(StateMachine->GetXMovement()!=0 || StateMachine->GetYMovement()!=0)
	{
		StateMachine->SetState(NewObject<UMovingState>());
	}

	if(StateMachine->IsAttacking())
	{
		StateMachine->SetState(NewObject<UAttackingState>());
	}
}

void UIdleState::OnExit_Implementation()
{
	Super::OnExit_Implementation();
}
