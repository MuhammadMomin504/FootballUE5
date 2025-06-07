// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/AITasks/MyBTTask_FindBall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_FindBall() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SOCCER_API UClass* Z_Construct_UClass_UMyBTTask_FindBall();
SOCCER_API UClass* Z_Construct_UClass_UMyBTTask_FindBall_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class UMyBTTask_FindBall
void UMyBTTask_FindBall::StaticRegisterNativesUMyBTTask_FindBall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_FindBall);
UClass* Z_Construct_UClass_UMyBTTask_FindBall_NoRegister()
{
	return UMyBTTask_FindBall::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_FindBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AITasks/MyBTTask_FindBall.h" },
		{ "ModuleRelativePath", "Public/AITasks/MyBTTask_FindBall.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_FindBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBTTask_FindBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_FindBall_Statics::ClassParams = {
	&UMyBTTask_FindBall::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_FindBall_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_FindBall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_FindBall()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_FindBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_FindBall.OuterSingleton, Z_Construct_UClass_UMyBTTask_FindBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_FindBall.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<UMyBTTask_FindBall>()
{
	return UMyBTTask_FindBall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_FindBall);
UMyBTTask_FindBall::~UMyBTTask_FindBall() {}
// End Class UMyBTTask_FindBall

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_AITasks_MyBTTask_FindBall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_FindBall, UMyBTTask_FindBall::StaticClass, TEXT("UMyBTTask_FindBall"), &Z_Registration_Info_UClass_UMyBTTask_FindBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_FindBall), 3179950456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_AITasks_MyBTTask_FindBall_h_2530506400(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_AITasks_MyBTTask_FindBall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_AITasks_MyBTTask_FindBall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
