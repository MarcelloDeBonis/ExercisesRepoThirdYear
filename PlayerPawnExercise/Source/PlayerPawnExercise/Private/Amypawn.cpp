
#include "Amypawn.h"
#include "Components/SkeletalMeshComponent.h"

Amypawn::Amypawn()
{
	PrimaryActorTick.bCanEverTick = true;

	MyMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MyMeshComponent"));
	RootComponent = MyMeshComponent;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/ControlRig/Characters/Mannequins/Meshes/SK_Mannequin.SK_Mannequin"));
	if (MeshAsset.Succeeded())
	{
		MyMeshComponent->SetSkeletalMesh(MeshAsset.Object);
	}
}

void Amypawn::BeginPlay()
{
	Super::BeginPlay();
}

void Amypawn::Kill()
{
	PlayerStats.Health = 0.0f;
}

void Amypawn:: AddMovementInput (FVector Direction, float Value, bool bForce)
{
	Super::AddMovementInput(Direction, Value, bForce);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello."));
	}
	
	if (Value != 0.0f)
	{
		FVector NewLocation = GetActorLocation() + (Direction * Value * GetWorld()->DeltaTimeSeconds * 1000);
		SetActorLocation(NewLocation);
	}
}
