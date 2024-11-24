// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGame/Public/FirstPersonGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
FIRSTPERSONGAME_API UClass* Z_Construct_UClass_AFirstPersonGameStateBase();
FIRSTPERSONGAME_API UClass* Z_Construct_UClass_AFirstPersonGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGame();
// End Cross Module References

// Begin Class AFirstPersonGameStateBase
void AFirstPersonGameStateBase::StaticRegisterNativesAFirstPersonGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonGameStateBase);
UClass* Z_Construct_UClass_AFirstPersonGameStateBase_NoRegister()
{
	return AFirstPersonGameStateBase::StaticClass();
}
struct Z_Construct_UClass_AFirstPersonGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb4\xe6\xb4\xa2\xc8\xab\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xd7\xb4\xcc\xac\n *\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstPersonGameStateBase.h" },
		{ "ModuleRelativePath", "Public/FirstPersonGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb4\xe6\xb4\xa2\xc8\xab\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xd7\xb4\xcc\xac" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstPersonGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonGameStateBase_Statics::ClassParams = {
	&AFirstPersonGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPersonGameStateBase()
{
	if (!Z_Registration_Info_UClass_AFirstPersonGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonGameStateBase.OuterSingleton, Z_Construct_UClass_AFirstPersonGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPersonGameStateBase.OuterSingleton;
}
template<> FIRSTPERSONGAME_API UClass* StaticClass<AFirstPersonGameStateBase>()
{
	return AFirstPersonGameStateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonGameStateBase);
AFirstPersonGameStateBase::~AFirstPersonGameStateBase() {}
// End Class AFirstPersonGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_FirstPersonGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonGameStateBase, AFirstPersonGameStateBase::StaticClass, TEXT("AFirstPersonGameStateBase"), &Z_Registration_Info_UClass_AFirstPersonGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonGameStateBase), 3027183927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_FirstPersonGameStateBase_h_3131567026(TEXT("/Script/FirstPersonGame"),
	Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_FirstPersonGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_FirstPersonGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
