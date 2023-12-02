// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/SnakeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ASnakeGameMode();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ASnakeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	DEFINE_FUNCTION(ASnakeGameMode::execNewGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewGame();
		P_NATIVE_END;
	}
	void ASnakeGameMode::StaticRegisterNativesASnakeGameMode()
	{
		UClass* Class = ASnakeGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewGame", &ASnakeGameMode::execNewGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakeGameMode_NewGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeGameMode_NewGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SnakeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeGameMode_NewGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeGameMode, nullptr, "NewGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameMode_NewGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeGameMode_NewGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASnakeGameMode_NewGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeGameMode_NewGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeGameMode);
	UClass* Z_Construct_UClass_ASnakeGameMode_NoRegister()
	{
		return ASnakeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakeGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeGameMode_NewGame, "NewGame" }, // 1281713477
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SnakeGameMode.h" },
		{ "ModuleRelativePath", "Public/SnakeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameMode_Statics::ClassParams = {
		&ASnakeGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASnakeGameMode()
	{
		if (!Z_Registration_Info_UClass_ASnakeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeGameMode.OuterSingleton, Z_Construct_UClass_ASnakeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakeGameMode.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<ASnakeGameMode>()
	{
		return ASnakeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameMode);
	ASnakeGameMode::~ASnakeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeGameMode, ASnakeGameMode::StaticClass, TEXT("ASnakeGameMode"), &Z_Registration_Info_UClass_ASnakeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeGameMode), 4281586920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakeGameMode_h_3335406968(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
