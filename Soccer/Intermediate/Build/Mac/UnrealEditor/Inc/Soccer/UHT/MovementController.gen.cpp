// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/MovementController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_AMovementController();
SOCCER_API UClass* Z_Construct_UClass_AMovementController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class AMovementController
void AMovementController::StaticRegisterNativesAMovementController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovementController);
UClass* Z_Construct_UClass_AMovementController_NoRegister()
{
	return AMovementController::StaticClass();
}
struct Z_Construct_UClass_AMovementController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MovementController.h" },
		{ "ModuleRelativePath", "Public/MovementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "MovementController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_characterMesh_MetaData[] = {
		{ "Category", "MovementController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_characterMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementController_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementController, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComponent_MetaData), NewProp_CapsuleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementController_Statics::NewProp_characterMesh = { "characterMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementController, characterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_characterMesh_MetaData), NewProp_characterMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovementController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementController_Statics::NewProp_CapsuleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementController_Statics::NewProp_characterMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovementController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovementController_Statics::ClassParams = {
	&AMovementController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovementController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovementController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovementController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovementController()
{
	if (!Z_Registration_Info_UClass_AMovementController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovementController.OuterSingleton, Z_Construct_UClass_AMovementController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovementController.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<AMovementController>()
{
	return AMovementController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementController);
AMovementController::~AMovementController() {}
// End Class AMovementController

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MovementController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovementController, AMovementController::StaticClass, TEXT("AMovementController"), &Z_Registration_Info_UClass_AMovementController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovementController), 712457137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MovementController_h_1808111710(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MovementController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_MovementController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
