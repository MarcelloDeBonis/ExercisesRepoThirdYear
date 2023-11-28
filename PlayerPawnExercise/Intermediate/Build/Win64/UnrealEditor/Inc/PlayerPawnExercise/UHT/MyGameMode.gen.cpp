// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Public/MyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_AMyGameMode();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	DEFINE_FUNCTION(AMyGameMode::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameMode::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	void AMyGameMode::StaticRegisterNativesAMyGameMode()
	{
		UClass* Class = AMyGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &AMyGameMode::execLoadGame },
			{ "SaveGame", &AMyGameMode::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameMode_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameMode_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to load the game state\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to load the game state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameMode_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameMode, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameMode_LoadGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyGameMode_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameMode_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameMode_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameMode_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to save the game state\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to save the game state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameMode_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameMode, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameMode_SaveGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyGameMode_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameMode_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode);
	UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
	{
		return AMyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameMode_LoadGame, "LoadGame" }, // 4160145037
		{ &Z_Construct_UFunction_AMyGameMode_SaveGame, "SaveGame" }, // 2826457038
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
		&AMyGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode.OuterSingleton, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameMode.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<AMyGameMode>()
	{
		return AMyGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
	AMyGameMode::~AMyGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_MyGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_MyGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode, AMyGameMode::StaticClass, TEXT("AMyGameMode"), &Z_Registration_Info_UClass_AMyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode), 3406379224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_MyGameMode_h_1345525830(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_MyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_MyGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
