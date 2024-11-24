// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGame/Public/TargetCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FIRSTPERSONGAME_API UClass* Z_Construct_UClass_ATargetCube();
FIRSTPERSONGAME_API UClass* Z_Construct_UClass_ATargetCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGame();
// End Cross Module References

// Begin Class ATargetCube Function OnHit
struct Z_Construct_UFunction_ATargetCube_OnHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetCube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetCube_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetCube, nullptr, "OnHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATargetCube_OnHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATargetCube_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetCube_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATargetCube::execOnHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit();
	P_NATIVE_END;
}
// End Class ATargetCube Function OnHit

// Begin Class ATargetCube
void ATargetCube::StaticRegisterNativesATargetCube()
{
	UClass* Class = ATargetCube::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &ATargetCube::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetCube);
UClass* Z_Construct_UClass_ATargetCube_NoRegister()
{
	return ATargetCube::StaticClass();
}
struct Z_Construct_UClass_ATargetCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TargetCube.h" },
		{ "ModuleRelativePath", "Public/TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsImportantTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/TargetCube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
	static void NewProp_bIsImportantTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImportantTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetCube_OnHit, "OnHit" }, // 3543407241
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCube, Points), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCube, ScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactor_MetaData), NewProp_ScaleFactor_MetaData) };
void Z_Construct_UClass_ATargetCube_Statics::NewProp_bIsImportantTarget_SetBit(void* Obj)
{
	((ATargetCube*)Obj)->bIsImportantTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_bIsImportantTarget = { "bIsImportantTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATargetCube), &Z_Construct_UClass_ATargetCube_Statics::NewProp_bIsImportantTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsImportantTarget_MetaData), NewProp_bIsImportantTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_ScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_bIsImportantTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetCube_Statics::ClassParams = {
	&ATargetCube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATargetCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetCube()
{
	if (!Z_Registration_Info_UClass_ATargetCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetCube.OuterSingleton, Z_Construct_UClass_ATargetCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetCube.OuterSingleton;
}
template<> FIRSTPERSONGAME_API UClass* StaticClass<ATargetCube>()
{
	return ATargetCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetCube);
ATargetCube::~ATargetCube() {}
// End Class ATargetCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetCube, ATargetCube::StaticClass, TEXT("ATargetCube"), &Z_Registration_Info_UClass_ATargetCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetCube), 2704288266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_1845375253(TEXT("/Script/FirstPersonGame"),
	Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
