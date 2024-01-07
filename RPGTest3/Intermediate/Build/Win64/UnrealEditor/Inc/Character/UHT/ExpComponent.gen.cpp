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
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	DEFINE_FUNCTION(UExpComponent::execGetUiExp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUiExp();
		P_NATIVE_END;
	}
	void UExpComponent::StaticRegisterNativesUExpComponent()
	{
		UClass* Class = UExpComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUiExp", &UExpComponent::execGetUiExp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExpComponent_GetUiExp_Statics
	{
		struct ExpComponent_eventGetUiExp_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExpComponent_eventGetUiExp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpComponent, nullptr, "GetUiExp", nullptr, nullptr, Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::ExpComponent_eventGetUiExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::ExpComponent_eventGetUiExp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExpComponent_GetUiExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpComponent_GetUiExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpComponent);
	UClass* Z_Construct_UClass_UExpComponent_NoRegister()
	{
		return UExpComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExpComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UExpComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpComponent_GetUiExp, "GetUiExp" }, // 3608728861
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ExpComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpComponent_Statics::ClassParams = {
		&UExpComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_UExpComponent, UExpComponent::StaticClass, TEXT("UExpComponent"), &Z_Registration_Info_UClass_UExpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpComponent), 2647668944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_3426587238(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_ExpComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
