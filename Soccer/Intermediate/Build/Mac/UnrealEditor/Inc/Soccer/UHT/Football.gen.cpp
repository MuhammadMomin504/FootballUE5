// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/Football.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootball() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SOCCER_API UClass* Z_Construct_UClass_AFootball();
SOCCER_API UClass* Z_Construct_UClass_AFootball_NoRegister();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class AFootball Function OnFootballHit
struct Z_Construct_UFunction_AFootball_OnFootballHit_Statics
{
	struct Football_eventOnFootballHit_Parms
	{
		UPrimitiveComponent* hitComp;
		AActor* otherActor;
		UPrimitiveComponent* otherComp;
		FVector normalImpulse;
		FHitResult hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Football.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_hitComp = { "hitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Football_eventOnFootballHit_Parms, hitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitComp_MetaData), NewProp_hitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Football_eventOnFootballHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Football_eventOnFootballHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Football_eventOnFootballHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Football_eventOnFootballHit_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hit_MetaData), NewProp_hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootball_OnFootballHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_hitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_otherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_normalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootball_OnFootballHit_Statics::NewProp_hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFootball_OnFootballHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootball_OnFootballHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootball, nullptr, "OnFootballHit", nullptr, nullptr, Z_Construct_UFunction_AFootball_OnFootballHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootball_OnFootballHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFootball_OnFootballHit_Statics::Football_eventOnFootballHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFootball_OnFootballHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFootball_OnFootballHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFootball_OnFootballHit_Statics::Football_eventOnFootballHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFootball_OnFootballHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFootball_OnFootballHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFootball::execOnFootballHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComp);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_GET_STRUCT(FVector,Z_Param_normalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFootballHit(Z_Param_hitComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hit);
	P_NATIVE_END;
}
// End Class AFootball Function OnFootballHit

// Begin Class AFootball
void AFootball::StaticRegisterNativesAFootball()
{
	UClass* Class = AFootball::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnFootballHit", &AFootball::execOnFootballHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFootball);
UClass* Z_Construct_UClass_AFootball_NoRegister()
{
	return AFootball::StaticClass();
}
struct Z_Construct_UClass_AFootball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Football.h" },
		{ "ModuleRelativePath", "Public/Football.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_forceStrength_MetaData[] = {
		{ "Category", "Ball Behaviour" },
		{ "ModuleRelativePath", "Public/Football.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_idleForceStrength_MetaData[] = {
		{ "Category", "Ball Behaviour" },
		{ "ModuleRelativePath", "Public/Football.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_idleTimeDuration_MetaData[] = {
		{ "Category", "Ball Behaviour" },
		{ "ModuleRelativePath", "Public/Football.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_footballMesh_MetaData[] = {
		{ "Category", "Football" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Football.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_forceStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_idleForceStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_idleTimeDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_footballMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFootball_OnFootballHit, "OnFootballHit" }, // 4087566819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootball>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootball_Statics::NewProp_forceStrength = { "forceStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootball, forceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_forceStrength_MetaData), NewProp_forceStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootball_Statics::NewProp_idleForceStrength = { "idleForceStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootball, idleForceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_idleForceStrength_MetaData), NewProp_idleForceStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootball_Statics::NewProp_idleTimeDuration = { "idleTimeDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootball, idleTimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_idleTimeDuration_MetaData), NewProp_idleTimeDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootball_Statics::NewProp_footballMesh = { "footballMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootball, footballMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_footballMesh_MetaData), NewProp_footballMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFootball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootball_Statics::NewProp_forceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootball_Statics::NewProp_idleForceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootball_Statics::NewProp_idleTimeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootball_Statics::NewProp_footballMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFootball_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFootball_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFootball_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFootball_Statics::ClassParams = {
	&AFootball::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFootball_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFootball_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFootball_Statics::Class_MetaDataParams), Z_Construct_UClass_AFootball_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFootball()
{
	if (!Z_Registration_Info_UClass_AFootball.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFootball.OuterSingleton, Z_Construct_UClass_AFootball_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFootball.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<AFootball>()
{
	return AFootball::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFootball);
AFootball::~AFootball() {}
// End Class AFootball

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_Football_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFootball, AFootball::StaticClass, TEXT("AFootball"), &Z_Registration_Info_UClass_AFootball, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFootball), 2663196375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_Football_h_974480630(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_Football_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Unreal_Projects_Soccer_Source_Soccer_Public_Football_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
