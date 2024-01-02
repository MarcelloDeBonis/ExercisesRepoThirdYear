// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Components/ExpComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpComponent() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UExpComponent();
	CHARACTER_API UClass* Z_Construct_UClass_UExpComponent_NoRegister();
	CHARACTER_API UFunction* Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics
	{
		struct _Script_Character_eventOnExpUpdated_Parms
		{
			int32 MaxExp;
			int32 CurrentExp;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxExp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::NewProp_MaxExp = { "MaxExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Character_eventOnExpUpdated_Parms, MaxExp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::NewProp_CurrentExp = { "CurrentExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Character_eventOnExpUpdated_Parms, CurrentExp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::NewProp_MaxExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::NewProp_CurrentExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Character, nullptr, "OnExpUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::_Script_Character_eventOnExpUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::_Script_Character_eventOnExpUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnExpUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnExpUpdated, int32 MaxExp, int32 CurrentExp)
{
	struct _Script_Character_eventOnExpUpdated_Parms
	{
		int32 MaxExp;
		int32 CurrentExp;
	};
	_Script_Character_eventOnExpUpdated_Parms Parms;
	Parms.MaxExp=MaxExp;
	Parms.CurrentExp=CurrentExp;
	OnExpUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UExpComponent::StaticRegisterNativesUExpComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpComponent);
	UClass* Z_Construct_UClass_UExpComponent_NoRegister()
	{
		return UExpComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExpComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExpUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExpUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ExpComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpComponent_Statics::NewProp_OnExpUpdated_MetaData[] = {
		{ "Category", "Delegates" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExpComponent_Statics::NewProp_OnExpUpdated = { "OnExpUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpComponent, OnExpUpdated), Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::NewProp_OnExpUpdated_MetaData), Z_Construct_UClass_UExpComponent_Statics::NewProp_OnExpUpdated_MetaData) }; // 927658311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpComponent_Statics::NewProp_OnExpUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpComponent_Statics::ClassParams = {
		&UExpComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExpComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UExpComponent()
	{
		if (!Z_Registration_Info_UClass_UExpComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpComponent.OuterSingleton, Z_Construct_UClass_UExpComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpComponent.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UExpComponent>()
	{
		return UExpComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpComponent);
	UExpComponent::~UExpComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpComponent, UExpComponent::StaticClass, TEXT("UExpComponent"), &Z_Registration_Info_UClass_UExpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpComponent), 3856054566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_678504163(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
