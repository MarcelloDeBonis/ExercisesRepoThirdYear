// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGEnemy.h"
#include "Controllers/RPGBrainController.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnemyBuilder.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API UEnemyBuilder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	static ARPGBrainController* GetEnemy(UWorld* WorldContext, FString EnemyName, FVector Position);
	
private:
	static ARPGEnemy* BuildBPEnemy(UWorld* WorldContext, FString EnemyName, FVector Position);
	static ARPGEnemy* GetEnemyActor(UWorld* WorldContext, FString EnemyName, FVector Position);
	static ARPGEnemy* BuildSkeleton(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildGhost(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildSlime(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildRat(ARPGEnemy* Enemy);
	
	static ARPGEnemy* BuildInfo(ARPGEnemy* Enemy, FString EnemyName);
	static ARPGEnemy* BuildRangeEnemy(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildMeleeEnemy(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildMeleeAttackComponent(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildRangeAttackComponent(ARPGEnemy* Enemy);
	
};
