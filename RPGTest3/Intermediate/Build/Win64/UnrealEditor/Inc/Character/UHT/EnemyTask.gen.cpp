// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/StateMachines/Brain/EnemyTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyTask() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ARPGBrainController_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyTask();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyTask_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyTask::execOnUpdateTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateTask_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyTask::execOnStartTask)
	{
		P_GET_OBJECT(ARPGBrainController,Z_Param__Brain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartTask_Implementation(Z_Param__Brain);
		P_NATIVE_END;
	}
	struct EnemyTask_eventOnStartTask_Parms
	{
		ARPGBrainController* _Brain;
	};
	static FName NAME_UEnemyTask_OnStartTask = FName(TEXT("OnStartTask"));
	void UEnemyTask::OnStartTask(ARPGBrainController* _Brain)
	{
		EnemyTask_eventOnStartTask_Parms Parms;
		Parms._Brain=_Brain;
		ProcessEvent(FindFunctionChecked(NAME_UEnemyTask_OnStartTask),&Parms);
	}
	static FName NAME_UEnemyTask_OnUpdateTask = FName(TEXT("OnUpdateTask"));
	void UEnemyTask::OnUpdateTask()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEnemyTask_OnUpdateTask),NULL);
	}
	void UEnemyTask::StaticRegisterNativesUEnemyTask()
	{
		UClass* Class = UEnemyTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartTask", &UEnemyTask::execOnStartTask },
			{ "OnUpdateTask", &UEnemyTask::execOnUpdateTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Brain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::NewProp__Brain = { "_Brain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyTask_eventOnStartTask_Parms, _Brain), Z_Construct_UClass_ARPGBrainController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::NewProp__Brain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachines/Brain/EnemyTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyTask, nullptr, "OnStartTask", nullptr, nullptr, Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::PropPointers), sizeof(EnemyTask_eventOnStartTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyTask_eventOnStartTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyTask_OnStartTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyTask_OnStartTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyTask_OnUpdateTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyTask_OnUpdateTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachines/Brain/EnemyTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyTask_OnUpdateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyTask, nullptr, "OnUpdateTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyTask_OnUpdateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyTask_OnUpdateTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemyTask_OnUpdateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyTask_OnUpdateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyTask);
	UClass* Z_Construct_UClass_UEnemyTask_NoRegister()
	{
		return UEnemyTask::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Brain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyTask_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyTask_OnStartTask, "OnStartTask" }, // 511020882
		{ &Z_Construct_UFunction_UEnemyTask_OnUpdateTask, "OnUpdateTask" }, // 881157667
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyTask_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyTask_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachines/Brain/EnemyTask.h" },
		{ "ModuleRelativePath", "Public/StateMachines/Brain/EnemyTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyTask_Statics::NewProp_Brain_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachines/Brain/EnemyTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyTask_Statics::NewProp_Brain = { "Brain", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyTask, Brain), Z_Construct_UClass_ARPGBrainController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyTask_Statics::NewProp_Brain_MetaData), Z_Construct_UClass_UEnemyTask_Statics::NewProp_Brain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyTask_Statics::NewProp_Brain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyTask_Statics::ClassParams = {
		&UEnemyTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyTask_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyTask()
	{
		if (!Z_Registration_Info_UClass_UEnemyTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyTask.OuterSingleton, Z_Construct_UClass_UEnemyTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyTask.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UEnemyTask>()
	{
		return UEnemyTask::StaticClass();
	}
	UEnemyTask::UEnemyTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyTask);
	UEnemyTask::~UEnemyTask() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_EnemyTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_EnemyTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyTask, UEnemyTask::StaticClass, TEXT("UEnemyTask"), &Z_Registration_Info_UClass_UEnemyTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyTask), 49989887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_EnemyTask_h_2781698224(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_EnemyTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_EnemyTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
