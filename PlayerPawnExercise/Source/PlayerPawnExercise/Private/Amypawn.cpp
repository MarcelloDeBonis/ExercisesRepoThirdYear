
#include "Amypawn.h"

Amypawn::Amypawn()
{
	PrimaryActorTick.bCanEverTick = true;
}

void Amypawn::BeginPlay()
{
	Super::BeginPlay();
}

void Amypawn::Kill()
{
	PlayerStats.Health = 0.0f;
}
