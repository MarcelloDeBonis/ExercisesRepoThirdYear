// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Controllers/RPGPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayerController() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ARPGPlayerController();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGPlayerController_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_URPGCharacterStateMachine_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_URPGController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void ARPGPlayerController::StaticRegisterNativesARPGPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGPlayerController);
	UClass* Z_Construct_UClass_ARPGPlayerController_NoRegister()
	{
		return ARPGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/RPGPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controllers/RPGPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_StateMachine_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/RPGPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGPlayerController, StateMachine), Z_Construct_UClass_URPGCharacterStateMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_StateMachine_MetaData), Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_StateMachine_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_StateMachine,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URPGController_NoRegister, (int32)VTABLE_OFFSET(ARPGPlayerController, IRPGController), false },  // 2347666811
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayerController_Statics::ClassParams = {
		&ARPGPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARPGPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARPGPlayerController()
	{
		if (!Z_Registration_Info_UClass_ARPGPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGPlayerController.OuterSingleton, Z_Construct_UClass_ARPGPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGPlayerController.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<ARPGPlayerController>()
	{
		return ARPGPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayerController);
	ARPGPlayerController::~ARPGPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGPlayerController, ARPGPlayerController::StaticClass, TEXT("ARPGPlayerController"), &Z_Registration_Info_UClass_ARPGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGPlayerController), 2282975719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGPlayerController_h_1123573241(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
