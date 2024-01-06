// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/InteractableStates/InteractableState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableState();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UInteractableState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void UInteractableState::StaticRegisterNativesUInteractableState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableState);
	UClass* Z_Construct_UClass_UInteractableState_NoRegister()
	{
		return UInteractableState::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InteractableObjects/InteractableStates/InteractableState.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/InteractableStates/InteractableState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableState_Statics::ClassParams = {
		&UInteractableState::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableState_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractableState()
	{
		if (!Z_Registration_Info_UClass_UInteractableState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableState.OuterSingleton, Z_Construct_UClass_UInteractableState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableState.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<UInteractableState>()
	{
		return UInteractableState::StaticClass();
	}
	UInteractableState::UInteractableState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableState);
	UInteractableState::~UInteractableState() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_InteractableState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_InteractableState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableState, UInteractableState::StaticClass, TEXT("UInteractableState"), &Z_Registration_Info_UClass_UInteractableState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableState), 4179712531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_InteractableState_h_2484204401(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_InteractableState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_InteractableStates_InteractableState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
