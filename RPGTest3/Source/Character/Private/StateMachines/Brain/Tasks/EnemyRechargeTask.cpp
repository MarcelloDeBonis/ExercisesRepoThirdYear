// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachines/Brain/Tasks/EnemyRechargeTask.h"

#include "StateMachines/Brain/Tasks/EnemyAttackTask.h"

void UEnemyRechargeTask::OnStartTask_Implementation(ARPGBrainController* _Brain)
{
	Super::OnStartTask_Implementation(_Brain);
}

void UEnemyRechargeTask::OnUpdateTask_Implementation()
{
	Super::OnUpdateTask_Implementation();
	Count();
	if (TimeEnded())
	{
		Brain->NewTask(NewObject<UEnemyAttackTask>());
	}
}

void UEnemyRechargeTask::Count()
{
	CurrentTime += GetWorld()->GetDeltaSeconds();
}

bool UEnemyRechargeTask::TimeEnded()
{
	return CurrentTime>=RechargeTime;
}
