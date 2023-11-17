// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Amypawn.h"
#include "UMySaveGame.generated.h"

UCLASS()
class PLAYERPAWNEXERCISE_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, Category = "Player")
	FPlayerStatistics SavedPlayerStats;

	UMySaveGame();
};
