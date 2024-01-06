// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/StateMachines/ControllerState/RPGCharacterStateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCharacterStateMachine() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ARPGCharacter_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UCharacterState_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_URPGCharacterStateMachine();
	CHARACTER_API UClass* Z_Construct_UClass_URPGCharacterStateMachine_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void URPGCharacterStateMachine::StaticRegisterNativesURPGCharacterStateMachine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGCharacterStateMachine);
	UClass* Z_Construct_UClass_URPGCharacterStateMachine_NoRegister()
	{
		return URPGCharacterStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_URPGCharacterStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGCharacterStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCharacterStateMachine_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGCharacterStateMachine_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachines/ControllerState/RPGCharacterStateMachine.h" },
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/RPGCharacterStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/RPGCharacterStateMachine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGCharacterStateMachine, CurrentState), Z_Construct_UClass_UCharacterState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_CurrentState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/RPGCharacterStateMachine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGCharacterStateMachine, Character), Z_Construct_UClass_ARPGCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_Character_MetaData), Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_Character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGCharacterStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGCharacterStateMachine_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGCharacterStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGCharacterStateMachine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGCharacterStateMachine_Statics::ClassParams = {
		&URPGCharacterStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URPGCharacterStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGCharacterStateMachine_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCharacterStateMachine_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGCharacterStateMachine_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCharacterStateMachine_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URPGCharacterStateMachine()
	{
		if (!Z_Registration_Info_UClass_URPGCharacterStateMachine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGCharacterStateMachine.OuterSingleton, Z_Construct_UClass_URPGCharacterStateMachine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URPGCharacterStateMachine.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<URPGCharacterStateMachine>()
	{
		return URPGCharacterStateMachine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGCharacterStateMachine);
	URPGCharacterStateMachine::~URPGCharacterStateMachine() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_RPGCharacterStateMachine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_RPGCharacterStateMachine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URPGCharacterStateMachine, URPGCharacterStateMachine::StaticClass, TEXT("URPGCharacterStateMachine"), &Z_Registration_Info_UClass_URPGCharacterStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGCharacterStateMachine), 3442861795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_RPGCharacterStateMachine_h_890451678(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_RPGCharacterStateMachine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_RPGCharacterStateMachine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
