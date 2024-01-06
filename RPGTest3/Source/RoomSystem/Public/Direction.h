#pragma once

#include "Direction.generated.h"

UENUM(BlueprintType)
enum class EDirection : uint8
{
	None    UMETA(DisplayName = "None"),
	
	Up		UMETA(DisplayName = "Up"),
	Right   UMETA(DisplayName = "Right"),
	Left	UMETA(DisplayName = "Left"),
	Down	UMETA(DisplayName = "Down")
};
