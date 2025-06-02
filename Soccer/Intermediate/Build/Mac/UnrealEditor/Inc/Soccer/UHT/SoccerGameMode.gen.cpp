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
SOCCER_API UClass* Z_Construct_UClass_ASoccerGameMode();
SOCCER_API UClass* Z_Construct_UClass_ASoccerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class ASoccerGameMode
void ASoccerGameMode::StaticRegisterNativesASoccerGameMode()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoccerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_SoccerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoccerGameMode, ASoccerGameMode::StaticClass, TEXT("ASoccerGameMode"), &Z_Registration_Info_UClass_ASoccerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoccerGameMode), 3742423862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_SoccerGameMode_h_3346778585(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_SoccerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_SoccerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
