// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/StateMachines/ControllerState/CharacterState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterState() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UCharacterState();
	CHARACTER_API UClass* Z_Construct_UClass_UCharacterState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void UCharacterState::StaticRegisterNativesUCharacterState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterState);
	UClass* Z_Construct_UClass_UCharacterState_NoRegister()
	{
		return UCharacterState::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachines/ControllerState/CharacterState.h" },
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/CharacterState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterState_Statics::ClassParams = {
		&UCharacterState::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCharacterState()
	{
		if (!Z_Registration_Info_UClass_UCharacterState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterState.OuterSingleton, Z_Construct_UClass_UCharacterState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterState.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UCharacterState>()
	{
		return UCharacterState::StaticClass();
	}
	UCharacterState::UCharacterState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterState);
	UCharacterState::~UCharacterState() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterState, UCharacterState::StaticClass, TEXT("UCharacterState"), &Z_Registration_Info_UClass_UCharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterState), 244061443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_2868682094(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
