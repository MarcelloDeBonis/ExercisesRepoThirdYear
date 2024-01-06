// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObjects/Interactable.h"
#include "InteractableObjects/InteractableStates/StateList/InteractableStateOff.h"
#include "InteractableObjects/InteractableStates/StateList/InteractableStateOn.h"
#include "Fountain.generated.h"

UCLASS()
class ROOMSYSTEM_API AFountain : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	AFountain();
	
	void Interact(ARPGPlayer* Player);
	void Active();
	void Deactive();
	
private:

	UPROPERTY()
	UInteractableState* CurrentState;
	
	void SetState(UInteractableState* NewState);
	virtual void OnInteract_Implementation(ARPGPlayer* Player) override;
	void HealTotally(ARPGPlayer* Player);
};
