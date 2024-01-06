// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Direction.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROOMSYSTEM_Direction_generated_h
#error "Direction.generated.h already included, missing '#pragma once' in Direction.h"
#endif
#define ROOMSYSTEM_Direction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_Direction_h


#define FOREACH_ENUM_EDIRECTION(op) \
	op(EDirection::None) \
	op(EDirection::Up) \
	op(EDirection::Right) \
	op(EDirection::Left) \
	op(EDirection::Down) 

enum class EDirection : uint8;
template<> struct TIsUEnumClass<EDirection> { enum { Value = true }; };
template<> ROOMSYSTEM_API UEnum* StaticEnum<EDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
