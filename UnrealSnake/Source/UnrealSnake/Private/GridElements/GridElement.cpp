// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealSnake/Public/GridElements/GridElement.h"

// Sets default values
AGridElement::AGridElement()
{

}

void AGridElement::CollideWithSnake()
{
	
}

void AGridElement::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AGridElement::Initialize(ATile* tile)
{
	
}

void AGridElement::BeginPlay()
{
	Super::BeginPlay();
}

void AGridElement::InitCubeComponent()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	CubeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeComponent"));
	CubeComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		CubeComponent->SetStaticMesh(CubeMesh.Object);
	}

	CubeComponent->SetWorldScale3D(FVector(1.0f, 1.0f, 0.5f));
	InitCubeMaterial();
}

void AGridElement::InitCubeMaterial()
{
	
}
