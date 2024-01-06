// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/RoomClasses/MapSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UMapSubsystem();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UMapSubsystem_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_URoom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void UMapSubsystem::StaticRegisterNativesUMapSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapSubsystem);
	UClass* Z_Construct_UClass_UMapSubsystem_NoRegister()
	{
		return UMapSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMapSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RoomClasses/MapSubsystem.h" },
		{ "ModuleRelativePath", "Public/RoomClasses/MapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSubsystem_Statics::NewProp_Map_Inner = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSubsystem_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomClasses/MapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapSubsystem_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapSubsystem, Map), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapSubsystem_Statics::NewProp_Map_MetaData), Z_Construct_UClass_UMapSubsystem_Statics::NewProp_Map_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSubsystem_Statics::NewProp_Map_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSubsystem_Statics::NewProp_Map,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapSubsystem_Statics::ClassParams = {
		&UMapSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMapSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMapSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapSubsystem.OuterSingleton, Z_Construct_UClass_UMapSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapSubsystem.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<UMapSubsystem>()
	{
		return UMapSubsystem::StaticClass();
	}
	UMapSubsystem::UMapSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSubsystem);
	UMapSubsystem::~UMapSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_MapSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_MapSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapSubsystem, UMapSubsystem::StaticClass, TEXT("UMapSubsystem"), &Z_Registration_Info_UClass_UMapSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapSubsystem), 2340316247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_MapSubsystem_h_3755296266(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_MapSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_MapSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
