// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealSnake/Public/Tile.h"

#include "GridElements/Fruit.h"
#include "GridElements/BodySnake.h"
#include "GridElements/Wall.h"

ATile::ATile()
{
	PrimaryActorTick.bCanEverTick = true;
	SpawnTileCube();
}

FVector ATile::ElementPosition()
{
	if (CubeComponent)
	{
		FVector BoxExtent = CubeComponent->GetStaticMesh()->GetBounds().BoxExtent;
		float CubeHeight = BoxExtent.Z * 2.0f * CubeComponent->GetComponentScale().Z;
		FVector CubeTop = CubeComponent->GetComponentLocation() + FVector(0.0f, 0.0f, CubeHeight);
		return CubeTop + FVector(0.0f, 0.0f, CubeHeight);
	}
	return FVector::ZeroVector;
}

std::tuple<bool,ATile*>ATile::GetTile(Direction Direction)
{
	switch (Direction)
	{
		case Frontward:
			if(ForwardTile!=nullptr)
			{
				return std::tuple<bool,ATile*>(true, ForwardTile);
			}
			else
			{
				return std::tuple<bool,ATile*>(true, nullptr);
			}
		break;
		
		case Right:
			if(RightTile!=nullptr)
			{
				return std::tuple<bool,ATile*>(true, RightTile);
			}
			else
			{
				return std::tuple<bool,ATile*>(true, nullptr);
			}
		break;
		
		case Left:
			if(LeftTile!=nullptr)
			{
				return std::tuple<bool,ATile*>(true, LeftTile);
			}
			else
			{
				return std::tuple<bool,ATile*>(true, nullptr);
			}
		break;
		
		case Back:
			if(BackTile!=nullptr)
			{
				return std::tuple<bool,ATile*>(true, BackTile);
			}
			else
			{
				return std::tuple<bool,ATile*>(true, nullptr);
			}
		break;
	}
	return std::tuple<bool,ATile*>(false, nullptr);
}

void ATile::ArriveNewElement(AGridElement* NewElement)
{
	if(Element == nullptr)
	{
		Element = NewElement;
		Element->SetActorLocation(ElementPosition());
	}
	else
	{
		Element->CollideWithSnake();			
	}
}

void ATile::ElementDisappear()
{
	Element = nullptr;
}

ATile* ATile::PerformRaycasts(float RayLength, const FVector& Dir)
{
	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	FVector Start = GetActorLocation();
	FVector End = Start + (Dir * RayLength);
	if(GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams))
	{
		DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1, 0, 1);
		
		ATile* HitTile = Cast<ATile>(HitResult.GetActor());
		if (HitTile)
		{
			return HitTile;
		}
	}
	else
	{
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1, 0, 1);
	}

	return nullptr;
}

bool ATile::IsABorderTile()
{
	if(ForwardTile != nullptr && RightTile != nullptr && LeftTile != nullptr && BackTile != nullptr)
	{
		return false;
	}
	
	return true;
}

void ATile::BeginPlay()
{
	Super::BeginPlay();
}

void ATile::InitTile(float RayLength)
{
	SearchNearTile(RayLength);

	if(IsABorderTile() && GetWorld() && Element==nullptr)
	{
		ArriveNewElement(SpawnWallHere());
	}
}

AGridElement* ATile::SpawnWallHere()
{
	AWall* NewWall = GetWorld()->SpawnActor<AWall>(AWall::StaticClass());
	NewWall->Initialize(this);
	return NewWall;
}

void ATile::SpawnTileCube()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	CubeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeComponent"));
	CubeComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		CubeComponent->SetStaticMesh(CubeMesh.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> BlueMaterial(TEXT("/Script/Engine.Material'/Game/Materials/TileMaterial.TileMaterial'"));
	if (BlueMaterial.Succeeded())
	{
		CubeComponent->SetMaterial(0, BlueMaterial.Object);
	}

	CubeComponent->SetWorldScale3D(FVector(1.0f, 1.0f, 0.5f));

}

AGridElement* ATile::SpawnSnakeBodyHere()
{
	ABodySnake* NewSnakePart = GetWorld()->SpawnActor<ABodySnake>(ABodySnake::StaticClass());
	NewSnakePart->Initialize(this);
	return NewSnakePart;
}

AGridElement* ATile::SpawnFruitHere()
{
	AFruit* NewFruit = GetWorld()->SpawnActor<AFruit>(AFruit::StaticClass());
	NewFruit->Initialize(this);
	return NewFruit;
}

void ATile::SearchNearTile(float RayLength)
{
	ForwardTile = nullptr;
	RightTile = nullptr;
	LeftTile = nullptr;
	BackTile = nullptr;

	ForwardTile = PerformRaycasts(RayLength, GetActorForwardVector());
	RightTile = PerformRaycasts(RayLength, GetActorRightVector());
	LeftTile = PerformRaycasts(RayLength, -GetActorRightVector());
	BackTile = PerformRaycasts(RayLength, -GetActorForwardVector());
}

void ATile::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}


