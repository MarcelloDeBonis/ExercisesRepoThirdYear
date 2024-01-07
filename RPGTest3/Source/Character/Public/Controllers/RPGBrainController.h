// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGController.h"
#include "Character/RPGEnemy.h"
#include "StateMachines/ControllerState/RPGCharacterStateMachine.h"
#include "RPGBrainController.generated.h"

class UEnemyTask;

UCLASS()
class CHARACTER_API ARPGBrainController : public AController, public IRPGController
{
	GENERATED_BODY()

public:
	
	ARPGBrainController();
	void NewTask(UEnemyTask* Task);
	URPGCharacterStateMachine* GetStateMachine();
	ARPGEnemy* GetEnemy();
	virtual void OnDeactiveAttack() override;
	void Init(ARPGEnemy* EnemyRef);
	
private:
	
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
