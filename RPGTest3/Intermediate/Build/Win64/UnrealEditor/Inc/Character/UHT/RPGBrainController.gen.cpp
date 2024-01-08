// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Controllers/RPGBrainController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGBrainController() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ARPGBrainController();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGBrainController_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGEnemy_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyTask_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_URPGCharacterStateMachine_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_URPGController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void ARPGBrainController::StaticRegisterNativesARPGBrainController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGBrainController);
	UClass* Z_Construct_UClass_ARPGBrainController_NoRegister()
	{
		return ARPGBrainController::StaticClass();
	}
	struct Z_Construct_UClass_ARPGBrainController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGBrainController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGBrainController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Controllers/RPGBrainController.h" },
		{ "ModuleRelativePath", "Public/Controllers/RPGBrainController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGBrainController_Statics::NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/RPGBrainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGBrainController_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGBrainController, Enemy), Z_Construct_UClass_ARPGEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::NewProp_Enemy_MetaData), Z_Construct_UClass_ARPGBrainController_Statics::NewProp_Enemy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGBrainController_Statics::NewProp_StateMachine_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/RPGBrainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGBrainController_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGBrainController, StateMachine), Z_Construct_UClass_URPGCharacterStateMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::NewProp_StateMachine_MetaData), Z_Construct_UClass_ARPGBrainController_Statics::NewProp_StateMachine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGBrainController_Statics::NewProp_CurrentTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/RPGBrainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGBrainController_Statics::NewProp_CurrentTask = { "CurrentTask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGBrainController, CurrentTask), Z_Construct_UClass_UEnemyTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::NewProp_CurrentTask_MetaData), Z_Construct_UClass_ARPGBrainController_Statics::NewProp_CurrentTask_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGBrainController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGBrainController_Statics::NewProp_Enemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGBrainController_Statics::NewProp_StateMachine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGBrainController_Statics::NewProp_CurrentTask,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGBrainController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URPGController_NoRegister, (int32)VTABLE_OFFSET(ARPGBrainController, IRPGController), false },  // 2347666811
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGBrainController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGBrainController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGBrainController_Statics::ClassParams = {
		&ARPGBrainController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARPGBrainController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGBrainController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARPGBrainController()
	{
		if (!Z_Registration_Info_UClass_ARPGBrainController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGBrainController.OuterSingleton, Z_Construct_UClass_ARPGBrainController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGBrainController.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<ARPGBrainController>()
	{
		return ARPGBrainController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGBrainController);
	ARPGBrainController::~ARPGBrainController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGBrainController, ARPGBrainController::StaticClass, TEXT("ARPGBrainController"), &Z_Registration_Info_UClass_ARPGBrainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGBrainController), 1517000288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_895465703(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
