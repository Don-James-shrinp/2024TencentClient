// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_BoneReferenceSkeletonProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_BoneReferenceSkeletonProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider();
ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UBoneReferenceSkeletonProvider
void UBoneReferenceSkeletonProvider::StaticRegisterNativesUBoneReferenceSkeletonProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoneReferenceSkeletonProvider);
UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister()
{
	return UBoneReferenceSkeletonProvider::StaticClass();
}
struct Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_BoneReferenceSkeletonProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBoneReferenceSkeletonProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::ClassParams = {
	&UBoneReferenceSkeletonProvider::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider()
{
	if (!Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.OuterSingleton, Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBoneReferenceSkeletonProvider>()
{
	return UBoneReferenceSkeletonProvider::StaticClass();
}
UBoneReferenceSkeletonProvider::UBoneReferenceSkeletonProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneReferenceSkeletonProvider);
UBoneReferenceSkeletonProvider::~UBoneReferenceSkeletonProvider() {}
// End Interface UBoneReferenceSkeletonProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoneReferenceSkeletonProvider, UBoneReferenceSkeletonProvider::StaticClass, TEXT("UBoneReferenceSkeletonProvider"), &Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoneReferenceSkeletonProvider), 2882411204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_2681159978(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
