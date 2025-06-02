// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/MyNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SOCCER_API UClass* Z_Construct_UClass_AMyNPC();
SOCCER_API UClass* Z_Construct_UClass_AMyNPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class AMyNPC
void AMyNPC::StaticRegisterNativesAMyNPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyNPC);
UClass* Z_Construct_UClass_AMyNPC_NoRegister()
{
	return AMyNPC::StaticClass();
}
struct Z_Construct_UClass_AMyNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyNPC.h" },
		{ "ModuleRelativePath", "Public/MyNPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyNPC_Statics::ClassParams = {
	&AMyNPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyNPC()
{
	if (!Z_Registration_Info_UClass_AMyNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyNPC.OuterSingleton, Z_Construct_UClass_AMyNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyNPC.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<AMyNPC>()
{
	return AMyNPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNPC);
AMyNPC::~AMyNPC() {}
// End Class AMyNPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MyNPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyNPC, AMyNPC::StaticClass, TEXT("AMyNPC"), &Z_Registration_Info_UClass_AMyNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyNPC), 3824196502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MyNPC_h_3373935221(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MyNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MyNPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
