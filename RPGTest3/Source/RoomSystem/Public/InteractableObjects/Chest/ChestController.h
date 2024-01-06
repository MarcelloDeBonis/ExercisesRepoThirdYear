// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Chest.h"
#include "GameFramework/Actor.h"
#include "ChestController.generated.h"

UCLASS()
class ROOMSYSTEM_API AChestController : public AActor
{
	GENERATED_BODY()

public:
	AChestController();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Chest")
	AChest* Chest;

	void AbleChest();
	void DisableChest();
};
