// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystem_init() {}
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NavigationSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NavigationSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_NavigationSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NavigationSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x65917BA5,
				0x3EA523CD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NavigationSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NavigationSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NavigationSystem(Z_Construct_UPackage__Script_NavigationSystem, TEXT("/Script/NavigationSystem"), Z_Registration_Info_UPackage__Script_NavigationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x65917BA5, 0x3EA523CD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
