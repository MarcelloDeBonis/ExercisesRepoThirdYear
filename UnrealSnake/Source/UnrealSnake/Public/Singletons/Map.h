// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SingletonActor.h"
#include "Tile.h"
#include "Map.generated.h"

UCLASS()
class UNREALSNAKE_API AMap : public ASingletonActor
{
	GENERATED_BODY()
public:
	AMap();
	UPROPERTY(EditAnywhere)
	ATile* HeadStartTile;
	UPROPERTY(EditAnywhere)
	TArray<ATile*> BodyStartTiles;
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable,Category="Custom")
	void NewTile(ATile* NewTile);
	ATile* GetTileElement(AGridElement* Element);
	void SetSnakeStartPosition();
	TArray<ATile*> GetFreeTiles();
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	TArray<ATile*> TileMap;
	UFUNCTION(BlueprintCallable)
	void InitTiles();
	ATile* GetHeadTile();
};