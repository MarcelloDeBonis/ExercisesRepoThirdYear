﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealSnake/Public/GridElements/Fruit.h"
#include "UnrealSnake/Public/Tile.h"

AFruit::AFruit()
{
	InitCubeComponent();
	PrimaryActorTick.bCanEverTick = true;
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
	//GAIN ONE BODYPART
}

void AFruit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
