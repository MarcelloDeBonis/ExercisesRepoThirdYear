// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_init() {}
	CHARACTER_API UFunction* Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature();
	CHARACTER_API UFunction* Z_Construct_UDelegateFunction_Character_OnEndAttack__DelegateSignature();
	CHARACTER_API UFunction* Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature();
	CHARACTER_API UFunction* Z_Construct_UDelegateFunction_Character_OnUpdateLife__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Character;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Character()
	{
		if (!Z_Registration_Info_UPackage__Script_Character.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Character_HealPotionNumberUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Character_OnEndAttack__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Character_OnExpUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Character_OnUpdateLife__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Character",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3DB99B6D,
				0x4727A470,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Character.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Character.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Character(Z_Construct_UPackage__Script_Character, TEXT("/Script/Character"), Z_Registration_Info_UPackage__Script_Character, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3DB99B6D, 0x4727A470));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
