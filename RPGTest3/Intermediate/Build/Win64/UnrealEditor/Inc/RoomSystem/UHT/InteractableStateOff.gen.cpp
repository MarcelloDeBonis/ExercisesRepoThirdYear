// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/InteractableStates/StateList/InteractableStateOff.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableStateOff() {}
// Cross Module References
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableState();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableStateOff();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableStateOff_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void UInteractableStateOff::StaticRegisterNativesUInteractableStateOff()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableStateOff);
	UClass* Z_Construct_UClass_UInteractableStateOff_NoRegister()
	{
		return UInteractableStateOff::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableStateOff_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableStateOff_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractableState,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableStateOff_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableStateOff_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InteractableObjects/InteractableStates/StateList/InteractableStateOff.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/InteractableStates/StateList/InteractableStateOff.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableStateOff_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableStateOff>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableStateOff_Statics::ClassParams = {
		&UInteractableStateOff::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableStateOff_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableStateOff_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractableStateOff()
	{
		if (!Z_Registration_Info_UClass_UInteractableStateOff.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableStateOff.OuterSingleton, Z_Construct_UClass_UInteractableStateOff_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableStateOff.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<UInteractableStateOff>()
	{
		return UInteractableStateOff::StaticClass();
	}
	UInteractableStateOff::UInteractableStateOff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableStateOff);
	UInteractableStateOff::~UInteractableStateOff() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOff_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOff_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableStateOff, UInteractableStateOff::StaticClass, TEXT("UInteractableStateOff"), &Z_Registration_Info_UClass_UInteractableStateOff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableStateOff), 3509340624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOff_h_1660536375(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOff_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOff_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
