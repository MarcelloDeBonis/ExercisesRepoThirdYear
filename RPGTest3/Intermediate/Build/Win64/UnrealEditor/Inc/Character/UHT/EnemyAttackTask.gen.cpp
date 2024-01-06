// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/StateMachines/Brain/Tasks/EnemyAttackTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAttackTask() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyAttackTask();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyAttackTask_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyTask();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void UEnemyAttackTask::StaticRegisterNativesUEnemyAttackTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAttackTask);
	UClass* Z_Construct_UClass_UEnemyAttackTask_NoRegister()
	{
		return UEnemyAttackTask::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAttackTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAttackTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAttackTask_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAttackTask_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachines/Brain/Tasks/EnemyAttackTask.h" },
		{ "ModuleRelativePath", "Public/StateMachines/Brain/Tasks/EnemyAttackTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAttackTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAttackTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAttackTask_Statics::ClassParams = {
		&UEnemyAttackTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAttackTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAttackTask_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyAttackTask()
	{
		if (!Z_Registration_Info_UClass_UEnemyAttackTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAttackTask.OuterSingleton, Z_Construct_UClass_UEnemyAttackTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyAttackTask.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UEnemyAttackTask>()
	{
		return UEnemyAttackTask::StaticClass();
	}
	UEnemyAttackTask::UEnemyAttackTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAttackTask);
	UEnemyAttackTask::~UEnemyAttackTask() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_Tasks_EnemyAttackTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_Tasks_EnemyAttackTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAttackTask, UEnemyAttackTask::StaticClass, TEXT("UEnemyAttackTask"), &Z_Registration_Info_UClass_UEnemyAttackTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAttackTask), 2406448812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_Tasks_EnemyAttackTask_h_3674127052(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_Tasks_EnemyAttackTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_StateMachines_Brain_Tasks_EnemyAttackTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
