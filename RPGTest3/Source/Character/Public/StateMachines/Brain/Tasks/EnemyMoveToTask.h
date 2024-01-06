// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachines/Brain/EnemyTask.h"
#include "EnemyMoveToTask.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API UEnemyMoveToTask : public UEnemyTask
{
	GENERATED_BODY()
public:
	virtual void OnStartTask_Implementation(ARPGBrainController* _Brain) override;
	virtual void OnUpdateTask_Implementation() override;
private:
	void MovementInput();
};
