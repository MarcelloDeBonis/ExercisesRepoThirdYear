// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/Singletons/SingletonActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingletonActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ASingletonActor();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ASingletonActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	void ASingletonActor::StaticRegisterNativesASingletonActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASingletonActor);
	UClass* Z_Construct_UClass_ASingletonActor_NoRegister()
	{
		return ASingletonActor::StaticClass();
	}
	struct Z_Construct_UClass_ASingletonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingletonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Singletons/SingletonActor.h" },
		{ "ModuleRelativePath", "Public/Singletons/SingletonActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingletonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingletonActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASingletonActor_Statics::ClassParams = {
		&ASingletonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASingletonActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASingletonActor()
	{
		if (!Z_Registration_Info_UClass_ASingletonActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASingletonActor.OuterSingleton, Z_Construct_UClass_ASingletonActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASingletonActor.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<ASingletonActor>()
	{
		return ASingletonActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingletonActor);
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_SingletonActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_SingletonActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASingletonActor, ASingletonActor::StaticClass, TEXT("ASingletonActor"), &Z_Registration_Info_UClass_ASingletonActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASingletonActor), 3397715806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_SingletonActor_h_2601241985(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_SingletonActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Singletons_SingletonActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
