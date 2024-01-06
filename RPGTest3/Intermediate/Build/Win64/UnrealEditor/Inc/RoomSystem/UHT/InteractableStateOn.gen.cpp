// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/InteractableStates/StateList/InteractableStateOn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableStateOn() {}
// Cross Module References
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableState();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableStateOn();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableStateOn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void UInteractableStateOn::StaticRegisterNativesUInteractableStateOn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableStateOn);
	UClass* Z_Construct_UClass_UInteractableStateOn_NoRegister()
	{
		return UInteractableStateOn::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableStateOn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableStateOn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractableState,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableStateOn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableStateOn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InteractableObjects/InteractableStates/StateList/InteractableStateOn.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/InteractableStates/StateList/InteractableStateOn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableStateOn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableStateOn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableStateOn_Statics::ClassParams = {
		&UInteractableStateOn::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableStateOn_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableStateOn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractableStateOn()
	{
		if (!Z_Registration_Info_UClass_UInteractableStateOn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableStateOn.OuterSingleton, Z_Construct_UClass_UInteractableStateOn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableStateOn.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<UInteractableStateOn>()
	{
		return UInteractableStateOn::StaticClass();
	}
	UInteractableStateOn::UInteractableStateOn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableStateOn);
	UInteractableStateOn::~UInteractableStateOn() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableStateOn, UInteractableStateOn::StaticClass, TEXT("UInteractableStateOn"), &Z_Registration_Info_UClass_UInteractableStateOn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableStateOn), 3477467548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOn_h_231945623(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_StateList_InteractableStateOn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
