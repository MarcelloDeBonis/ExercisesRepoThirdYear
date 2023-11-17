// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

class UMySaveGame;

UCLASS()
class PLAYERPAWNEXERCISE_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	// Constructor
	AMyGameMode();

	// Function to save the game state
	UFUNCTION(BlueprintCallable, Category = "Game")
	void SaveGame();

	// Function to load the game state
	UFUNCTION(BlueprintCallable, Category = "Game")
	void LoadGame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
