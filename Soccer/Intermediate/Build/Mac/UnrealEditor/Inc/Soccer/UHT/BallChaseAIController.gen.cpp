// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/BallChaseAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallChaseAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_ABallChaseAIController();
SOCCER_API UClass* Z_Construct_UClass_ABallChaseAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class ABallChaseAIController
void ABallChaseAIController::StaticRegisterNativesABallChaseAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallChaseAIController);
UClass* Z_Construct_UClass_ABallChaseAIController_NoRegister()
{
	return ABallChaseAIController::StaticClass();
}
struct Z_Construct_UClass_ABallChaseAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BallChaseAIController.h" },
		{ "ModuleRelativePath", "Public/BallChaseAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myBlackboard_MetaData[] = {
		{ "Category", "BallChaseAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BallChaseAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BallChaseAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blackboardAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BallChaseAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_myBlackboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTreeAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_blackboardAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallChaseAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallChaseAIController_Statics::NewProp_myBlackboard = { "myBlackboard", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallChaseAIController, myBlackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myBlackboard_MetaData), NewProp_myBlackboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallChaseAIController_Statics::NewProp_behaviorTreeAsset = { "behaviorTreeAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallChaseAIController, behaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_behaviorTreeAsset_MetaData), NewProp_behaviorTreeAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallChaseAIController_Statics::NewProp_blackboardAsset = { "blackboardAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallChaseAIController, blackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blackboardAsset_MetaData), NewProp_blackboardAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallChaseAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallChaseAIController_Statics::NewProp_myBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallChaseAIController_Statics::NewProp_behaviorTreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallChaseAIController_Statics::NewProp_blackboardAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallChaseAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABallChaseAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallChaseAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallChaseAIController_Statics::ClassParams = {
	&ABallChaseAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABallChaseAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABallChaseAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallChaseAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallChaseAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABallChaseAIController()
{
	if (!Z_Registration_Info_UClass_ABallChaseAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallChaseAIController.OuterSingleton, Z_Construct_UClass_ABallChaseAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABallChaseAIController.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<ABallChaseAIController>()
{
	return ABallChaseAIController::StaticClass();
}
ABallChaseAIController::ABallChaseAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABallChaseAIController);
ABallChaseAIController::~ABallChaseAIController() {}
// End Class ABallChaseAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_BallChaseAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABallChaseAIController, ABallChaseAIController::StaticClass, TEXT("ABallChaseAIController"), &Z_Registration_Info_UClass_ABallChaseAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallChaseAIController), 1720317028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_BallChaseAIController_h_4287102595(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_BallChaseAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_BallChaseAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
