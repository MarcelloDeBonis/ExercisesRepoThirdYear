#pragma once

#include "CoreMinimal.h"
#include "Direction.h"
#include "DoorInfo.generated.h"

class URoom;

USTRUCT(BlueprintType)
struct FDoorInfo
{
	GENERATED_USTRUCT_BODY()

public:

	FDoorInfo() = default;
	FDoorInfo(EDirection Direction, URoom* Room) : Direction(Direction), NextRoom(Room) {}
	
	EDirection Direction;

	UPROPERTY()
	URoom* NextRoom;
};

