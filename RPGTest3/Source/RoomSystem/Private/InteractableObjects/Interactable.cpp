// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Interactable.h"

AInteractable::AInteractable()
{
	PrimaryActorTick.bCanEverTick = true;
}

AActor* AInteractable::GetOwningActor()
{
	return Cast<AActor>(this);
}

void AInteractable::OnInteract(ARPGPlayer* Player)
{
}

void AInteractable::Interact(ARPGPlayer* Player)
{
}
