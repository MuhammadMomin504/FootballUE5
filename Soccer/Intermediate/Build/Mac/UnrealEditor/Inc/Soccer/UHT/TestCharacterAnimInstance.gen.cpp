// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/TestCharacterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacterAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_ACharacterMovementController_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_UTestCharacterAnimInstance();
SOCCER_API UClass* Z_Construct_UClass_UTestCharacterAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class UTestCharacterAnimInstance
void UTestCharacterAnimInstance::StaticRegisterNativesUTestCharacterAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestCharacterAnimInstance);
UClass* Z_Construct_UClass_UTestCharacterAnimInstance_NoRegister()
{
	return UTestCharacterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UTestCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TestCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TestCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_characterMovementController_MetaData[] = {
		{ "Category", "TestCharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/TestCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_characterMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TestCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shouldRun_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TestCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_characterMovementController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_characterMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentSpeed;
	static void NewProp_shouldRun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldRun;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_characterMovementController = { "characterMovementController", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestCharacterAnimInstance, characterMovementController), Z_Construct_UClass_ACharacterMovementController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_characterMovementController_MetaData), NewProp_characterMovementController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_characterMovementComponent = { "characterMovementComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestCharacterAnimInstance, characterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_characterMovementComponent_MetaData), NewProp_characterMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_currentSpeed = { "currentSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestCharacterAnimInstance, currentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentSpeed_MetaData), NewProp_currentSpeed_MetaData) };
void Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_shouldRun_SetBit(void* Obj)
{
	((UTestCharacterAnimInstance*)Obj)->shouldRun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_shouldRun = { "shouldRun", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestCharacterAnimInstance), &Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_shouldRun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shouldRun_MetaData), NewProp_shouldRun_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_characterMovementController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_characterMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_currentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestCharacterAnimInstance_Statics::NewProp_shouldRun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestCharacterAnimInstance_Statics::ClassParams = {
	&UTestCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UTestCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UTestCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestCharacterAnimInstance.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<UTestCharacterAnimInstance>()
{
	return UTestCharacterAnimInstance::StaticClass();
}
UTestCharacterAnimInstance::UTestCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestCharacterAnimInstance);
UTestCharacterAnimInstance::~UTestCharacterAnimInstance() {}
// End Class UTestCharacterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_TestCharacterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestCharacterAnimInstance, UTestCharacterAnimInstance::StaticClass, TEXT("UTestCharacterAnimInstance"), &Z_Registration_Info_UClass_UTestCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestCharacterAnimInstance), 3291414875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_TestCharacterAnimInstance_h_2392878645(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_TestCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_TestCharacterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
