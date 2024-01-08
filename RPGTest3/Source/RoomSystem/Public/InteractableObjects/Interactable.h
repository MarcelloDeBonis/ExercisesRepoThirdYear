// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGPlayer.h"
#include "Interactable.generated.h"

UCLASS(Abstract)
class ROOMSYSTEM_API AInteractable : public AActor
{
	GENERATED_BODY()

public:

	AInteractable();
	virtual AActor* GetOwningActor();

	UFUNCTION(BlueprintCallable, Category = "Interactable")
	virtual void OnInteract(ARPGPlayer* Player);

	virtual void Interact(ARPGPlayer* Player);
};
