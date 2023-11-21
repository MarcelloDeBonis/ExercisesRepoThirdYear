﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakePawn.h"
#include "TimerManager.h"
#include "Singletons/Map.h"

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
	MoveHead();
	
	if(!BodyGained)
	{
		MoveBody();
	}
	BodyGained = false;
}

void ASnakePawn::MoveHead()
{
	LastTileHead = AMap::GetInstance<AMap>()->GetTileElement(Head);
	ATile* NextTileHead = (LastTileHead->GetTile(_Direction));
	NextTileHead->ArriveNewElement(Head);
}

void ASnakePawn::MoveBody()
{
	LastTileHead->ArriveNewElement(BodyList[BodyList.Num() - 1]);
	ABodySnake* NewFirstBodyPart = BodyList[BodyList.Num() - 1];
	BodyList.RemoveAt(BodyList.Num() - 1);
	BodyList.Insert(NewFirstBodyPart,0);
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

void ASnakePawn::SetStartDirection()
{
	ATile* TileStartBody = AMap::GetInstance<AMap>()->GetTileElement(BodyList[0]);

	if(TileStartBody->UpTile->Element == Head)
	{
		_Direction=Up;
	}

	if(TileStartBody->RightTile->Element == Head)
	{
		_Direction=Right;
	}

	if(TileStartBody->DownTile->Element == Head)
	{
		_Direction=Down;
	}

	if(TileStartBody->LeftTile->Element == Head)
	{
		_Direction=Left;
	}
}

void ASnakePawn::GainBody()
{
	AddBodyPart(LastTileHead->SpawnSnakeBodyHere());
}

