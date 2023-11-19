// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridElement.h"
#include "Wall.generated.h"

UCLASS()
class UNREALSNAKE_API AWall : public AGridElement
{
	GENERATED_BODY()

public:
	AWall();
	virtual void Initialize(ATile* tile) override;
	virtual void CollideWithSnake() override;
	virtual void Tick(float DeltaSeconds) override;
protected:
	virtual void BeginPlay() override;
	virtual void InitCubeMaterial() override;
};
