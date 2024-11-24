// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonGame_init() {}
	FIRSTPERSONGAME_API UFunction* Z_Construct_UDelegateFunction_FirstPersonGame_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstPersonGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstPersonGame()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstPersonGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstPersonGame_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstPersonGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE4649566,
				0x865FD3B0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstPersonGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstPersonGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstPersonGame(Z_Construct_UPackage__Script_FirstPersonGame, TEXT("/Script/FirstPersonGame"), Z_Registration_Info_UPackage__Script_FirstPersonGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE4649566, 0x865FD3B0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
