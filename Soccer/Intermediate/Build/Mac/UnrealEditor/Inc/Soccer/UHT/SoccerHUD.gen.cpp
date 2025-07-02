// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/HUD/SoccerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoccerHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SOCCER_API UClass* Z_Construct_UClass_ASoccerHUD();
SOCCER_API UClass* Z_Construct_UClass_ASoccerHUD_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_USoccerOverlay_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class ASoccerHUD
void ASoccerHUD::StaticRegisterNativesASoccerHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoccerHUD);
UClass* Z_Construct_UClass_ASoccerHUD_NoRegister()
{
	return ASoccerHUD::StaticClass();
}
struct Z_Construct_UClass_ASoccerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/SoccerHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/SoccerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_soccerOverlayClass_MetaData[] = {
		{ "Category", "Soccer HUD" },
		{ "ModuleRelativePath", "Public/HUD/SoccerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_soccerOverlayClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoccerHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoccerHUD_Statics::NewProp_soccerOverlayClass = { "soccerOverlayClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoccerHUD, soccerOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoccerOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_soccerOverlayClass_MetaData), NewProp_soccerOverlayClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoccerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoccerHUD_Statics::NewProp_soccerOverlayClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoccerHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoccerHUD_Statics::ClassParams = {
	&ASoccerHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASoccerHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoccerHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoccerHUD()
{
	if (!Z_Registration_Info_UClass_ASoccerHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoccerHUD.OuterSingleton, Z_Construct_UClass_ASoccerHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoccerHUD.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<ASoccerHUD>()
{
	return ASoccerHUD::StaticClass();
}
ASoccerHUD::ASoccerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoccerHUD);
ASoccerHUD::~ASoccerHUD() {}
// End Class ASoccerHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoccerHUD, ASoccerHUD::StaticClass, TEXT("ASoccerHUD"), &Z_Registration_Info_UClass_ASoccerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoccerHUD), 2225819934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerHUD_h_2370632722(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
