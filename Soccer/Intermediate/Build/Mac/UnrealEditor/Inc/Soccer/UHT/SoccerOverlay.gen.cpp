// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/HUD/SoccerOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoccerOverlay() {}

// Begin Cross Module References
SOCCER_API UClass* Z_Construct_UClass_USoccerOverlay();
SOCCER_API UClass* Z_Construct_UClass_USoccerOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class USoccerOverlay
void USoccerOverlay::StaticRegisterNativesUSoccerOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoccerOverlay);
UClass* Z_Construct_UClass_USoccerOverlay_NoRegister()
{
	return USoccerOverlay::StaticClass();
}
struct Z_Construct_UClass_USoccerOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/SoccerOverlay.h" },
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignupButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SignupButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoccerOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoccerOverlay_Statics::NewProp_SignupButton = { "SignupButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoccerOverlay, SignupButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignupButton_MetaData), NewProp_SignupButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoccerOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoccerOverlay_Statics::NewProp_SignupButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoccerOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoccerOverlay_Statics::ClassParams = {
	&USoccerOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoccerOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_USoccerOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoccerOverlay()
{
	if (!Z_Registration_Info_UClass_USoccerOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoccerOverlay.OuterSingleton, Z_Construct_UClass_USoccerOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoccerOverlay.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<USoccerOverlay>()
{
	return USoccerOverlay::StaticClass();
}
USoccerOverlay::USoccerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoccerOverlay);
USoccerOverlay::~USoccerOverlay() {}
// End Class USoccerOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoccerOverlay, USoccerOverlay::StaticClass, TEXT("USoccerOverlay"), &Z_Registration_Info_UClass_USoccerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoccerOverlay), 1981754476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_2678998312(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
