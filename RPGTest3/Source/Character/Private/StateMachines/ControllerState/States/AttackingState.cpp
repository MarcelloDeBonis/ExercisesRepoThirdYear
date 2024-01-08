﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/ControllerState/States/AttackingState.h"

#include "StateMachines/ControllerState/RPGCharacterStateMachine.h"
#include "StateMachines/ControllerState/States/IdleState.h"

void UAttackingState::OnEnter_Implementation(ARPGCharacter* CharacterRef, URPGCharacterStateMachine* StateMachineRef)
{
	Super::OnEnter_Implementation(CharacterRef, StateMachineRef);
	Character->AttackComponent->UseWeapon();
}

void UAttackingState::OnUpdate_Implementation(float DeltaTime)
{
	Super::OnUpdate_Implementation(DeltaTime);
	if(!StateMachine->IsAttacking())
	{
		StateMachine->SetState(NewObject<UIdleState>());
	}
}

void UAttackingState::OnExit_Implementation()
{
	Super::OnExit_Implementation();
}