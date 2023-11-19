﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "GridElements/HeadSnake.h"
#include "UnrealSnake/Public/Tile.h"

// Sets default values
AHeadSnake::AHeadSnake()
{
	InitCubeComponent();
	PrimaryActorTick.bCanEverTick = true;
}

void AHeadSnake::Initialize(ATile* tile)
{
	Type = Snake;
	tile->ArriveNewElement(this);
}

void AHeadSnake::CollideWithSnake()
{
	//Impossible that the head collides with an other Head
}

// Called when the game starts or when spawned
void AHeadSnake::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHeadSnake::InitCubeMaterial()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> BlueMaterial(TEXT("/Script/Engine.Material'/Game/Materials/HeadSnakeMaterial.HeadSnakeMaterial'"));
	if (BlueMaterial.Succeeded())
	{
		CubeComponent->SetMaterial(0, BlueMaterial.Object);
	}
}

// Called every frame
void AHeadSnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

