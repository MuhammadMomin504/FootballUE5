// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoccer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Soccer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Soccer()
	{
		if (!Z_Registration_Info_UPackage__Script_Soccer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Soccer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA0522473,
				0x87F461D8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Soccer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Soccer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Soccer(Z_Construct_UPackage__Script_Soccer, TEXT("/Script/Soccer"), Z_Registration_Info_UPackage__Script_Soccer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA0522473, 0x87F461D8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
