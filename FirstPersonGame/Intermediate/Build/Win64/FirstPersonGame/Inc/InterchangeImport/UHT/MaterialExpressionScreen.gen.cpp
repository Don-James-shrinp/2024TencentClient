// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Private/MaterialX/MaterialExpressions/MaterialExpressionScreen.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScreen() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXScreen();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXScreen_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UMaterialExpressionMaterialXScreen
void UMaterialExpressionMaterialXScreen::StaticRegisterNativesUMaterialExpressionMaterialXScreen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialXScreen);
UClass* Z_Construct_UClass_UMaterialExpressionMaterialXScreen_NoRegister()
{
	return UMaterialExpressionMaterialXScreen::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blend nodes take two 1-4 channel inputs and apply the same operator to all channels.\n * Blend nodes support an optional float input mix , which can be used\n * to mix the original B value with the result of the blend operation.\n * Operation: 1-(1-A)(1-B)\n * Result: Lerp(B, 1-(1-F)(1-B), Alpha)\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressions/MaterialExpressionScreen.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionScreen.h" },
		{ "Private", "" },
		{ "ToolTip", "Blend nodes take two 1-4 channel inputs and apply the same operator to all channels.\nBlend nodes support an optional float input mix , which can be used\nto mix the original B value with the result of the blend operation.\nOperation: 1-(1-A)(1-B)\nResult: Lerp(B, 1-(1-F)(1-B), Alpha)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionScreen.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstAlpha' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstAlpha_MetaData[] = {
		{ "Category", "MaterialExpressionLinearInterpolate" },
		{ "Comment", "/** only used if Alpha is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionScreen.h" },
		{ "OverridingInputProperty", "Alpha" },
		{ "ToolTip", "only used if Alpha is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialXScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXScreen, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXScreen, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXScreen, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_ConstAlpha = { "ConstAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXScreen, ConstAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstAlpha_MetaData), NewProp_ConstAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::NewProp_ConstAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::ClassParams = {
	&UMaterialExpressionMaterialXScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMaterialXScreen()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialXScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialXScreen.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialXScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMaterialXScreen.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionMaterialXScreen>()
{
	return UMaterialExpressionMaterialXScreen::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialXScreen);
UMaterialExpressionMaterialXScreen::~UMaterialExpressionMaterialXScreen() {}
// End Class UMaterialExpressionMaterialXScreen

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionScreen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialXScreen, UMaterialExpressionMaterialXScreen::StaticClass, TEXT("UMaterialExpressionMaterialXScreen"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialXScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialXScreen), 442456927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionScreen_h_2490451972(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionScreen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
