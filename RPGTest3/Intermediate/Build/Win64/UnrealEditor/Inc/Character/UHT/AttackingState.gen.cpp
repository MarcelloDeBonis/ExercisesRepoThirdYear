// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/StateMachines/ControllerState/States/AttackingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackingState() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UAttackingState();
	CHARACTER_API UClass* Z_Construct_UClass_UAttackingState_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UCharacterState();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void UAttackingState::StaticRegisterNativesUAttackingState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackingState);
	UClass* Z_Construct_UClass_UAttackingState_NoRegister()
	{
		return UAttackingState::StaticClass();
	}
	struct Z_Construct_UClass_UAttackingState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackingState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackingState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachines/ControllerState/States/AttackingState.h" },
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/States/AttackingState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackingState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackingState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackingState_Statics::ClassParams = {
		&UAttackingState::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackingState_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackingState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAttackingState()
	{
		if (!Z_Registration_Info_UClass_UAttackingState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackingState.OuterSingleton, Z_Construct_UClass_UAttackingState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackingState.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UAttackingState>()
	{
		return UAttackingState::StaticClass();
	}
	UAttackingState::UAttackingState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackingState);
	UAttackingState::~UAttackingState() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_AttackingState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_AttackingState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackingState, UAttackingState::StaticClass, TEXT("UAttackingState"), &Z_Registration_Info_UClass_UAttackingState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackingState), 836043698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_AttackingState_h_3447475469(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_AttackingState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_States_AttackingState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
