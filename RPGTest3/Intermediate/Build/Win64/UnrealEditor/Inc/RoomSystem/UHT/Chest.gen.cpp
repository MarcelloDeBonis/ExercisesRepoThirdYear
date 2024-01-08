// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/Chest/Chest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChest() {}
// Cross Module References
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AChest();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AChest_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AInteractable();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void AChest::StaticRegisterNativesAChest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChest);
	UClass* Z_Construct_UClass_AChest_NoRegister()
	{
		return AChest::StaticClass();
	}
	struct Z_Construct_UClass_AChest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObjects/Chest/Chest.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Chest/Chest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChest_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractableObjects/Chest/Chest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, CurrentState), Z_Construct_UClass_UInteractableState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_AChest_Statics::NewProp_CurrentState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChest_Statics::ClassParams = {
		&AChest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::Class_MetaDataParams), Z_Construct_UClass_AChest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChest()
	{
		if (!Z_Registration_Info_UClass_AChest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChest.OuterSingleton, Z_Construct_UClass_AChest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChest.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<AChest>()
	{
		return AChest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChest);
	AChest::~AChest() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_Chest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_Chest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChest, AChest::StaticClass, TEXT("AChest"), &Z_Registration_Info_UClass_AChest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChest), 2318354620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_Chest_h_554676119(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_Chest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Chest_Chest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
