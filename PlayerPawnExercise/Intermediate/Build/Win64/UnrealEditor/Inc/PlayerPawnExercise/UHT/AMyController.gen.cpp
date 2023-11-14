// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Public/AMyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_AMyController();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_AMyController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	void AMyController::StaticRegisterNativesAMyController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyController);
	UClass* Z_Construct_UClass_AMyController_NoRegister()
	{
		return AMyController::StaticClass();
	}
	struct Z_Construct_UClass_AMyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AMyController.h" },
		{ "ModuleRelativePath", "Public/AMyController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyController_Statics::ClassParams = {
		&AMyController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyController()
	{
		if (!Z_Registration_Info_UClass_AMyController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyController.OuterSingleton, Z_Construct_UClass_AMyController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyController.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<AMyController>()
	{
		return AMyController::StaticClass();
	}
	AMyController::AMyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyController);
	AMyController::~AMyController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_AMyController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_AMyController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyController, AMyController::StaticClass, TEXT("AMyController"), &Z_Registration_Info_UClass_AMyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyController), 523859965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_AMyController_h_36759408(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_AMyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Public_AMyController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
