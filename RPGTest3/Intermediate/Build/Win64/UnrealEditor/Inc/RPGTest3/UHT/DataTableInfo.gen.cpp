// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTest3/Public/DataTableInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RPGTEST3_API UClass* Z_Construct_UClass_UDataTableInfo();
	RPGTEST3_API UClass* Z_Construct_UClass_UDataTableInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGTest3();
// End Cross Module References
	void UDataTableInfo::StaticRegisterNativesUDataTableInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataTableInfo);
	UClass* Z_Construct_UClass_UDataTableInfo_NoRegister()
	{
		return UDataTableInfo::StaticClass();
	}
	struct Z_Construct_UClass_UDataTableInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataTableInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGTest3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataTableInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTableInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataTableInfo.h" },
		{ "ModuleRelativePath", "Public/DataTableInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataTableInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTableInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataTableInfo_Statics::ClassParams = {
		&UDataTableInfo::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataTableInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataTableInfo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDataTableInfo()
	{
		if (!Z_Registration_Info_UClass_UDataTableInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataTableInfo.OuterSingleton, Z_Construct_UClass_UDataTableInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataTableInfo.OuterSingleton;
	}
	template<> RPGTEST3_API UClass* StaticClass<UDataTableInfo>()
	{
		return UDataTableInfo::StaticClass();
	}
	UDataTableInfo::UDataTableInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTableInfo);
	UDataTableInfo::~UDataTableInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_DataTableInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_DataTableInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataTableInfo, UDataTableInfo::StaticClass, TEXT("UDataTableInfo"), &Z_Registration_Info_UClass_UDataTableInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataTableInfo), 1621406877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_DataTableInfo_h_3548329178(TEXT("/Script/RPGTest3"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_DataTableInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_DataTableInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
