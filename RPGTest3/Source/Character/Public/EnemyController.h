﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGEnemy.h"
#include "Controllers/RPGBrainController.h"
#include "GameFramework/Actor.h"
#include "EnemyController.generated.h"

UCLASS()
class CHARACTER_API AEnemyController : public AActor
{
	GENERATED_BODY()

public:

	AEnemyController();
	void ResetEnemies();
	void SpawnEnemies(TMap<FString, FVector> NewEnemies);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemies")
	TArray<ARPGEnemy*> Enemies;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemies")
	TArray<ARPGBrainController*> Controllers;
	
private:
	void SpawnEnemy(TTuple<FString, FVector> Enemy);

};