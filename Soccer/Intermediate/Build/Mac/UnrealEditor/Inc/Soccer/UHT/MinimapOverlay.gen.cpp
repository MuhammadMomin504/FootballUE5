// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/HUD/MinimapOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimapOverlay() {}

// Begin Cross Module References
SOCCER_API UClass* Z_Construct_UClass_UMinimapOverlay();
SOCCER_API UClass* Z_Construct_UClass_UMinimapOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class UMinimapOverlay
void UMinimapOverlay::StaticRegisterNativesUMinimapOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinimapOverlay);
UClass* Z_Construct_UClass_UMinimapOverlay_NoRegister()
{
	return UMinimapOverlay::StaticClass();
}
struct Z_Construct_UClass_UMinimapOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/MinimapOverlay.h" },
		{ "ModuleRelativePath", "Public/HUD/MinimapOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPointer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MinimapOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPointer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinimapOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinimapOverlay_Statics::NewProp_PlayerPointer = { "PlayerPointer", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapOverlay, PlayerPointer), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPointer_MetaData), NewProp_PlayerPointer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinimapOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapOverlay_Statics::NewProp_PlayerPointer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinimapOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinimapOverlay_Statics::ClassParams = {
	&UMinimapOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMinimapOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinimapOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinimapOverlay()
{
	if (!Z_Registration_Info_UClass_UMinimapOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinimapOverlay.OuterSingleton, Z_Construct_UClass_UMinimapOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinimapOverlay.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<UMinimapOverlay>()
{
	return UMinimapOverlay::StaticClass();
}
UMinimapOverlay::UMinimapOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinimapOverlay);
UMinimapOverlay::~UMinimapOverlay() {}
// End Class UMinimapOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MinimapOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinimapOverlay, UMinimapOverlay::StaticClass, TEXT("UMinimapOverlay"), &Z_Registration_Info_UClass_UMinimapOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinimapOverlay), 2218854489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MinimapOverlay_h_3267874923(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MinimapOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MinimapOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
