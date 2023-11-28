// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Other/MyGameInstanceSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	DEFINE_FUNCTION(UMyGameInstanceSubsystem::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyGameInstanceSubsystem::execSaveGameData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Health);
		P_GET_PROPERTY(FIntProperty,Z_Param_Power);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGameData(Z_Param_Health,Z_Param_Power);
		P_NATIVE_END;
	}
	void UMyGameInstanceSubsystem::StaticRegisterNativesUMyGameInstanceSubsystem()
	{
		UClass* Class = UMyGameInstanceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &UMyGameInstanceSubsystem::execLoadGame },
			{ "SaveGameData", &UMyGameInstanceSubsystem::execSaveGameData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Other/MyGameInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstanceSubsystem, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics
	{
		struct MyGameInstanceSubsystem_eventSaveGameData_Parms
		{
			int32 Health;
			int32 Power;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Power;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstanceSubsystem_eventSaveGameData_Parms, Health), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstanceSubsystem_eventSaveGameData_Parms, Power), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::NewProp_Power,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Other/MyGameInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstanceSubsystem, nullptr, "SaveGameData", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::MyGameInstanceSubsystem_eventSaveGameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::MyGameInstanceSubsystem_eventSaveGameData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceSubsystem);
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstanceSubsystem_LoadGame, "LoadGame" }, // 1283106308
		{ &Z_Construct_UFunction_UMyGameInstanceSubsystem_SaveGameData, "SaveGameData" }, // 131907955
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Other/MyGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Other/MyGameInstanceSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams = {
		&UMyGameInstanceSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<UMyGameInstanceSubsystem>()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	UMyGameInstanceSubsystem::UMyGameInstanceSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceSubsystem);
	UMyGameInstanceSubsystem::~UMyGameInstanceSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyGameInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyGameInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceSubsystem, UMyGameInstanceSubsystem::StaticClass, TEXT("UMyGameInstanceSubsystem"), &Z_Registration_Info_UClass_UMyGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceSubsystem), 3313557961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyGameInstanceSubsystem_h_3188386294(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyGameInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
