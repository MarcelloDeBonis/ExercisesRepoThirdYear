// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Other/IDamageble.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDamageble() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_UDamageable();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	DEFINE_FUNCTION(IDamageable::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage_Implementation(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	struct Damageable_eventTakeDamage_Parms
	{
		float DamageAmount;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		Damageable_eventTakeDamage_Parms()
			: ReturnValue(0)
		{
		}
	};
	float IDamageable::TakeDamage(float DamageAmount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeDamage instead.");
		Damageable_eventTakeDamage_Parms Parms;
		return Parms.ReturnValue;
	}
	void UDamageable::StaticRegisterNativesUDamageable()
	{
		UClass* Class = UDamageable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &IDamageable::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageable_TakeDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Damageable_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Damageable_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_TakeDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageable_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Other/IDamageble.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers), sizeof(Damageable_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageable_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Damageable_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDamageable_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageable_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageable);
	UClass* Z_Construct_UClass_UDamageable_NoRegister()
	{
		return UDamageable::StaticClass();
	}
	struct Z_Construct_UClass_UDamageable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageable_TakeDamage, "TakeDamage" }, // 3606480461
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Other/IDamageble.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageable_Statics::ClassParams = {
		&UDamageable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDamageable()
	{
		if (!Z_Registration_Info_UClass_UDamageable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageable.OuterSingleton, Z_Construct_UClass_UDamageable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageable.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<UDamageable>()
	{
		return UDamageable::StaticClass();
	}
	UDamageable::UDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageable);
	UDamageable::~UDamageable() {}
	static FName NAME_UDamageable_TakeDamage = FName(TEXT("TakeDamage"));
	float IDamageable::Execute_TakeDamage(UObject* O, float DamageAmount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
		Damageable_eventTakeDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageable_TakeDamage);
		if (Func)
		{
			Parms.DamageAmount=DamageAmount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
		{
			Parms.ReturnValue = I->TakeDamage_Implementation(DamageAmount);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_IDamageble_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_IDamageble_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageable, UDamageable::StaticClass, TEXT("UDamageable"), &Z_Registration_Info_UClass_UDamageable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageable), 725506382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_IDamageble_h_1069171812(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_IDamageble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_IDamageble_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
