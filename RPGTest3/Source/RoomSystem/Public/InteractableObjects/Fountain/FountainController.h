// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fountain.h"
#include "GameFramework/Actor.h"
#include "FountainController.generated.h"

UCLASS()
class ROOMSYSTEM_API AFountainController : public AActor
{
	GENERATED_BODY()

public:
	
	AFountainController();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fountain")
	AFountain* Fountain;

	void AbleFountain();
	void DisableFountain();
};
