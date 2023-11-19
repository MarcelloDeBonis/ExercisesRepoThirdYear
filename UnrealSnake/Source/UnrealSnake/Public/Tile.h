// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridElements/GridElement.h"
#include "Enums/Direction.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UCLASS()
class UNREALSNAKE_API ATile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATile();
	AGridElement* Element;
	std::tuple<bool,ATile*> GetTile(Direction Direction);
	void ArriveNewElement(AGridElement* NewElement);
	virtual void Tick(float DeltaSeconds) override;
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void InitTile(float RayLength);
	AGridElement* SpawnSnakeBodyHere();
	AGridElement* SpawnFruitHere();
private:
	FVector ElementPosition();
	ATile* ForwardTile;
	ATile* RightTile;
	ATile* LeftTile;
	ATile* BackTile;
	void ElementDisappear();
	ATile* PerformRaycasts(float RayLength, const FVector& Dir);
	bool IsABorderTile();
	void SearchNearTile(float RayLength);
	AGridElement* SpawnWallHere();
	void SpawnTileCube();
protected:
	
	UStaticMeshComponent* CubeComponent;
	virtual void BeginPlay() override;
};
