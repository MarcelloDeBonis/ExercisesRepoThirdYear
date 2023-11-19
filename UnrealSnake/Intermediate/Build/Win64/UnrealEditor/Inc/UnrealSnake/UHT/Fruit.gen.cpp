// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/GridElements/Fruit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFruit() {}
// Cross Module References
	UNREALSNAKE_API UClass* Z_Construct_UClass_AFruit();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AFruit_NoRegister();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AGridElement();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	void AFruit::StaticRegisterNativesAFruit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFruit);
	UClass* Z_Construct_UClass_AFruit_NoRegister()
	{
		return AFruit::StaticClass();
	}
	struct Z_Construct_UClass_AFruit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFruit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridElement,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFruit_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridElements/Fruit.h" },
		{ "ModuleRelativePath", "Public/GridElements/Fruit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFruit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFruit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFruit_Statics::ClassParams = {
		&AFruit::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFruit_Statics::Class_MetaDataParams), Z_Construct_UClass_AFruit_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFruit()
	{
		if (!Z_Registration_Info_UClass_AFruit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFruit.OuterSingleton, Z_Construct_UClass_AFruit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFruit.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<AFruit>()
	{
		return AFruit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFruit);
	AFruit::~AFruit() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_Fruit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_Fruit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFruit, AFruit::StaticClass, TEXT("AFruit"), &Z_Registration_Info_UClass_AFruit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFruit), 2647718862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_Fruit_h_2783361153(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_Fruit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_Fruit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
