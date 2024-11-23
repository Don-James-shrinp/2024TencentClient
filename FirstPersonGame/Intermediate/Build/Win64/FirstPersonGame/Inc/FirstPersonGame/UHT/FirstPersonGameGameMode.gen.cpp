// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGame/FirstPersonGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIRSTPERSONGAME_API UClass* Z_Construct_UClass_AFirstPersonGameGameMode();
FIRSTPERSONGAME_API UClass* Z_Construct_UClass_AFirstPersonGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGame();
// End Cross Module References

// Begin Class AFirstPersonGameGameMode
void AFirstPersonGameGameMode::StaticRegisterNativesAFirstPersonGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonGameGameMode);
UClass* Z_Construct_UClass_AFirstPersonGameGameMode_NoRegister()
{
	return AFirstPersonGameGameMode::StaticClass();
}
struct Z_Construct_UClass_AFirstPersonGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstPersonGameGameMode.h" },
		{ "ModuleRelativePath", "FirstPersonGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstPersonGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonGameGameMode_Statics::ClassParams = {
	&AFirstPersonGameGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPersonGameGameMode()
{
	if (!Z_Registration_Info_UClass_AFirstPersonGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonGameGameMode.OuterSingleton, Z_Construct_UClass_AFirstPersonGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPersonGameGameMode.OuterSingleton;
}
template<> FIRSTPERSONGAME_API UClass* StaticClass<AFirstPersonGameGameMode>()
{
	return AFirstPersonGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonGameGameMode);
AFirstPersonGameGameMode::~AFirstPersonGameGameMode() {}
// End Class AFirstPersonGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonGameGameMode, AFirstPersonGameGameMode::StaticClass, TEXT("AFirstPersonGameGameMode"), &Z_Registration_Info_UClass_AFirstPersonGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonGameGameMode), 2321890630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameGameMode_h_1710797326(TEXT("/Script/FirstPersonGame"),
	Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
