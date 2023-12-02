// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridElements/GridElement.h"
#include "Enums/Direction.h"
#include "GameFramework/Actor.h"
#include "GridElements/Fruit.h"
#include "GridElements/BodySnake.h"
#include "Tile.generated.h"

UCLASS()
class UNREALSNAKE_API ATile : public AActor
{
	GENERATED_BODY()
public:
	ATile();
	AGridElement* Element = nullptr;
	ATile* GetTile(Direction Direction);
	void ArriveNewElement(AGridElement* NewElement);
	virtual void Tick(float DeltaSeconds) override;
	void InitTile(float RayLength);
	ABodySnake* SpawnSnakeBodyHere();
	AFruit* SpawnFruitHere();
	ATile* UpTile;
	ATile* RightTile;
	ATile* LeftTile;
	ATile* DownTile;
	void ElementDisappear();
private:
	FVector ElementPosition();
	ATile* PerformRaycasts(float RayLength, const FVector& Dir);
	bool IsABorderTile();
	void SearchNearTile(float RayLength);
	AGridElement* SpawnWallHere();
	void SpawnTileCube();
protected:
	UStaticMeshComponent* CubeComponent;
	virtual void BeginPlay() override;
};
