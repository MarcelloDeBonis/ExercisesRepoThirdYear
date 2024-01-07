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
	virtual void OnInteract(ARPGPlayer* Player);
};
