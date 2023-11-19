// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SnakeGameMode.generated.h"

UCLASS()
class UNREALSNAKE_API ASnakeGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASnakeGameMode();
	virtual void Tick(float DeltaTime) override;
	void NewGame();
	void Lost();
	void QuitGame();
private:
	bool NewBestScore();
	void SetNewBestScore();
	void LoadData();
	void SaveData();
	void ResetCurrentScore();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int points;
	int bestScore;
};
