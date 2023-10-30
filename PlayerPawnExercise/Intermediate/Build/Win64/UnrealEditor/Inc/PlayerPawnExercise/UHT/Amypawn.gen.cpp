// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Public/Amypawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmypawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_Amypawn();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_Amypawn_NoRegister();
	PLAYERPAWNEXERCISE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatistics();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStatistics;
class UScriptStruct* FPlayerStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStatistics, (UObject*)Z_Construct_UPackage__Script_PlayerPawnExercise(), TEXT("PlayerStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStatistics.OuterSingleton;
}
template<> PLAYERPAWNEXERCISE_API UScriptStruct* StaticStruct<FPlayerStatistics>()
{
	return FPlayerStatistics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerStatistics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Energy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatistics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Amypawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatistics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Amypawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatistics, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Health_MetaData), Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Amypawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatistics, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Damage_MetaData), Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Amypawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStatistics, Energy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Energy_MetaData), Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Energy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewProp_Energy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStatistics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
		nullptr,
		&NewStructOps,
		"PlayerStatistics",
		Z_Construct_UScriptStruct_FPlayerStatistics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatistics_Statics::PropPointers),
		sizeof(FPlayerStatistics),
		alignof(FPlayerStatistics),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStatistics_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatistics_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatistics()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerStatistics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStatistics.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStatistics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerStatistics.InnerSingleton;
	}
	DEFINE_FUNCTION(Amypawn::execKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Kill();
		P_NATIVE_END;
	}
	void Amypawn::StaticRegisterNativesAmypawn()
	{
		UClass* Class = Amypawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Kill", &Amypawn::execKill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Amypawn_Kill_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Amypawn_Kill_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Amypawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Amypawn_Kill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Amypawn, nullptr, "Kill", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Amypawn_Kill_Statics::Function_MetaDataParams), Z_Construct_UFunction_Amypawn_Kill_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Amypawn_Kill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Amypawn_Kill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Amypawn);
	UClass* Z_Construct_UClass_Amypawn_NoRegister()
	{
		return Amypawn::StaticClass();
	}
	struct Z_Construct_UClass_Amypawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Amypawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Amypawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_Amypawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Amypawn_Kill, "Kill" }, // 4202900162
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Amypawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amypawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Amypawn.h" },
		{ "ModuleRelativePath", "Public/Amypawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amypawn_Statics::NewProp_PlayerStats_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Amypawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_Amypawn_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Amypawn, PlayerStats), Z_Construct_UScriptStruct_FPlayerStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Amypawn_Statics::NewProp_PlayerStats_MetaData), Z_Construct_UClass_Amypawn_Statics::NewProp_PlayerStats_MetaData) }; // 4209766708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Amypawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amypawn_Statics::NewProp_PlayerStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Amypawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amypawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Amypawn_Statics::ClassParams = {
		&Amypawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Amypawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Amypawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Amypawn_Statics::Class_MetaDataParams), Z_Construct_UClass_Amypawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Amypawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Amypawn()
	{
		if (!Z_Registration_Info_UClass_Amypawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Amypawn.OuterSingleton, Z_Construct_UClass_Amypawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Amypawn.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<Amypawn>()
	{
		return Amypawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amypawn);
	Amypawn::~Amypawn() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_Statics::ScriptStructInfo[] = {
		{ FPlayerStatistics::StaticStruct, Z_Construct_UScriptStruct_FPlayerStatistics_Statics::NewStructOps, TEXT("PlayerStatistics"), &Z_Registration_Info_UScriptStruct_PlayerStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStatistics), 4209766708U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Amypawn, Amypawn::StaticClass, TEXT("Amypawn"), &Z_Registration_Info_UClass_Amypawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Amypawn), 441043426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_75571173(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_Amypawn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
