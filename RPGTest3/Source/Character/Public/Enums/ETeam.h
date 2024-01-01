﻿#pragma once

#include "ETeam.generated.h"

UENUM(BlueprintType)
enum class ETeam : uint8
{
	None    UMETA(DisplayName = "None"),
	Player  UMETA(DisplayName = "Player"),
	Enemy   UMETA(DisplayName = "Enemy")
};
