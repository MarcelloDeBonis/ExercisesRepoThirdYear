// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/InteractableStates/InteractableState.h"

void UInteractableState::OnExitState()
{
}

void UInteractableState::OnCallInteractFunct(ARPGPlayer* Player)
{
}

void UInteractableState::OnEnter(AInteractable* _Interactable)
{
	MyInteractable = _Interactable;
}
