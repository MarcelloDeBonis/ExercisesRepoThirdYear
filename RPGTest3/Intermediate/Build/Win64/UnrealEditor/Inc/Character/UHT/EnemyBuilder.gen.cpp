// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/EnemyBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBuilder() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ARPGBrainController_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyBuilder();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyBuilder_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyBuilder::execGetEnemy)
	{
		P_GET_OBJECT(UWorld,Z_Param_WorldContext);
		P_GET_PROPERTY(FStrProperty,Z_Param_EnemyName);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ARPGBrainController**)Z_Param__Result=UEnemyBuilder::GetEnemy(Z_Param_WorldContext,Z_Param_EnemyName,Z_Param_Position);
		P_NATIVE_END;
	}
	void UEnemyBuilder::StaticRegisterNativesUEnemyBuilder()
	{
		UClass* Class = UEnemyBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnemy", &UEnemyBuilder::execGetEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics
	{
		struct EnemyBuilder_eventGetEnemy_Parms
		{
			UWorld* WorldContext;
			FString EnemyName;
			FVector Position;
			ARPGBrainController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnemyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBuilder_eventGetEnemy_Parms, WorldContext), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_EnemyName = { "EnemyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBuilder_eventGetEnemy_Parms, EnemyName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBuilder_eventGetEnemy_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBuilder_eventGetEnemy_Parms, ReturnValue), Z_Construct_UClass_ARPGBrainController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_EnemyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyBuilder, nullptr, "GetEnemy", nullptr, nullptr, Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::EnemyBuilder_eventGetEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::EnemyBuilder_eventGetEnemy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyBuilder_GetEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyBuilder_GetEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyBuilder);
	UClass* Z_Construct_UClass_UEnemyBuilder_NoRegister()
	{
		return UEnemyBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBuilder_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyBuilder_GetEnemy, "GetEnemy" }, // 3149949768
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBuilder_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBuilder_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemyBuilder.h" },
		{ "ModuleRelativePath", "Public/EnemyBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBuilder_Statics::ClassParams = {
		&UEnemyBuilder::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyBuilder()
	{
		if (!Z_Registration_Info_UClass_UEnemyBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyBuilder.OuterSingleton, Z_Construct_UClass_UEnemyBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyBuilder.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UEnemyBuilder>()
	{
		return UEnemyBuilder::StaticClass();
	}
	UEnemyBuilder::UEnemyBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBuilder);
	UEnemyBuilder::~UEnemyBuilder() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_EnemyBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_EnemyBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyBuilder, UEnemyBuilder::StaticClass, TEXT("UEnemyBuilder"), &Z_Registration_Info_UClass_UEnemyBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyBuilder), 4196331001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_EnemyBuilder_h_1026161665(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_EnemyBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_EnemyBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
