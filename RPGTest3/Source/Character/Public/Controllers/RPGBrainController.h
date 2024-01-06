// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGEnemy.h"
#include "StateMachines/ControllerState/RPGCharacterStateMachine.h"
#include "RPGBrainController.generated.h"

class UEnemyTask;

UCLASS()
class CHARACTER_API ARPGBrainController : public AController
{
	GENERATED_BODY()

public:

	ARPGBrainController(ARPGEnemy* EnemyRef);
	void NewTask(UEnemyTask* Task);
	URPGCharacterStateMachine* GetStateMachine();
	ARPGEnemy* GetEnemy();
private:
	
	ARPGBrainController();

	UPROPERTY()
	ARPGEnemy* Enemy = nullptr;

	UPROPERTY()
	URPGCharacterStateMachine* StateMachine = nullptr;

	UPROPERTY()
	UEnemyTask* CurrentTask = nullptr;
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
