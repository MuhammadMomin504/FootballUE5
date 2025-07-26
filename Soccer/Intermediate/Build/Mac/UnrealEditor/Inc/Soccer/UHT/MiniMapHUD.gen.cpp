// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/HUD/MiniMapHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SOCCER_API UClass* Z_Construct_UClass_AMiniMapHUD();
SOCCER_API UClass* Z_Construct_UClass_AMiniMapHUD_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_UMinimapOverlay_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class AMiniMapHUD
void AMiniMapHUD::StaticRegisterNativesAMiniMapHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMiniMapHUD);
UClass* Z_Construct_UClass_AMiniMapHUD_NoRegister()
{
	return AMiniMapHUD::StaticClass();
}
struct Z_Construct_UClass_AMiniMapHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/MiniMapHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/MiniMapHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minimapOverlayClass_MetaData[] = {
		{ "Category", "MiniMap HUD" },
		{ "ModuleRelativePath", "Public/HUD/MiniMapHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minimapOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MiniMapHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_minimapOverlayClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_minimapOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniMapHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMiniMapHUD_Statics::NewProp_minimapOverlayClass = { "minimapOverlayClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapHUD, minimapOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMinimapOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minimapOverlayClass_MetaData), NewProp_minimapOverlayClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniMapHUD_Statics::NewProp_minimapOverlay = { "minimapOverlay", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapHUD, minimapOverlay), Z_Construct_UClass_UMinimapOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minimapOverlay_MetaData), NewProp_minimapOverlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiniMapHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapHUD_Statics::NewProp_minimapOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapHUD_Statics::NewProp_minimapOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMiniMapHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMiniMapHUD_Statics::ClassParams = {
	&AMiniMapHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMiniMapHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMiniMapHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMiniMapHUD()
{
	if (!Z_Registration_Info_UClass_AMiniMapHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMiniMapHUD.OuterSingleton, Z_Construct_UClass_AMiniMapHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMiniMapHUD.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<AMiniMapHUD>()
{
	return AMiniMapHUD::StaticClass();
}
AMiniMapHUD::AMiniMapHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniMapHUD);
AMiniMapHUD::~AMiniMapHUD() {}
// End Class AMiniMapHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MiniMapHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMiniMapHUD, AMiniMapHUD::StaticClass, TEXT("AMiniMapHUD"), &Z_Registration_Info_UClass_AMiniMapHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMiniMapHUD), 4092253580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MiniMapHUD_h_4055726491(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MiniMapHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_MiniMapHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
