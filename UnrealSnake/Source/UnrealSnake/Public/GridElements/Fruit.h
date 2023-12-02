// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridElement.h"
#include "Fruit.generated.h"

UCLASS()
class UNREALSNAKE_API AFruit : public AGridElement
{
	GENERATED_BODY()
public:
	AFruit();
	virtual void Initialize(ATile* tile) override;
	virtual void CollideWithSnake() override;
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	virtual void InitCubeMaterial() override;
};
