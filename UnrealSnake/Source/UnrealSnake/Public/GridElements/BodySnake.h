// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnrealSnake/Public/GridElements/GridElement.h"
#include "BodySnake.generated.h"

UCLASS()
class UNREALSNAKE_API ABodySnake : public AGridElement
{
	GENERATED_BODY()

public:
	ABodySnake();
	virtual void Initialize(ATile* tile) override;
	virtual void CollideWithSnake() override;
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	virtual void InitCubeMaterial() override;
};
