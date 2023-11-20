// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enums/Direction.h"
#include "GameFramework/PlayerController.h"
#include "SnakePlayerController.generated.h"

UCLASS()
class UNREALSNAKE_API ASnakePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ASnakePlayerController();

protected:
	virtual void BeginPlay() override;
	bool CanChangeDirection(Direction NewDirection);
	void GoUp();
	void GoRight();
	void GoDown();
	void GoLeft();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
};
