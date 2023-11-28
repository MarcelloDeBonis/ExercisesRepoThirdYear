// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Other/CustomGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_ACustomGameMode();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_ACustomGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	DEFINE_FUNCTION(ACustomGameMode::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomGameMode::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	void ACustomGameMode::StaticRegisterNativesACustomGameMode()
	{
		UClass* Class = ACustomGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &ACustomGameMode::execLoadGame },
			{ "SaveGame", &ACustomGameMode::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomGameMode_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomGameMode_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Other/CustomGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomGameMode_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomGameMode, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomGameMode_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomGameMode_LoadGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACustomGameMode_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomGameMode_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomGameMode_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomGameMode_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Other/CustomGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomGameMode_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomGameMode, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomGameMode_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomGameMode_SaveGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACustomGameMode_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomGameMode_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomGameMode);
	UClass* Z_Construct_UClass_ACustomGameMode_NoRegister()
	{
		return ACustomGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACustomGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomGameMode_LoadGame, "LoadGame" }, // 3373487762
		{ &Z_Construct_UFunction_ACustomGameMode_SaveGame, "SaveGame" }, // 1984192168
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Other/CustomGameMode.h" },
		{ "ModuleRelativePath", "Other/CustomGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomGameMode_Statics::ClassParams = {
		&ACustomGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACustomGameMode()
	{
		if (!Z_Registration_Info_UClass_ACustomGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomGameMode.OuterSingleton, Z_Construct_UClass_ACustomGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACustomGameMode.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<ACustomGameMode>()
	{
		return ACustomGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomGameMode);
	ACustomGameMode::~ACustomGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_CustomGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_CustomGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACustomGameMode, ACustomGameMode::StaticClass, TEXT("ACustomGameMode"), &Z_Registration_Info_UClass_ACustomGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomGameMode), 3732489431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_CustomGameMode_h_674422629(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_CustomGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_CustomGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
