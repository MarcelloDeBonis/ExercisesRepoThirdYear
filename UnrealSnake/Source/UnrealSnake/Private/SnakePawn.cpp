// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakePawn.h"
#include "TimerManager.h"

ASnakePawn::ASnakePawn()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASnakePawn::BeginPlay()
{
	Super::BeginPlay();
}

void ASnakePawn::MoveToNextTile()
{

	
	if(BodyGained)
	{
		//last element doesn't become the first
	}
}

void ASnakePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASnakePawn::ChangeDirection(Direction NewDirection)
{
	_Direction = NewDirection;
}

Direction ASnakePawn::GetDirection()
{
	return _Direction;
}

void ASnakePawn::StartMove(float Interval)
{
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ASnakePawn::MoveToNextTile, Interval, true);
}

void ASnakePawn::StopMove()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
}

void ASnakePawn::AddBodyPart(ABodySnake* NewBodyPart)
{
	BodyList.Insert(NewBodyPart,0);
	BodyGained = true;
}



