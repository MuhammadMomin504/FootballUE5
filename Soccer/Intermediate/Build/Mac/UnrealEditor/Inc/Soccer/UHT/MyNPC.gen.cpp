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
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_ACharacterMovementController();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class ACharacterMovementController;\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyNPC.h" },
		{ "ModuleRelativePath", "Public/MyNPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class ACharacterMovementController;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pawnSensingComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyNPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnSensingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyNPC_Statics::NewProp_pawnSensingComponent = { "pawnSensingComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyNPC, pawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pawnSensingComponent_MetaData), NewProp_pawnSensingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyNPC_Statics::NewProp_pawnSensingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacterMovementController,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyNPC_Statics::ClassParams = {
	&AMyNPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyNPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MyNPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyNPC, AMyNPC::StaticClass, TEXT("AMyNPC"), &Z_Registration_Info_UClass_AMyNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyNPC), 3714695780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MyNPC_h_1216748971(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MyNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MyNPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
