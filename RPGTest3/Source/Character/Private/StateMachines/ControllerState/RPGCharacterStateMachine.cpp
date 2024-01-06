// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachines/ControllerState/RPGCharacterStateMachine.h"

#include "StateMachines/ControllerState/States/IdleState.h"

URPGCharacterStateMachine::URPGCharacterStateMachine()
{
	SetState(NewObject<UIdleState>());
}

void URPGCharacterStateMachine::Init(ARPGCharacter* CharacterRef)
{
	Character = CharacterRef;
	SetState(NewObject<UIdleState>());
}

void URPGCharacterStateMachine::SetState(UCharacterState* NewState)
{
	if(CurrentState)
	{
		CurrentState->OnExit();
	}
	CurrentState = NewState;
	CurrentState->OnEnter(Character, this);
}

void URPGCharacterStateMachine::OnMoveX(float AxisValue)
{
	XMovement = AxisValue;
}

void URPGCharacterStateMachine::OnMoveY(float AxisValue)
{
	YMovement = AxisValue;
}

void URPGCharacterStateMachine::OnAttack()
{
	Attacking = true;
	
}

void URPGCharacterStateMachine::OnAttacked()
{
	Attacking = false;
}

float URPGCharacterStateMachine::GetXMovement()
{
	return XMovement;
}

float URPGCharacterStateMachine::GetYMovement()
{
	return YMovement;
}

bool URPGCharacterStateMachine::IsAttacking()
{
	return Attacking;
}

ARPGCharacter* URPGCharacterStateMachine::GetCharacter()
{
	return Character;
}
