// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableObjects/Interactable.h"
#include "UObject/Object.h"
#include "InteractableState.generated.h"

class IInteractable;
/**
 * 
 */
UCLASS(Abstract)
class ROOMSYSTEM_API UInteractableState : public UObject
{
	GENERATED_BODY()
public:
	
	virtual void OnEnter(IInteractable* _Interactable);
	
	virtual void OnExitState();

	virtual void OnCallInteractFunct(ARPGPlayer* Player);

protected:
	
	IInteractable* MyInteractable;
};
