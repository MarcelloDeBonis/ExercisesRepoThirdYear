// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealSnake/Public/GridElements/Fruit.h"
#include "SnakePawn.h"
#include "Singletons/FruitSpawner.h"
#include "Singletons/Map.h"
#include "UnrealSnake/Public/Tile.h"

AFruit::AFruit()
{
	PrimaryActorTick.bCanEverTick = true;
	InitCubeComponent();
}

void AFruit::BeginPlay()
{
	Super::BeginPlay();
}

void AFruit::InitCubeMaterial()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> BlueMaterial(TEXT("/Script/Engine.Material'/Game/Materials/FruitMaterial.FruitMaterial'"));
	if (BlueMaterial.Succeeded())
	{
		CubeComponent->SetMaterial(0, BlueMaterial.Object);
	}
}

void AFruit::Initialize(ATile* tile)
{
	Type = Fruit;
	tile->ArriveNewElement(this);
}

void AFruit::CollideWithSnake()
{
	Cast<ASnakePawn>(GetWorld()->GetFirstPlayerController()->GetPawn())->GainBody();
	AMap::GetInstance<AMap>()->GetTileElement(this)->ElementDisappear();
	AFruitSpawner::GetInstance<AFruitSpawner>()->SpawnFruit();
}

void AFruit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
