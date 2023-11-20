// Fill out your copyright notice in the Description page of Project Settings.

#include "Singletons/Map.h"
#include "SnakePawn.h"

AMap::AMap()
{
	PrimaryActorTick.bCanEverTick = true;
	SetSingleInstance();
}

void AMap::BeginPlay()
{
	Super::BeginPlay();
}

void AMap::InitTiles()
{
	ASnakePawn* Pawn = Cast<ASnakePawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	
	for (auto tile : TileMap)
	{
		tile->InitTile(350);
	}

	AHeadSnake* Head = GetWorld()->SpawnActor<AHeadSnake>(AHeadSnake::StaticClass());
	Pawn->Head = Head;
	
	HeadStartTile->ArriveNewElement(Pawn->Head);

	for (auto BodyPartTile : BodyStartTiles)
	{
		Pawn->BodyList.Add(BodyPartTile->SpawnSnakeBodyHere());
	}
	
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