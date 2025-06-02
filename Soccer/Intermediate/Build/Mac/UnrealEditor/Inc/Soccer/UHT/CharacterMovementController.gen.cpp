// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/CharacterMovementController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SOCCER_API UClass* Z_Construct_UClass_ACharacterMovementController();
SOCCER_API UClass* Z_Construct_UClass_ACharacterMovementController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class ACharacterMovementController
void ACharacterMovementController::StaticRegisterNativesACharacterMovementController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterMovementController);
UClass* Z_Construct_UClass_ACharacterMovementController_NoRegister()
{
	return ACharacterMovementController::StaticClass();
}
struct Z_Construct_UClass_ACharacterMovementController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterMovementController.h" },
		{ "ModuleRelativePath", "Public/CharacterMovementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CharacterMovementController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterMovementController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovementController_Statics::NewProp_currentSpeed = { "currentSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMovementController, currentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentSpeed_MetaData), NewProp_currentSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterMovementController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovementController_Statics::NewProp_currentSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovementController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterMovementController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovementController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterMovementController_Statics::ClassParams = {
	&ACharacterMovementController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACharacterMovementController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovementController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovementController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterMovementController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterMovementController()
{
	if (!Z_Registration_Info_UClass_ACharacterMovementController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterMovementController.OuterSingleton, Z_Construct_UClass_ACharacterMovementController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterMovementController.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<ACharacterMovementController>()
{
	return ACharacterMovementController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterMovementController);
ACharacterMovementController::~ACharacterMovementController() {}
// End Class ACharacterMovementController

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_CharacterMovementController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterMovementController, ACharacterMovementController::StaticClass, TEXT("ACharacterMovementController"), &Z_Registration_Info_UClass_ACharacterMovementController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterMovementController), 723417620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_CharacterMovementController_h_3169618515(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_CharacterMovementController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_CharacterMovementController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
