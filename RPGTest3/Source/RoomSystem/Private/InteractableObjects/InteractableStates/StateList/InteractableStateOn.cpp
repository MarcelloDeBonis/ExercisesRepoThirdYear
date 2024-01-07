// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/InteractableStates/StateList/InteractableStateOn.h"

void UInteractableStateOn::OnEnter(AInteractable* _Interactable)
{
	Super::OnEnter(_Interactable);
	AbleVisibility();
}

void UInteractableStateOn::OnExitState()
{
	Super::OnExitState();
}

void UInteractableStateOn::OnCallInteractFunct(ARPGPlayer* Player)
{
	Super::OnCallInteractFunct(Player);
	MyInteractable->OnInteract(Player);
}

void UInteractableStateOn::AbleVisibility()
{
	MyInteractable->GetOwningActor()->SetActorHiddenInGame(false);
	MyInteractable->GetOwningActor()->SetActorEnableCollision(true);
}
