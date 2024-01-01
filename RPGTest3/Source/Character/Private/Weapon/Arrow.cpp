// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/Arrow.h"

AArrow::AArrow(float _ArrowDistanceIncrease)
{
	PrimaryActorTick.bCanEverTick = true;
	ArrowDistanceIncrease = _ArrowDistanceIncrease;
}

void AArrow::ActiveWeapon(const float TimeActivation)
{
	Super::ActiveWeapon(TimeActivation);
	ResetPosition();

	GetWorld()->GetTimerManager().ClearTimer(MoveTimerHandle);
	GetWorld()->GetTimerManager().SetTimer(MoveTimerHandle, this, &AArrow::Move, TimeActivation, true);
}

AArrow::AArrow()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AArrow::ResetPosition()
{
	FollowerComponent->SetDistanceToMaintain(StartDistance);
	CurrentDistance = StartDistance;
}

void AArrow::Move()
{
	CurrentDistance+=ArrowDistanceIncrease;
	FollowerComponent->SetDistanceToMaintain(CurrentDistance);
}
