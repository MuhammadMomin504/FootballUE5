// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/Character/MySoccerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySoccerCharacter() {}

// Begin Cross Module References
SOCCER_API UClass* Z_Construct_UClass_ACharacterMovementController();
SOCCER_API UClass* Z_Construct_UClass_AMySoccerCharacter();
SOCCER_API UClass* Z_Construct_UClass_AMySoccerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class AMySoccerCharacter
void AMySoccerCharacter::StaticRegisterNativesAMySoccerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySoccerCharacter);
UClass* Z_Construct_UClass_AMySoccerCharacter_NoRegister()
{
	return AMySoccerCharacter::StaticClass();
}
struct Z_Construct_UClass_AMySoccerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MySoccerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/MySoccerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_proximityDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/MySoccerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_proximityDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySoccerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMySoccerCharacter_Statics::NewProp_proximityDistance = { "proximityDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySoccerCharacter, proximityDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_proximityDistance_MetaData), NewProp_proximityDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMySoccerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySoccerCharacter_Statics::NewProp_proximityDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySoccerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMySoccerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacterMovementController,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySoccerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySoccerCharacter_Statics::ClassParams = {
	&AMySoccerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMySoccerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMySoccerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMySoccerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMySoccerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMySoccerCharacter()
{
	if (!Z_Registration_Info_UClass_AMySoccerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySoccerCharacter.OuterSingleton, Z_Construct_UClass_AMySoccerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMySoccerCharacter.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<AMySoccerCharacter>()
{
	return AMySoccerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMySoccerCharacter);
AMySoccerCharacter::~AMySoccerCharacter() {}
// End Class AMySoccerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_Character_MySoccerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMySoccerCharacter, AMySoccerCharacter::StaticClass, TEXT("AMySoccerCharacter"), &Z_Registration_Info_UClass_AMySoccerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySoccerCharacter), 4013451074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_Character_MySoccerCharacter_h_1230826180(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_Character_MySoccerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_Character_MySoccerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
