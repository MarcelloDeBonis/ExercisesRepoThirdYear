// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/ETeam.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHARACTER_ETeam_generated_h
#error "ETeam.generated.h already included, missing '#pragma once' in ETeam.h"
#endif
#define CHARACTER_ETeam_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Enums_ETeam_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::None) \
	op(ETeam::Player) \
	op(ETeam::Enemy) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> CHARACTER_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
