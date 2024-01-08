// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObjects/Interactable.h"
#include "InteractableObjects/InteractableStates/StateList/InteractableStateOn.h"
#include "Fountain.generated.h"

UCLASS()
class ROOMSYSTEM_API AFountain : public AInteractable
{
	GENERATED_BODY()

public:
	AFountain();
	
	virtual void Interact(ARPGPlayer* Player) override;
	void Active();
	void Deactive();
	
private:

	UPROPERTY()
	UInteractableState* CurrentState;
	
	void SetState(UInteractableState* NewState);
	virtual void OnInteract(ARPGPlayer* Player) override;
	void HealTotally(ARPGPlayer* Player);
};
