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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportantTargetCount_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "FirstPersonGameGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDuration_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  \xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdN\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonGameGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdN" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointPerHit_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  \xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbdT\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonGameGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbdT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusMagnification_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  \xc3\xbf\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xd0\xbb\xef\xbf\xbd\xc3\xb5\xc4\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdX\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonGameGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xbf\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xd0\xbb\xef\xbf\xbd\xc3\xb5\xc4\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdX" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImportantTargetCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointPerHit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BonusMagnification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_ImportantTargetCount = { "ImportantTargetCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonGameGameMode, ImportantTargetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportantTargetCount_MetaData), NewProp_ImportantTargetCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_GameDuration = { "GameDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonGameGameMode, GameDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDuration_MetaData), NewProp_GameDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_PointPerHit = { "PointPerHit", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonGameGameMode, PointPerHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointPerHit_MetaData), NewProp_PointPerHit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_BonusMagnification = { "BonusMagnification", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonGameGameMode, BonusMagnification), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusMagnification_MetaData), NewProp_BonusMagnification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonGameGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_ImportantTargetCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_GameDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_PointPerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonGameGameMode_Statics::NewProp_BonusMagnification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameGameMode_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AFirstPersonGameGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_AFirstPersonGameGameMode, AFirstPersonGameGameMode::StaticClass, TEXT("AFirstPersonGameGameMode"), &Z_Registration_Info_UClass_AFirstPersonGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonGameGameMode), 1237637188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameGameMode_h_2064672715(TEXT("/Script/FirstPersonGame"),
	Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
