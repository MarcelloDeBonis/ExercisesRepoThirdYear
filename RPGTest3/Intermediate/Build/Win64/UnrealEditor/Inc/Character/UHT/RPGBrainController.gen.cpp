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
	ENGINE_API UClass* Z_Construct_UClass_AController();
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGBrainController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AController,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGBrainController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/RPGBrainController.h" },
		{ "ModuleRelativePath", "Public/Controllers/RPGBrainController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGBrainController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGBrainController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGBrainController_Statics::ClassParams = {
		&ARPGBrainController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGBrainController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGBrainController_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_ARPGBrainController, ARPGBrainController::StaticClass, TEXT("ARPGBrainController"), &Z_Registration_Info_UClass_ARPGBrainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGBrainController), 3626305030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_3795636717(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Controllers_RPGBrainController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
