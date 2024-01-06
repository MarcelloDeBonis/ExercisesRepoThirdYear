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
	CHARACTER_API UClass* Z_Construct_UClass_ARPGCharacter_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UCharacterState();
	CHARACTER_API UClass* Z_Construct_UClass_UCharacterState_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_URPGCharacterStateMachine_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterState::execOnExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterState::execOnUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdate_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterState::execOnEnter)
	{
		P_GET_OBJECT(ARPGCharacter,Z_Param_CharacterRef);
		P_GET_OBJECT(URPGCharacterStateMachine,Z_Param_StateMachineRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnter_Implementation(Z_Param_CharacterRef,Z_Param_StateMachineRef);
		P_NATIVE_END;
	}
	struct CharacterState_eventOnEnter_Parms
	{
		ARPGCharacter* CharacterRef;
		URPGCharacterStateMachine* StateMachineRef;
	};
	struct CharacterState_eventOnUpdate_Parms
	{
		float DeltaTime;
	};
	static FName NAME_UCharacterState_OnEnter = FName(TEXT("OnEnter"));
	void UCharacterState::OnEnter(ARPGCharacter* CharacterRef, URPGCharacterStateMachine* StateMachineRef)
	{
		CharacterState_eventOnEnter_Parms Parms;
		Parms.CharacterRef=CharacterRef;
		Parms.StateMachineRef=StateMachineRef;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterState_OnEnter),&Parms);
	}
	static FName NAME_UCharacterState_OnExit = FName(TEXT("OnExit"));
	void UCharacterState::OnExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterState_OnExit),NULL);
	}
	static FName NAME_UCharacterState_OnUpdate = FName(TEXT("OnUpdate"));
	void UCharacterState::OnUpdate(float DeltaTime)
	{
		CharacterState_eventOnUpdate_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterState_OnUpdate),&Parms);
	}
	void UCharacterState::StaticRegisterNativesUCharacterState()
	{
		UClass* Class = UCharacterState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnter", &UCharacterState::execOnEnter },
			{ "OnExit", &UCharacterState::execOnExit },
			{ "OnUpdate", &UCharacterState::execOnUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterState_OnEnter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachineRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterState_OnEnter_Statics::NewProp_CharacterRef = { "CharacterRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterState_eventOnEnter_Parms, CharacterRef), Z_Construct_UClass_ARPGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterState_OnEnter_Statics::NewProp_StateMachineRef = { "StateMachineRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterState_eventOnEnter_Parms, StateMachineRef), Z_Construct_UClass_URPGCharacterStateMachine_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterState_OnEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterState_OnEnter_Statics::NewProp_CharacterRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterState_OnEnter_Statics::NewProp_StateMachineRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterState_OnEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/CharacterState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterState_OnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterState, nullptr, "OnEnter", nullptr, nullptr, Z_Construct_UFunction_UCharacterState_OnEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterState_OnEnter_Statics::PropPointers), sizeof(CharacterState_eventOnEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterState_OnEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterState_OnEnter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterState_OnEnter_Statics::PropPointers) < 2048);
	static_assert(sizeof(CharacterState_eventOnEnter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCharacterState_OnEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterState_OnEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterState_OnExit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterState_OnExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/CharacterState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterState_OnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterState, nullptr, "OnExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterState_OnExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterState_OnExit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCharacterState_OnExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterState_OnExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterState_OnUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterState_eventOnUpdate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/CharacterState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterState, nullptr, "OnUpdate", nullptr, nullptr, Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::PropPointers), sizeof(CharacterState_eventOnUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(CharacterState_eventOnUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCharacterState_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterState_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterState);
	UClass* Z_Construct_UClass_UCharacterState_NoRegister()
	{
		return UCharacterState::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterState_OnEnter, "OnEnter" }, // 1799910516
		{ &Z_Construct_UFunction_UCharacterState_OnExit, "OnExit" }, // 3123667598
		{ &Z_Construct_UFunction_UCharacterState_OnUpdate, "OnUpdate" }, // 3847101053
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateMachines/ControllerState/CharacterState.h" },
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/CharacterState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/CharacterState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterState_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterState, Character), Z_Construct_UClass_ARPGCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::NewProp_StateMachine_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachines/ControllerState/CharacterState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterState_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterState, StateMachine), Z_Construct_UClass_URPGCharacterStateMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::NewProp_StateMachine_MetaData), Z_Construct_UClass_UCharacterState_Statics::NewProp_StateMachine_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterState_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterState_Statics::NewProp_StateMachine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterState_Statics::ClassParams = {
		&UCharacterState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UCharacterState, UCharacterState::StaticClass, TEXT("UCharacterState"), &Z_Registration_Info_UClass_UCharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterState), 1816328754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_936800470(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_ControllerState_CharacterState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
