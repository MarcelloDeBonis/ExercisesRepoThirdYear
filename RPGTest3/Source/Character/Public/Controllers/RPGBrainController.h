// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGBrainController.generated.h"

UCLASS()
class CHARACTER_API ARPGBrainController : public AController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARPGBrainController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
