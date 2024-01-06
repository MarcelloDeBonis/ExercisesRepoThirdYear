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
	static ARPGEnemy* GetEnemyActor(UWorld* WorldContext, FString EnemyName);
	static ARPGEnemy* BuildSkeleton(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildGhost(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildSlime(ARPGEnemy* Enemy);
	static ARPGEnemy* BuildRat(ARPGEnemy* Enemy);
	
	static void BuildInfo(ARPGEnemy* Enemy, FString EnemyName);
	static void BuildRangeEnemy(ARPGEnemy* Enemy);
	static void BuildMeleeEnemy(ARPGEnemy* Enemy);
	static void BuildMeleeAttackComponent(ARPGEnemy* Enemy);
	static void BuildRangeAttackComponent(ARPGEnemy* Enemy);
	
};
