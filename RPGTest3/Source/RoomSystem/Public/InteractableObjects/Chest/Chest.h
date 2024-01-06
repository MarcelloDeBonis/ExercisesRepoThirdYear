// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObjects/Interactable.h"
#include "InteractableObjects/InteractableStates/InteractableState.h"
#include "Chest.generated.h"

UCLASS()
class ROOMSYSTEM_API AChest : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	
	AChest();

	void Interact(ARPGPlayer* Player);
	void Active();
	void Deactive();

private:

	int HealPotions = 3;
	
	UPROPERTY()
	UInteractableState* CurrentState = nullptr;
	
	void SetState(UInteractableState* NewState);
	virtual void OnInteract_Implementation(ARPGPlayer* Player) override;
	void GainHealPotions(ARPGPlayer* Player);
};
