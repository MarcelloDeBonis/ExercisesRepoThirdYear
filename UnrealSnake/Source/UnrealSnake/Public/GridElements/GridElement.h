// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Enums/GridElementType.h"
#include "GameFramework/Actor.h"
#include "GridElement.generated.h"

class ATile;

UCLASS(Abstract)
class UNREALSNAKE_API AGridElement : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGridElement();
	GridElementType Type;
	virtual void CollideWithSnake();
	virtual void Tick(float DeltaSeconds) override;
	virtual void Initialize(ATile* tile);
protected:
	virtual void BeginPlay() override;
	UStaticMeshComponent* CubeComponent;
	void InitCubeComponent();
	virtual void InitCubeMaterial();
};
