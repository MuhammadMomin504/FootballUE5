// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soccer/Public/HUD/SoccerOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoccerOverlay() {}

// Begin Cross Module References
SOCCER_API UClass* Z_Construct_UClass_ASoccerHUD_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_UMySignUpLoginAPI_NoRegister();
SOCCER_API UClass* Z_Construct_UClass_USoccerOverlay();
SOCCER_API UClass* Z_Construct_UClass_USoccerOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Soccer();
// End Cross Module References

// Begin Class USoccerOverlay Function OnSignupButtonClicked
struct Z_Construct_UFunction_USoccerOverlay_OnSignupButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoccerOverlay_OnSignupButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoccerOverlay, nullptr, "OnSignupButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoccerOverlay_OnSignupButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoccerOverlay_OnSignupButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USoccerOverlay_OnSignupButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoccerOverlay_OnSignupButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoccerOverlay::execOnSignupButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSignupButtonClicked();
	P_NATIVE_END;
}
// End Class USoccerOverlay Function OnSignupButtonClicked

// Begin Class USoccerOverlay Function SetSoccerHUDReference
struct Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics
{
	struct SoccerOverlay_eventSetSoccerHUDReference_Parms
	{
		ASoccerHUD* passedSoccerHUD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_passedSoccerHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::NewProp_passedSoccerHUD = { "passedSoccerHUD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoccerOverlay_eventSetSoccerHUDReference_Parms, passedSoccerHUD), Z_Construct_UClass_ASoccerHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::NewProp_passedSoccerHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoccerOverlay, nullptr, "SetSoccerHUDReference", nullptr, nullptr, Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::SoccerOverlay_eventSetSoccerHUDReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::SoccerOverlay_eventSetSoccerHUDReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoccerOverlay::execSetSoccerHUDReference)
{
	P_GET_OBJECT(ASoccerHUD,Z_Param_passedSoccerHUD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoccerHUDReference(Z_Param_passedSoccerHUD);
	P_NATIVE_END;
}
// End Class USoccerOverlay Function SetSoccerHUDReference

// Begin Class USoccerOverlay Function ShowLoginPanel
struct Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics
{
	struct SoccerOverlay_eventShowLoginPanel_Parms
	{
		bool shouldShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
#endif // WITH_METADATA
	static void NewProp_shouldShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::NewProp_shouldShow_SetBit(void* Obj)
{
	((SoccerOverlay_eventShowLoginPanel_Parms*)Obj)->shouldShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::NewProp_shouldShow = { "shouldShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoccerOverlay_eventShowLoginPanel_Parms), &Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::NewProp_shouldShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::NewProp_shouldShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoccerOverlay, nullptr, "ShowLoginPanel", nullptr, nullptr, Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::SoccerOverlay_eventShowLoginPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::SoccerOverlay_eventShowLoginPanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoccerOverlay::execShowLoginPanel)
{
	P_GET_UBOOL(Z_Param_shouldShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowLoginPanel(Z_Param_shouldShow);
	P_NATIVE_END;
}
// End Class USoccerOverlay Function ShowLoginPanel

// Begin Class USoccerOverlay
void USoccerOverlay::StaticRegisterNativesUSoccerOverlay()
{
	UClass* Class = USoccerOverlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSignupButtonClicked", &USoccerOverlay::execOnSignupButtonClicked },
		{ "SetSoccerHUDReference", &USoccerOverlay::execSetSoccerHUDReference },
		{ "ShowLoginPanel", &USoccerOverlay::execShowLoginPanel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoccerOverlay);
UClass* Z_Construct_UClass_USoccerOverlay_NoRegister()
{
	return USoccerOverlay::StaticClass();
}
struct Z_Construct_UClass_USoccerOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/SoccerOverlay.h" },
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignupButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_emailTextField_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_passwordTextField_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mySoccerHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mySignUpLoginAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SSignupPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SoccerOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SignupButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_emailTextField;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_passwordTextField;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mySoccerHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mySignUpLoginAPI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SSignupPanel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoccerOverlay_OnSignupButtonClicked, "OnSignupButtonClicked" }, // 2273924579
		{ &Z_Construct_UFunction_USoccerOverlay_SetSoccerHUDReference, "SetSoccerHUDReference" }, // 1272372849
		{ &Z_Construct_UFunction_USoccerOverlay_ShowLoginPanel, "ShowLoginPanel" }, // 1088632068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoccerOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoccerOverlay_Statics::NewProp_SignupButton = { "SignupButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoccerOverlay, SignupButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignupButton_MetaData), NewProp_SignupButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoccerOverlay_Statics::NewProp_emailTextField = { "emailTextField", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoccerOverlay, emailTextField), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_emailTextField_MetaData), NewProp_emailTextField_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoccerOverlay_Statics::NewProp_passwordTextField = { "passwordTextField", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoccerOverlay, passwordTextField), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_passwordTextField_MetaData), NewProp_passwordTextField_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoccerOverlay_Statics::NewProp_mySoccerHUD = { "mySoccerHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoccerOverlay, mySoccerHUD), Z_Construct_UClass_ASoccerHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mySoccerHUD_MetaData), NewProp_mySoccerHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoccerOverlay_Statics::NewProp_mySignUpLoginAPI = { "mySignUpLoginAPI", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoccerOverlay, mySignUpLoginAPI), Z_Construct_UClass_UMySignUpLoginAPI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mySignUpLoginAPI_MetaData), NewProp_mySignUpLoginAPI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoccerOverlay_Statics::NewProp_SSignupPanel = { "SSignupPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoccerOverlay, SSignupPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SSignupPanel_MetaData), NewProp_SSignupPanel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoccerOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoccerOverlay_Statics::NewProp_SignupButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoccerOverlay_Statics::NewProp_emailTextField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoccerOverlay_Statics::NewProp_passwordTextField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoccerOverlay_Statics::NewProp_mySoccerHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoccerOverlay_Statics::NewProp_mySignUpLoginAPI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoccerOverlay_Statics::NewProp_SSignupPanel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoccerOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Soccer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoccerOverlay_Statics::ClassParams = {
	&USoccerOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoccerOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoccerOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_USoccerOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoccerOverlay()
{
	if (!Z_Registration_Info_UClass_USoccerOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoccerOverlay.OuterSingleton, Z_Construct_UClass_USoccerOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoccerOverlay.OuterSingleton;
}
template<> SOCCER_API UClass* StaticClass<USoccerOverlay>()
{
	return USoccerOverlay::StaticClass();
}
USoccerOverlay::USoccerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoccerOverlay);
USoccerOverlay::~USoccerOverlay() {}
// End Class USoccerOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoccerOverlay, USoccerOverlay::StaticClass, TEXT("USoccerOverlay"), &Z_Registration_Info_UClass_USoccerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoccerOverlay), 4040383175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_2929525743(TEXT("/Script/Soccer"),
	Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_muhammadmomin_Documents_Folders_Development_UEGitProjects_FootballUE5_Soccer_Source_Soccer_Public_HUD_SoccerOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
