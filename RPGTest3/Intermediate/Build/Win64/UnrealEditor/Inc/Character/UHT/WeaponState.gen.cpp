// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/StateMachines/WeaponStates/WeaponState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponState() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UWeaponState();
	CHARACTER_API UClass* Z_Construct_UClass_UWeaponState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponState::execOnExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponState::execOnEnter)
	{
		P_GET_OBJECT(AWeapon,Z_Param__Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnter_Implementation(Z_Param__Weapon);
		P_NATIVE_END;
	}
	struct WeaponState_eventOnEnter_Parms
	{
		AWeapon* _Weapon;
	};
	static FName NAME_UWeaponState_OnEnter = FName(TEXT("OnEnter"));
	void UWeaponState::OnEnter(AWeapon* _Weapon)
	{
		WeaponState_eventOnEnter_Parms Parms;
		Parms._Weapon=_Weapon;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponState_OnEnter),&Parms);
	}
	static FName NAME_UWeaponState_OnExit = FName(TEXT("OnExit"));
	void UWeaponState::OnExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponState_OnExit),NULL);
	}
	void UWeaponState::StaticRegisterNativesUWeaponState()
	{
		UClass* Class = UWeaponState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnter", &UWeaponState::execOnEnter },
			{ "OnExit", &UWeaponState::execOnExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponState_OnEnter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponState_OnEnter_Statics::NewProp__Weapon = { "_Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponState_eventOnEnter_Parms, _Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponState_OnEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponState_OnEnter_Statics::NewProp__Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponState_OnEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachines/WeaponStates/WeaponState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponState_OnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponState, nullptr, "OnEnter", nullptr, nullptr, Z_Construct_UFunction_UWeaponState_OnEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponState_OnEnter_Statics::PropPointers), sizeof(WeaponState_eventOnEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponState_OnEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponState_OnEnter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponState_OnEnter_Statics::PropPointers) < 2048);
	static_assert(sizeof(WeaponState_eventOnEnter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWeaponState_OnEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponState_OnEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponState_OnExit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponState_OnExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachines/WeaponStates/WeaponState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponState_OnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponState, nullptr, "OnExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponState_OnExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponState_OnExit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWeaponState_OnExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponState_OnExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponState);
	UClass* Z_Construct_UClass_UWeaponState_NoRegister()
	{
		return UWeaponState::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponState_OnEnter, "OnEnter" }, // 780751179
		{ &Z_Construct_UFunction_UWeaponState_OnExit, "OnExit" }, // 2690422056
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachines/WeaponStates/WeaponState.h" },
		{ "ModuleRelativePath", "Public/StateMachines/WeaponStates/WeaponState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponState_Statics::NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachines/WeaponStates/WeaponState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponState_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponState, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponState_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_UWeaponState_Statics::NewProp_Weapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponState_Statics::NewProp_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponState_Statics::ClassParams = {
		&UWeaponState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponState_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponState_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWeaponState()
	{
		if (!Z_Registration_Info_UClass_UWeaponState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponState.OuterSingleton, Z_Construct_UClass_UWeaponState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponState.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UWeaponState>()
	{
		return UWeaponState::StaticClass();
	}
	UWeaponState::UWeaponState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponState);
	UWeaponState::~UWeaponState() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_WeaponStates_WeaponState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_WeaponStates_WeaponState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponState, UWeaponState::StaticClass, TEXT("UWeaponState"), &Z_Registration_Info_UClass_UWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponState), 822889498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_WeaponStates_WeaponState_h_3957003414(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_WeaponStates_WeaponState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_WeaponStates_WeaponState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
