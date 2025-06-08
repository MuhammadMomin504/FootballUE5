// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/SoccerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoccerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_ASoccerGameMode();
SOCCER_API UClass* Z_Construct_UClass_ASoccerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class ASoccerGameMode Function SwitchToNewPawn
struct Z_Construct_UFunction_ASoccerGameMode_SwitchToNewPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoccerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoccerGameMode_SwitchToNewPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoccerGameMode, nullptr, "SwitchToNewPawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoccerGameMode_SwitchToNewPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASoccerGameMode_SwitchToNewPawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASoccerGameMode_SwitchToNewPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASoccerGameMode_SwitchToNewPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASoccerGameMode::execSwitchToNewPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToNewPawn();
	P_NATIVE_END;
}
// End Class ASoccerGameMode Function SwitchToNewPawn

// Begin Class ASoccerGameMode
void ASoccerGameMode::StaticRegisterNativesASoccerGameMode()
{
	UClass* Class = ASoccerGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwitchToNewPawn", &ASoccerGameMode::execSwitchToNewPawn },
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
		{ "ModuleRelativePath", "SoccerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCPawnClass_MetaData[] = {
		{ "Category", "Gameplay Settings" },
		{ "ModuleRelativePath", "SoccerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCPawnClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASoccerGameMode_SwitchToNewPawn, "SwitchToNewPawn" }, // 1159752099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoccerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_NPCPawnClass = { "NPCPawnClass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoccerGameMode, NPCPawnClass), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCPawnClass_MetaData), NewProp_NPCPawnClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoccerGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoccerGameMode_Statics::NewProp_NPCPawnClass,
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
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_SoccerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoccerGameMode, ASoccerGameMode::StaticClass, TEXT("ASoccerGameMode"), &Z_Registration_Info_UClass_ASoccerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoccerGameMode), 3230333466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_SoccerGameMode_h_3175998769(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_SoccerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_SoccerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
