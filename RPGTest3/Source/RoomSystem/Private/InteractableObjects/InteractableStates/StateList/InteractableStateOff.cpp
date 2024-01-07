// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/InteractableStates/StateList/InteractableStateOff.h"

void UInteractableStateOff::OnEnter(AInteractable* _Interactable)
{
	Super::OnEnter(_Interactable);
	DisableVisibility();
}

void UInteractableStateOff::OnExitState()
{
	Super::OnExitState();
}

void UInteractableStateOff::OnCallInteractFunct(ARPGPlayer* Player)
{
	Super::OnCallInteractFunct(Player);
}

void UInteractableStateOff::DisableVisibility()
{
	Cast<AActor>(MyInteractable)->SetActorHiddenInGame(true);
	Cast<AActor>(MyInteractable)->SetActorEnableCollision(false);
}
