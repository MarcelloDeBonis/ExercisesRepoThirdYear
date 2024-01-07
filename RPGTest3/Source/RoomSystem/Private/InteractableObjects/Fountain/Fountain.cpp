// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Fountain/Fountain.h"

AFountain::AFountain()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFountain::Interact(ARPGPlayer* Player)
{
	HealTotally(Player);
}

void AFountain::Active()
{
	SetState(NewObject<UInteractableStateOn>());
}

void AFountain::Deactive()
{
	SetState(NewObject<UInteractableStateOff>());
}

void AFountain::SetState(UInteractableState* NewState)
{
	if(CurrentState)
	{
		CurrentState->OnExitState();
	}
	CurrentState = NewState;
	CurrentState->OnEnter(this);
}

void AFountain::OnInteract(ARPGPlayer* Player)
{
	CurrentState->OnCallInteractFunct(Player);
}

void AFountain::HealTotally(ARPGPlayer* Player)
{
	Player->HealthComponent->HealTotally();
}

