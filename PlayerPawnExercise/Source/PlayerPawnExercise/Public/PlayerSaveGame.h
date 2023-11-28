// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FGameData {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	int32 Health;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	int32 Power;
};

UCLASS()
class PLAYERPAWNEXERCISE_API UPlayerSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, Category = "SaveGame")
	FGameData PlayerStats;

	UPlayerSaveGame();
};
