// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterModule_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CharacterModule;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CharacterModule()
	{
		if (!Z_Registration_Info_UPackage__Script_CharacterModule.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CharacterModule",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC0B9E178,
				0x9C6EE678,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CharacterModule.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CharacterModule.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CharacterModule(Z_Construct_UPackage__Script_CharacterModule, TEXT("/Script/CharacterModule"), Z_Registration_Info_UPackage__Script_CharacterModule, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC0B9E178, 0x9C6EE678));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
