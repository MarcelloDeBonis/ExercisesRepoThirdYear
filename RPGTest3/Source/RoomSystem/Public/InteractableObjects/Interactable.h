// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGPlayer.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

UINTERFACE()
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ROOMSYSTEM_API IInteractable
{
	GENERATED_BODY()

public:
	virtual AActor* GetOwningActor();
	
protected:
	
	UFUNCTION(BlueprintNativeEvent)
	void OnInteract(ARPGPlayer* Player);
};
