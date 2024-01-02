// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/StateMachines/ControllerState/States/IdleState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleState() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UCharacterState();
	CHARACTER_API UClass* Z_Construct_UClass_UIdleState();
	CHARACTER_API UClass* Z_Construct_UClass_UIdleState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void UIdleState::StaticRegisterNativesUIdleState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleState);
	UClass* Z_Construct_UClass_UIdleState_NoRegister()
	{
		return UIdleState::StaticClass();
	}
	struct Z_Construct_UClass_UIdleState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIdleState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachines/ControllerState/States/IdleState.h" },
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/States/IdleState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleState_Statics::ClassParams = {
		&UIdleState::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams), Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIdleState()
	{
		if (!Z_Registration_Info_UClass_UIdleState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIdleState.OuterSingleton, Z_Construct_UClass_UIdleState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIdleState.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UIdleState>()
	{
		return UIdleState::StaticClass();
	}
	UIdleState::UIdleState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleState);
	UIdleState::~UIdleState() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_IdleState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_IdleState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleState, UIdleState::StaticClass, TEXT("UIdleState"), &Z_Registration_Info_UClass_UIdleState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleState), 3633511500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_IdleState_h_1322899824(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_IdleState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_IdleState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
