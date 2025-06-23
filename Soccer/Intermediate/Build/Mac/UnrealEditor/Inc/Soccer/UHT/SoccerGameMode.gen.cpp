// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/SoccerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoccerGameMode() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_ASoccerGameMode();
SOCCER_API UClass* Z_Construct_UClass_ASoccerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class ASoccerGameMode Function SwitchPlayerControlsToNPC
struct Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics
{
	struct SoccerGameMode_eventSwitchPlayerControlsToNPC_Parms
	{
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoccerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoccerGameMode_eventSwitchPlayerControlsToNPC_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoccerGameMode, nullptr, "SwitchPlayerControlsToNPC", nullptr, nullptr, Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::SoccerGameMode_eventSwitchPlayerControlsToNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::SoccerGameMode_eventSwitchPlayerControlsToNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASoccerGameMode::execSwitchPlayerControlsToNPC)
{
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchPlayerControlsToNPC(Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class ASoccerGameMode Function SwitchPlayerControlsToNPC

// Begin Class ASoccerGameMode
void ASoccerGameMode::StaticRegisterNativesASoccerGameMode()
{
	UClass* Class = ASoccerGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwitchPlayerControlsToNPC", &ASoccerGameMode::execSwitchPlayerControlsToNPC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoccerGameMode);
UClass* Z_Construct_UClass_ASoccerGameMode_NoRegister()
{
	return ASoccerGameMode::StaticClass();
}
struct Z_Construct_UClass_ASoccerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SoccerGameMode.h" },
		{ "ModuleRelativePath", "Public/SoccerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_storedOriginalPlayerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Gameplay Settings\")\n" },
#endif
		{ "ModuleRelativePath", "Public/SoccerGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Gameplay Settings\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_storedOriginalPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoccerGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallChaseAIControllerBPClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SoccerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_storedOriginalPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_storedOriginalPawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BallChaseAIControllerBPClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASoccerGameMode_SwitchPlayerControlsToNPC, "SwitchPlayerControlsToNPC" }, // 2190327704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoccerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_storedOriginalPlayerController = { "storedOriginalPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoccerGameMode, storedOriginalPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_storedOriginalPlayerController_MetaData), NewProp_storedOriginalPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_storedOriginalPawn = { "storedOriginalPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoccerGameMode, storedOriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_storedOriginalPawn_MetaData), NewProp_storedOriginalPawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_BallChaseAIControllerBPClass = { "BallChaseAIControllerBPClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoccerGameMode, BallChaseAIControllerBPClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallChaseAIControllerBPClass_MetaData), NewProp_BallChaseAIControllerBPClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoccerGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_storedOriginalPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_storedOriginalPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_BallChaseAIControllerBPClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoccerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoccerGameMode_Statics::ClassParams = {
	&ASoccerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASoccerGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoccerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoccerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoccerGameMode()
{
	if (!Z_Registration_Info_UClass_ASoccerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoccerGameMode.OuterSingleton, Z_Construct_UClass_ASoccerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoccerGameMode.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<ASoccerGameMode>()
{
	return ASoccerGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoccerGameMode);
ASoccerGameMode::~ASoccerGameMode() {}
// End Class ASoccerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_SoccerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoccerGameMode, ASoccerGameMode::StaticClass, TEXT("ASoccerGameMode"), &Z_Registration_Info_UClass_ASoccerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoccerGameMode), 3984027686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_SoccerGameMode_h_1193955694(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_SoccerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_SoccerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
