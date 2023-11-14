// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPrototype_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GridPrototype;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GridPrototype()
	{
		if (!Z_Registration_Info_UPackage__Script_GridPrototype.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GridPrototype",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2A24B4DE,
				0x50BD0495,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GridPrototype.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GridPrototype.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GridPrototype(Z_Construct_UPackage__Script_GridPrototype, TEXT("/Script/GridPrototype"), Z_Registration_Info_UPackage__Script_GridPrototype, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2A24B4DE, 0x50BD0495));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
