// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Components/FollowerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFollowerComponent() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UFollowerComponent();
	CHARACTER_API UClass* Z_Construct_UClass_UFollowerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void UFollowerComponent::StaticRegisterNativesUFollowerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFollowerComponent);
	UClass* Z_Construct_UClass_UFollowerComponent_NoRegister()
	{
		return UFollowerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFollowerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToMaintain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToMaintain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFollowerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/FollowerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/FollowerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowerComponent_Statics::NewProp_ActorToFollow_MetaData[] = {
		{ "Category", "Follower" },
		{ "ModuleRelativePath", "Public/Components/FollowerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFollowerComponent_Statics::NewProp_ActorToFollow = { "ActorToFollow", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowerComponent, ActorToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowerComponent_Statics::NewProp_ActorToFollow_MetaData), Z_Construct_UClass_UFollowerComponent_Statics::NewProp_ActorToFollow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFollowerComponent_Statics::NewProp_DistanceToMaintain_MetaData[] = {
		{ "Category", "Follower" },
		{ "ModuleRelativePath", "Public/Components/FollowerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowerComponent_Statics::NewProp_DistanceToMaintain = { "DistanceToMaintain", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowerComponent, DistanceToMaintain), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowerComponent_Statics::NewProp_DistanceToMaintain_MetaData), Z_Construct_UClass_UFollowerComponent_Statics::NewProp_DistanceToMaintain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFollowerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowerComponent_Statics::NewProp_ActorToFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowerComponent_Statics::NewProp_DistanceToMaintain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFollowerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFollowerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFollowerComponent_Statics::ClassParams = {
		&UFollowerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFollowerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFollowerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFollowerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFollowerComponent()
	{
		if (!Z_Registration_Info_UClass_UFollowerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFollowerComponent.OuterSingleton, Z_Construct_UClass_UFollowerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFollowerComponent.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UFollowerComponent>()
	{
		return UFollowerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFollowerComponent);
	UFollowerComponent::~UFollowerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_FollowerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_FollowerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFollowerComponent, UFollowerComponent::StaticClass, TEXT("UFollowerComponent"), &Z_Registration_Info_UClass_UFollowerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFollowerComponent), 1654084259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_FollowerComponent_h_1923178264(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_FollowerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_FollowerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
