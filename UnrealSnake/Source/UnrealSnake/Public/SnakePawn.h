// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enums/Direction.h"
#include "GameFramework/DefaultPawn.h"
#include "GridElements/BodySnake.h"
#include "GridElements/HeadSnake.h"
#include "SnakePawn.generated.h"

UCLASS()
class UNREALSNAKE_API ASnakePawn : public APawn
{
	GENERATED_BODY()
public:
	ASnakePawn();
	virtual void Tick(float DeltaTime) override;
	void ChangeDirection(Direction NewDirection);
	Direction GetDirection();
	void StartMove(float Interval);
	void StopMove();
	void AddBodyPart(ABodySnake* NewBodyPart);
	TArray<ABodySnake*> BodyList;
	AHeadSnake* Head;
	void SetStartDirection();
	void GainBody();
protected:
	virtual void BeginPlay() override;
private:
	Direction _Direction;
	void MoveToNextTile();
	bool BodyGained;
	FTimerHandle TimerHandle;
	ATile* LastTileHead;
	void MoveHead();
	void MoveBody();
};
