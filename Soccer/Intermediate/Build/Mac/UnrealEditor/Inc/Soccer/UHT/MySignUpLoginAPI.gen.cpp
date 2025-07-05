// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/MySignUpLoginAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySignUpLoginAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SOCCER_API UClass* Z_Construct_UClass_UMySignUpLoginAPI();
SOCCER_API UClass* Z_Construct_UClass_UMySignUpLoginAPI_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class UMySignUpLoginAPI
void UMySignUpLoginAPI::StaticRegisterNativesUMySignUpLoginAPI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySignUpLoginAPI);
UClass* Z_Construct_UClass_UMySignUpLoginAPI_NoRegister()
{
	return UMySignUpLoginAPI::StaticClass();
}
struct Z_Construct_UClass_UMySignUpLoginAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MySignUpLoginAPI.h" },
		{ "ModuleRelativePath", "Public/MySignUpLoginAPI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySignUpLoginAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMySignUpLoginAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySignUpLoginAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySignUpLoginAPI_Statics::ClassParams = {
	&UMySignUpLoginAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySignUpLoginAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMySignUpLoginAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMySignUpLoginAPI()
{
	if (!Z_Registration_Info_UClass_UMySignUpLoginAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySignUpLoginAPI.OuterSingleton, Z_Construct_UClass_UMySignUpLoginAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMySignUpLoginAPI.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<UMySignUpLoginAPI>()
{
	return UMySignUpLoginAPI::StaticClass();
}
UMySignUpLoginAPI::UMySignUpLoginAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMySignUpLoginAPI);
UMySignUpLoginAPI::~UMySignUpLoginAPI() {}
// End Class UMySignUpLoginAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MySignUpLoginAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMySignUpLoginAPI, UMySignUpLoginAPI::StaticClass, TEXT("UMySignUpLoginAPI"), &Z_Registration_Info_UClass_UMySignUpLoginAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySignUpLoginAPI), 3112605792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MySignUpLoginAPI_h_1068067412(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MySignUpLoginAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_MySignUpLoginAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
