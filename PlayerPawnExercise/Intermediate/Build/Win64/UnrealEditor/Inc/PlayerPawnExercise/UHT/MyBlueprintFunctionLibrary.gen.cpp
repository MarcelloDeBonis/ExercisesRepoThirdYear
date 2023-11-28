// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawnExercise/Other/MyBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	PLAYERPAWNEXERCISE_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayerPawnExercise();
// End Cross Module References
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execDeallocateMemory)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMyBlueprintFunctionLibrary::DeallocateMemory(Z_Param_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execAllocateMemory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UMyBlueprintFunctionLibrary::AllocateMemory(Z_Param_NumBytes);
		P_NATIVE_END;
	}
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocateMemory", &UMyBlueprintFunctionLibrary::execAllocateMemory },
			{ "DeallocateMemory", &UMyBlueprintFunctionLibrary::execDeallocateMemory },
			{ "GetAddressOfVariable", &UMyBlueprintFunctionLibrary::execGetAddressOfVariable },
			{ "GetReferenceByAddress", &UMyBlueprintFunctionLibrary::execGetReferenceByAddress },
			{ "GetValueByAddress", &UMyBlueprintFunctionLibrary::execGetValueByAddress },
			{ "SetValueByAddress", &UMyBlueprintFunctionLibrary::execSetValueByAddress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics
	{
		struct MyBlueprintFunctionLibrary_eventAllocateMemory_Parms
		{
			int32 NumBytes;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBytes;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::NewProp_NumBytes = { "NumBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventAllocateMemory_Parms, NumBytes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventAllocateMemory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::NewProp_NumBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "DisplayName", "Allocate Memory" },
		{ "Keywords", "memory allocate" },
		{ "ModuleRelativePath", "Other/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "AllocateMemory", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::MyBlueprintFunctionLibrary_eventAllocateMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::MyBlueprintFunctionLibrary_eventAllocateMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics
	{
		struct MyBlueprintFunctionLibrary_eventDeallocateMemory_Parms
		{
			int64 Address;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventDeallocateMemory_Parms, Address), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "DisplayName", "Deallocate Memory" },
		{ "Keywords", "memory free" },
		{ "ModuleRelativePath", "Other/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "DeallocateMemory", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::MyBlueprintFunctionLibrary_eventDeallocateMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::MyBlueprintFunctionLibrary_eventDeallocateMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics
	{
		struct MyBlueprintFunctionLibrary_eventGetAddressOfVariable_Parms
		{
			int32 InValue;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetAddressOfVariable_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetAddressOfVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::Function_MetaDataParams[] = {
		{ "CustomStructureParam", "InValue" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Other/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "GetAddressOfVariable", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::MyBlueprintFunctionLibrary_eventGetAddressOfVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::MyBlueprintFunctionLibrary_eventGetAddressOfVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics
	{
		struct MyBlueprintFunctionLibrary_eventGetReferenceByAddress_Parms
		{
			int64 Address;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetReferenceByAddress_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_Address_MetaData), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_Address_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetReferenceByAddress_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::Function_MetaDataParams[] = {
		{ "CustomStructureParam", "Address" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Other/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "GetReferenceByAddress", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::MyBlueprintFunctionLibrary_eventGetReferenceByAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::MyBlueprintFunctionLibrary_eventGetReferenceByAddress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics
	{
		struct MyBlueprintFunctionLibrary_eventGetValueByAddress_Parms
		{
			int64 Address;
			int32 OutValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetValueByAddress_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::NewProp_Address_MetaData), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::NewProp_Address_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetValueByAddress_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::Function_MetaDataParams[] = {
		{ "CustomStructureParam", "OutValue" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Other/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "GetValueByAddress", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::MyBlueprintFunctionLibrary_eventGetValueByAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::MyBlueprintFunctionLibrary_eventGetValueByAddress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics
	{
		struct MyBlueprintFunctionLibrary_eventSetValueByAddress_Parms
		{
			int64 Address;
			int32 NewValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSetValueByAddress_Parms, Address), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSetValueByAddress_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::Function_MetaDataParams[] = {
		{ "CustomStructureParam", "Address" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Other/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "SetValueByAddress", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::MyBlueprintFunctionLibrary_eventSetValueByAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::MyBlueprintFunctionLibrary_eventSetValueByAddress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerPawnExercise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_AllocateMemory, "AllocateMemory" }, // 1580838814
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DeallocateMemory, "DeallocateMemory" }, // 1737085875
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAddressOfVariable, "GetAddressOfVariable" }, // 6151842
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetReferenceByAddress, "GetReferenceByAddress" }, // 2324167478
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetValueByAddress, "GetValueByAddress" }, // 2079017283
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SetValueByAddress, "SetValueByAddress" }, // 1607863789
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Other/MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Other/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMyBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> PLAYERPAWNEXERCISE_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
	UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 1338275066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyBlueprintFunctionLibrary_h_1953922021(TEXT("/Script/PlayerPawnExercise"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_PlayerPawnExercise_Source_PlayerPawnExercise_Other_MyBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
