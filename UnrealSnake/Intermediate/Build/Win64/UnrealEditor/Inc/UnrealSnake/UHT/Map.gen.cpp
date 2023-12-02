// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/Singletons/Map.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMap() {}
// Cross Module References
	UNREALSNAKE_API UClass* Z_Construct_UClass_AMap();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AMap_NoRegister();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ASingletonActor();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ATile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	DEFINE_FUNCTION(AMap::execInitTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMap::execNewTile)
	{
		P_GET_OBJECT(ATile,Z_Param_NewTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewTile(Z_Param_NewTile);
		P_NATIVE_END;
	}
	void AMap::StaticRegisterNativesAMap()
	{
		UClass* Class = AMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitTiles", &AMap::execInitTiles },
			{ "NewTile", &AMap::execNewTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMap_InitTiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMap_InitTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Singletons/Map.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMap_InitTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMap, nullptr, "InitTiles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMap_InitTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMap_InitTiles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMap_InitTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMap_InitTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMap_NewTile_Statics
	{
		struct Map_eventNewTile_Parms
		{
			ATile* NewTile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMap_NewTile_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Map_eventNewTile_Parms, NewTile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMap_NewTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMap_NewTile_Statics::NewProp_NewTile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMap_NewTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/Singletons/Map.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMap_NewTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMap, nullptr, "NewTile", nullptr, nullptr, Z_Construct_UFunction_AMap_NewTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMap_NewTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMap_NewTile_Statics::Map_eventNewTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMap_NewTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMap_NewTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMap_NewTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMap_NewTile_Statics::Map_eventNewTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMap_NewTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMap_NewTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMap);
	UClass* Z_Construct_UClass_AMap_NoRegister()
	{
		return AMap::StaticClass();
	}
	struct Z_Construct_UClass_AMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadStartTile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadStartTile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyStartTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyStartTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BodyStartTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASingletonActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMap_InitTiles, "InitTiles" }, // 1742518933
		{ &Z_Construct_UFunction_AMap_NewTile, "NewTile" }, // 1609410210
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Singletons/Map.h" },
		{ "ModuleRelativePath", "Public/Singletons/Map.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMap_Statics::NewProp_HeadStartTile_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Singletons/Map.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMap_Statics::NewProp_HeadStartTile = { "HeadStartTile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMap, HeadStartTile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::NewProp_HeadStartTile_MetaData), Z_Construct_UClass_AMap_Statics::NewProp_HeadStartTile_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMap_Statics::NewProp_BodyStartTiles_Inner = { "BodyStartTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMap_Statics::NewProp_BodyStartTiles_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Singletons/Map.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMap_Statics::NewProp_BodyStartTiles = { "BodyStartTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMap, BodyStartTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::NewProp_BodyStartTiles_MetaData), Z_Construct_UClass_AMap_Statics::NewProp_BodyStartTiles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMap_Statics::NewProp_HeadStartTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMap_Statics::NewProp_BodyStartTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMap_Statics::NewProp_BodyStartTiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMap_Statics::ClassParams = {
		&AMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::Class_MetaDataParams), Z_Construct_UClass_AMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMap()
	{
		if (!Z_Registration_Info_UClass_AMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMap.OuterSingleton, Z_Construct_UClass_AMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMap.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<AMap>()
	{
		return AMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMap);
	AMap::~AMap() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_Map_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_Map_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMap, AMap::StaticClass, TEXT("AMap"), &Z_Registration_Info_UClass_AMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMap), 2784309826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_Map_h_890783140(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_Map_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_Map_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
