// Fill out your copyright notice in the Description page of Project Settings.

#include "Singletons/Map.h"
#include "SnakePawn.h"

AMap::AMap()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMap::BeginPlay()
{
	Super::BeginPlay();
	SetSingleInstance(this);
}

void AMap::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	RemoveSingleInstance<ThisClass>();
}


void AMap::InitTiles()
{
	for (auto tile : TileMap)
	{
		tile->InitTile(350);
	}
}

void AMap::SetSnakeStartPosition()
{
	ASnakePawn* Pawn = Cast<ASnakePawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	
	AHeadSnake* Head = GetWorld()->SpawnActor<AHeadSnake>(AHeadSnake::StaticClass());
	Pawn->Head = Head;
	
	HeadStartTile->ArriveNewElement(Pawn->Head);

	for (auto BodyPartTile : BodyStartTiles)
	{
		Pawn->BodyList.Add(BodyPartTile->SpawnSnakeBodyHere());
	}
	
}

TArray<ATile*> AMap::GetFreeTiles()
{
	TArray<ATile*> FreeTiles;
	for (auto tile : TileMap)
	{
		if(tile->Element==nullptr)
		{
			FreeTiles.Add(tile);
		}
	}
	return FreeTiles;
}

void AMap::NewTile(ATile* NewTile)
{
	TileMap.Add(NewTile);
}

void AMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

ATile* AMap::GetHeadTile()
{
	for (auto tile : TileMap)
	{
		if(tile->Element==Cast<ASnakePawn>(GetWorld()->GetFirstPlayerController()->GetPawn())->Head)
		{
			return tile;
		};
	}

	return nullptr;
}

ATile* AMap::GetTileElement(AGridElement* Element)
{
	for (auto tile : TileMap)
	{
		if(tile->Element==Element)
		{
			return tile;
		}
	}

	return nullptr;
}