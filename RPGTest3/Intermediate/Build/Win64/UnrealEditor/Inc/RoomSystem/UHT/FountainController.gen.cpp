// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/Fountain/FountainController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFountainController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AFountain_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AFountainController();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AFountainController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void AFountainController::StaticRegisterNativesAFountainController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFountainController);
	UClass* Z_Construct_UClass_AFountainController_NoRegister()
	{
		return AFountainController::StaticClass();
	}
	struct Z_Construct_UClass_AFountainController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fountain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Fountain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFountainController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFountainController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountainController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObjects/Fountain/FountainController.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Fountain/FountainController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountainController_Statics::NewProp_Fountain_MetaData[] = {
		{ "Category", "Fountain" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Fountain/FountainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountainController_Statics::NewProp_Fountain = { "Fountain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFountainController, Fountain), Z_Construct_UClass_AFountain_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFountainController_Statics::NewProp_Fountain_MetaData), Z_Construct_UClass_AFountainController_Statics::NewProp_Fountain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFountainController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountainController_Statics::NewProp_Fountain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFountainController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFountainController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFountainController_Statics::ClassParams = {
		&AFountainController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFountainController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFountainController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFountainController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFountainController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFountainController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFountainController()
	{
		if (!Z_Registration_Info_UClass_AFountainController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFountainController.OuterSingleton, Z_Construct_UClass_AFountainController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFountainController.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<AFountainController>()
	{
		return AFountainController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFountainController);
	AFountainController::~AFountainController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Fountain_FountainController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Fountain_FountainController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFountainController, AFountainController::StaticClass, TEXT("AFountainController"), &Z_Registration_Info_UClass_AFountainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFountainController), 1859819955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Fountain_FountainController_h_1065115261(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Fountain_FountainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Fountain_FountainController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
