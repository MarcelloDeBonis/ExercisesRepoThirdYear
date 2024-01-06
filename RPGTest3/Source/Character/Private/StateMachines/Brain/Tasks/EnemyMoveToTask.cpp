// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/Brain/Tasks/EnemyMoveToTask.h"

#include "StateMachines/Brain/Tasks/EnemyAttackTask.h"
#include "StateMachines/Brain/Tasks/EnemySearchTask.h"

void UEnemyMoveToTask::OnStartTask_Implementation(ARPGBrainController* _Brain)
{
	Super::OnStartTask_Implementation(_Brain);
}

void UEnemyMoveToTask::OnUpdateTask_Implementation()
{
	Super::OnUpdateTask_Implementation();

	MovementInput();
	if(Brain->GetEnemy()->InRangeForAttack())
	{
		Brain->NewTask(NewObject<UEnemyAttackTask>());
	}

	if(!Brain->GetEnemy()->IsPlayerInVisibilityRange())
	{
		Brain->NewTask(NewObject<UEnemySearchTask>());
	}
}

void UEnemyMoveToTask::MovementInput()
{
	float XPlayer= GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation().X;
	float YPlayer= GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation().Y;

	float  XEnemy= Brain->GetEnemy()->GetActorLocation().X;
	float  YEnemy= Brain->GetEnemy()->GetActorLocation().Y;

	if(XPlayer > XEnemy)
	{
		Brain->GetStateMachine()->OnMoveX(1);
	}
	else if(XPlayer < XEnemy)
	{
		Brain->GetStateMachine()->OnMoveX(-1);
	}
	else if (XPlayer == XEnemy)
	{
		Brain->GetStateMachine()->OnMoveX(0);
	}

	if(YPlayer > YEnemy)
	{
		Brain->GetStateMachine()->OnMoveY(1);
	}
	else if(YPlayer < YEnemy)
	{
		Brain->GetStateMachine()->OnMoveY(-1);
	}
	else if (YPlayer == YEnemy)
	{
		Brain->GetStateMachine()->OnMoveY(0);
	}
}
