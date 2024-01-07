// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableObjects/Chest/Chest.h"
#include "InteractableObjects/InteractableStates/InteractableState.h"
#include "InteractableObjects/InteractableStates/StateList/InteractableStateOff.h"
#include "InteractableObjects/InteractableStates/StateList/InteractableStateOn.h"

AChest::AChest()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AChest::Interact(ARPGPlayer* Player)
{
	GainHealPotions(Player);
}

void AChest::Active()
{
	SetState(NewObject<UInteractableStateOn>());
}

void AChest::Deactive()
{
	SetState(NewObject<UInteractableStateOff>());
}

void AChest::SetState(UInteractableState* NewState)
{
	if(CurrentState)
	{
		CurrentState->OnExitState();
	}
	CurrentState = NewState;
	CurrentState->OnEnter(this);
}

void AChest::OnInteract(ARPGPlayer* Player)
{
	CurrentState->OnCallInteractFunct(Player);	
}

void AChest::GainHealPotions(ARPGPlayer* Player)
{
	Player->InventoryComponent->GainHealPotions(HealPotions);
}