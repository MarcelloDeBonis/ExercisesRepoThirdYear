// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/Brain/EnemyTask.h"

void UEnemyTask::OnStartTask_Implementation(ARPGBrainController* _Brain)
{
	Brain = _Brain;
}

void UEnemyTask::OnUpdateTask_Implementation()
{
}
