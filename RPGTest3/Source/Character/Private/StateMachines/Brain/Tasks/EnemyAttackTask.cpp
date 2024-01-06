// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/Brain/Tasks/EnemyAttackTask.h"
#include "StateMachines/Brain/Tasks/EnemyMoveToTask.h"
#include "StateMachines/Brain/Tasks/EnemyRechargeTask.h"

void UEnemyAttackTask::OnStartTask_Implementation(ARPGBrainController* _Brain)
{
	Super::OnStartTask_Implementation(_Brain);
}

void UEnemyAttackTask::OnUpdateTask_Implementation()
{
	Super::OnUpdateTask_Implementation();
	if(Brain->GetEnemy()->InRangeForAttack())
	{
		if(!Brain->GetStateMachine()->IsAttacking())
		{
			Brain->GetStateMachine()->OnAttack();
		}
		else
		{
			Brain->NewTask(NewObject<UEnemyRechargeTask>());
		}
	}
	else
	{
		Brain->NewTask(NewObject<UEnemyMoveToTask>());
	}
}
