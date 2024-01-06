// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/Brain/Tasks/EnemySearchTask.h"

#include "StateMachines/Brain/Tasks/EnemyMoveToTask.h"

void UEnemySearchTask::OnStartTask_Implementation(ARPGBrainController* _Brain)
{
	Super::OnStartTask_Implementation(_Brain);
}

void UEnemySearchTask::OnUpdateTask_Implementation()
{
	Super::OnUpdateTask_Implementation();
	if(Brain->GetEnemy()->IsPlayerInVisibilityRange())
	{
		Brain->NewTask(NewObject<UEnemyMoveToTask>());
	}
}
