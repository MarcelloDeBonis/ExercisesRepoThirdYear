// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/Chest/ChestController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChestController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AChest_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AChestController();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AChestController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void AChestController::StaticRegisterNativesAChestController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChestController);
	UClass* Z_Construct_UClass_AChestController_NoRegister()
	{
		return AChestController::StaticClass();
	}
	struct Z_Construct_UClass_AChestController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChestController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChestController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChestController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObjects/Chest/ChestController.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Chest/ChestController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChestController_Statics::NewProp_Chest_MetaData[] = {
		{ "Category", "Chest" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Chest/ChestController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChestController_Statics::NewProp_Chest = { "Chest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChestController, Chest), Z_Construct_UClass_AChest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChestController_Statics::NewProp_Chest_MetaData), Z_Construct_UClass_AChestController_Statics::NewProp_Chest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChestController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChestController_Statics::NewProp_Chest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChestController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChestController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChestController_Statics::ClassParams = {
		&AChestController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChestController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChestController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChestController_Statics::Class_MetaDataParams), Z_Construct_UClass_AChestController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChestController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChestController()
	{
		if (!Z_Registration_Info_UClass_AChestController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChestController.OuterSingleton, Z_Construct_UClass_AChestController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChestController.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<AChestController>()
	{
		return AChestController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChestController);
	AChestController::~AChestController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_ChestController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_ChestController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChestController, AChestController::StaticClass, TEXT("AChestController"), &Z_Registration_Info_UClass_AChestController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChestController), 540033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_ChestController_h_1885053598(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_ChestController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_ChestController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
