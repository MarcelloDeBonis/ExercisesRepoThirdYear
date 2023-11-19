﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakeGameMode.h"
#include "UnrealSnake/Public/GridElements/BodySnake.h"
#include "UnrealSnake/Public/Tile.h"

class ASnakeGameMode;

ABodySnake::ABodySnake()
{
	InitCubeComponent();
	PrimaryActorTick.bCanEverTick = true;
}

void ABodySnake::Initialize(ATile* tile)
{
	Type = Snake;
	tile->ArriveNewElement(this);
}

void ABodySnake::CollideWithSnake()
{
	ASnakeGameMode* MyGameMode = Cast<ASnakeGameMode>(GetWorld()->GetAuthGameMode());
	if (MyGameMode)
	{
		MyGameMode->Lost();
	}
}

void ABodySnake::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABodySnake::InitCubeMaterial()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> BlueMaterial(TEXT("/Script/Engine.Material'/Game/Materials/BodySnakeMaterial.BodySnakeMaterial'"));
	if (BlueMaterial.Succeeded())
	{
		CubeComponent->SetMaterial(0, BlueMaterial.Object);
	}
}

void ABodySnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

