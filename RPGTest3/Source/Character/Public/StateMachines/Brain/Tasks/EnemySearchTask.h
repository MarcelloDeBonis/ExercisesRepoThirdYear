// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachines/Brain/EnemyTask.h"
#include "EnemySearchTask.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API UEnemySearchTask : public UEnemyTask
{
	GENERATED_BODY()
public:

	virtual void OnStartTask_Implementation(ARPGBrainController* _Brain) override;
	virtual void OnUpdateTask_Implementation() override;
};
