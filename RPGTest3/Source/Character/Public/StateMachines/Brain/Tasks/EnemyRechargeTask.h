// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachines/Brain/EnemyTask.h"
#include "EnemyRechargeTask.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API UEnemyRechargeTask : public UEnemyTask
{
	GENERATED_BODY()
public:
	virtual void OnStartTask_Implementation(ARPGBrainController* _Brain) override;
	virtual void OnUpdateTask_Implementation() override;
private:
	void Count();
	float RechargeTime = 2.5f;
	float CurrentTime = 0.0f;
	bool TimeEnded();
};
