// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Other/PlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameData;
#ifdef PLAYERPAWNEXERCISE_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define PLAYERPAWNEXERCISE_PlayerPawn_generated_h

#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_SPARSE_DATA
#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execSetPlayerStatistics); \
	DECLARE_FUNCTION(execGetPlayerStatistics);


#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_ACCESSORS
#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayerPawnExercise"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn) \
	NO_API virtual ~APlayerPawn();


#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_20_PROLOG
#define FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_SPARSE_DATA \
	FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_ACCESSORS \
	FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h


#define FOREACH_ENUM_EPLAYERCLASS(op) \
	op(EPlayerClass::Warrior) \
	op(EPlayerClass::Mage) \
	op(EPlayerClass::Archer) 

enum class EPlayerClass : uint8;
template<> struct TIsUEnumClass<EPlayerClass> { enum { Value = true }; };
template<> PLAYERPAWNEXERCISE_API UEnum* StaticEnum<EPlayerClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
