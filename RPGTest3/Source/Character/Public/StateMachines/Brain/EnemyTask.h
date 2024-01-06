// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Controllers/RPGBrainController.h"
#include "UObject/Object.h"
#include "EnemyTask.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API UEnemyTask : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintNativeEvent)
	void OnStartTask(ARPGBrainController* _Brain);

	UFUNCTION(BlueprintNativeEvent)
	void OnUpdateTask();

protected:

	UPROPERTY()
	ARPGBrainController* Brain = nullptr;
};
