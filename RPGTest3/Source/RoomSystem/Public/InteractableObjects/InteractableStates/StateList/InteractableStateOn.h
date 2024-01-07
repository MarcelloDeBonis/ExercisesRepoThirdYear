// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableObjects/InteractableStates/InteractableState.h"
#include "InteractableStateOn.generated.h"

UCLASS()
class ROOMSYSTEM_API UInteractableStateOn : public UInteractableState
{
	GENERATED_BODY()
	
public:
	virtual void OnEnter(AInteractable* _Interactable) override;
	virtual void OnExitState() override;
	virtual void OnCallInteractFunct(ARPGPlayer* Player) override;

private:
	void AbleVisibility();
};
