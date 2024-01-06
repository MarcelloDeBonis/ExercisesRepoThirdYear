// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/RPGBrainController.h"

#include "StateMachines/Brain/Tasks/EnemySearchTask.h"


ARPGBrainController::ARPGBrainController()
{
	PrimaryActorTick.bCanEverTick = true;
}

ARPGBrainController::ARPGBrainController(ARPGEnemy* EnemyRef)
{
	PrimaryActorTick.bCanEverTick = true;
	Enemy = EnemyRef;
}

void ARPGBrainController::NewTask(UEnemyTask* NewTask)
{
	CurrentTask = NewTask;
	CurrentTask->OnStartTask(this);
}

URPGCharacterStateMachine* ARPGBrainController::GetStateMachine()
{
	return StateMachine;
}

ARPGEnemy* ARPGBrainController::GetEnemy()
{
	return Enemy;
}

void ARPGBrainController::BeginPlay()
{
	Super::BeginPlay();
	StateMachine = NewObject<URPGCharacterStateMachine>(Enemy);
	NewTask(NewObject<UEnemySearchTask>(this));
}

void ARPGBrainController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(StateMachine->CurrentState!=nullptr)
	{
		StateMachine->CurrentState->OnUpdate(DeltaTime);
	}

	if(CurrentTask!=nullptr)
	{
		CurrentTask->OnUpdateTask();
	}
}
