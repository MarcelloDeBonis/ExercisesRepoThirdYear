// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealSnake/Public/GridElements/Wall.h"
#include "SnakeGameMode.h"
#include "UnrealSnake/Public/Tile.h"

class ASnakeGameMode;

AWall::AWall()
{
	InitCubeComponent();
	PrimaryActorTick.bCanEverTick = true;
}

void AWall::BeginPlay()
{
	Super::BeginPlay();
}

void AWall::InitCubeMaterial()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> BlueMaterial(TEXT("/Script/Engine.Material'/Game/Materials/WallMaterial.WallMaterial'"));
	if (BlueMaterial.Succeeded())
	{
		CubeComponent->SetMaterial(0, BlueMaterial.Object);
	}
}

void AWall::Initialize(ATile* tile)
{
	Type = Wall;
	tile->ArriveNewElement(this);
}

void AWall::CollideWithSnake()
{
	ASnakeGameMode* MyGameMode = Cast<ASnakeGameMode>(GetWorld()->GetAuthGameMode());
	if (MyGameMode)
	{
		MyGameMode->Lost();
	}
}

void AWall::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

