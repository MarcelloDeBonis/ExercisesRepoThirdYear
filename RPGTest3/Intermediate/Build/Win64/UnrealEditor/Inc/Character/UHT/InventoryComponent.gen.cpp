// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Components/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UInventoryComponent();
	CHARACTER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	CHARACTER_API UFunction* Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics
	{
		struct _Script_Character_eventHealPotionNumberUpdated_Parms
		{
			int32 Number;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Character_eventHealPotionNumberUpdated_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Character, nullptr, "HealPotionNumberUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::_Script_Character_eventHealPotionNumberUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::_Script_Character_eventHealPotionNumberUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHealPotionNumberUpdated_DelegateWrapper(const FMulticastScriptDelegate& HealPotionNumberUpdated, int32 Number)
{
	struct _Script_Character_eventHealPotionNumberUpdated_Parms
	{
		int32 Number;
	};
	_Script_Character_eventHealPotionNumberUpdated_Parms Parms;
	Parms.Number=Number;
	HealPotionNumberUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealPotionNumberUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_HealPotionNumberUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_HealPotionNumberUpdated_MetaData[] = {
		{ "Category", "Delegate" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_HealPotionNumberUpdated = { "HealPotionNumberUpdated", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, HealPotionNumberUpdated), Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_HealPotionNumberUpdated_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_HealPotionNumberUpdated_MetaData) }; // 2716078751
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_HealPotionNumberUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	UInventoryComponent::~UInventoryComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_InventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 964686191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_InventoryComponent_h_3042374059(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_InventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
