// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTest3/Public/RPGTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGTestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	RPGTEST3_API UClass* Z_Construct_UClass_ARPGTestGameMode();
	RPGTEST3_API UClass* Z_Construct_UClass_ARPGTestGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGTest3();
// End Cross Module References
	DEFINE_FUNCTION(ARPGTestGameMode::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	void ARPGTestGameMode::StaticRegisterNativesARPGTestGameMode()
	{
		UClass* Class = ARPGTestGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartGame", &ARPGTestGameMode::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGTestGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGTestGameMode_StartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/RPGTestGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGTestGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGTestGameMode, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGTestGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGTestGameMode_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ARPGTestGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGTestGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGTestGameMode);
	UClass* Z_Construct_UClass_ARPGTestGameMode_NoRegister()
	{
		return ARPGTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARPGTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGTest3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGTestGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGTestGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGTestGameMode_StartGame, "StartGame" }, // 1740404757
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGTestGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGTestGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPGTestGameMode.h" },
		{ "ModuleRelativePath", "Public/RPGTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGTestGameMode_Statics::ClassParams = {
		&ARPGTestGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGTestGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARPGTestGameMode()
	{
		if (!Z_Registration_Info_UClass_ARPGTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGTestGameMode.OuterSingleton, Z_Construct_UClass_ARPGTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGTestGameMode.OuterSingleton;
	}
	template<> RPGTEST3_API UClass* StaticClass<ARPGTestGameMode>()
	{
		return ARPGTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGTestGameMode);
	ARPGTestGameMode::~ARPGTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGTestGameMode, ARPGTestGameMode::StaticClass, TEXT("ARPGTestGameMode"), &Z_Registration_Info_UClass_ARPGTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGTestGameMode), 2591023886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_2869285906(TEXT("/Script/RPGTest3"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
