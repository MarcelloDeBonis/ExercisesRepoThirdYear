// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Other/PlayerPawn.h"
#include "PlayerPawnExercise/Public/PlayerSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_APlayerPawn();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	PLAYERPAWNEXERCISE_API UEnum* Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass();
	PLAYERPAWNEXERCISE_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerClass;
	static UEnum* EPlayerClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass, (UObject*)Z_Construct_UPackage__Script_PlayerPawnExercise(), TEXT("EPlayerClass"));
		}
		return Z_Registration_Info_UEnum_EPlayerClass.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UEnum* StaticEnum<EPlayerClass>()
	{
		return EPlayerClass_StaticEnum();
	}
	struct Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::Enumerators[] = {
		{ "EPlayerClass::Warrior", (int64)EPlayerClass::Warrior },
		{ "EPlayerClass::Mage", (int64)EPlayerClass::Mage },
		{ "EPlayerClass::Archer", (int64)EPlayerClass::Archer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::Enum_MetaDataParams[] = {
		{ "Archer.Name", "EPlayerClass::Archer" },
		{ "BlueprintType", "true" },
		{ "Mage.Name", "EPlayerClass::Mage" },
		{ "ModuleRelativePath", "Other/PlayerPawn.h" },
		{ "Warrior.Name", "EPlayerClass::Warrior" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
		nullptr,
		"EPlayerClass",
		"EPlayerClass",
		Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass()
	{
		if (!Z_Registration_Info_UEnum_EPlayerClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerClass.InnerSingleton, Z_Construct_UEnum_PlayerPawnExercise_EPlayerClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerClass.InnerSingleton;
	}
	DEFINE_FUNCTION(APlayerPawn::execKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Kill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPawn::execSetPlayerStatistics)
	{
		P_GET_STRUCT_REF(FGameData,Z_Param_Out_NewStatistics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerStatistics(Z_Param_Out_NewStatistics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPawn::execGetPlayerStatistics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameData*)Z_Param__Result=P_THIS->GetPlayerStatistics();
		P_NATIVE_END;
	}
	void APlayerPawn::StaticRegisterNativesAPlayerPawn()
	{
		UClass* Class = APlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerStatistics", &APlayerPawn::execGetPlayerStatistics },
			{ "Kill", &APlayerPawn::execKill },
			{ "SetPlayerStatistics", &APlayerPawn::execSetPlayerStatistics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics
	{
		struct PlayerPawn_eventGetPlayerStatistics_Parms
		{
			FGameData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawn_eventGetPlayerStatistics_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::NewProp_ReturnValue_MetaData) }; // 2498333099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Other/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "GetPlayerStatistics", nullptr, nullptr, Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::PlayerPawn_eventGetPlayerStatistics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::PlayerPawn_eventGetPlayerStatistics_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_Kill_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_Kill_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Other/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_Kill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "Kill", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Kill_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawn_Kill_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerPawn_Kill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_Kill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics
	{
		struct PlayerPawn_eventSetPlayerStatistics_Parms
		{
			FGameData NewStatistics;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewStatistics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewStatistics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::NewProp_NewStatistics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::NewProp_NewStatistics = { "NewStatistics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawn_eventSetPlayerStatistics_Parms, NewStatistics), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::NewProp_NewStatistics_MetaData), Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::NewProp_NewStatistics_MetaData) }; // 2498333099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::NewProp_NewStatistics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Other/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "SetPlayerStatistics", nullptr, nullptr, Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::PlayerPawn_eventSetPlayerStatistics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::PlayerPawn_eventSetPlayerStatistics_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawn);
	UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
	{
		return APlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawn_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawn_GetPlayerStatistics, "GetPlayerStatistics" }, // 2316931255
		{ &Z_Construct_UFunction_APlayerPawn_Kill, "Kill" }, // 2285365660
		{ &Z_Construct_UFunction_APlayerPawn_SetPlayerStatistics, "SetPlayerStatistics" }, // 498316613
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Other/PlayerPawn.h" },
		{ "ModuleRelativePath", "Other/PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerStats_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Other/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, PlayerStats), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerStats_MetaData), Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerStats_MetaData) }; // 2498333099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Other/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, PlayerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh_MetaData), Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
		&APlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerPawn()
	{
		if (!Z_Registration_Info_UClass_APlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawn.OuterSingleton, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerPawn.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<APlayerPawn>()
	{
		return APlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
	APlayerPawn::~APlayerPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_Statics::EnumInfo[] = {
		{ EPlayerClass_StaticEnum, TEXT("EPlayerClass"), &Z_Registration_Info_UEnum_EPlayerClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3393852387U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawn, APlayerPawn::StaticClass, TEXT("APlayerPawn"), &Z_Registration_Info_UClass_APlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawn), 438150740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_1399400601(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_PlayerPawn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
