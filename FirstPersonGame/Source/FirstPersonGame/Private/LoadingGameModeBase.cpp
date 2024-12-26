// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadingGameModeBase.h"
#include "GameFramework/HUD.h"
#include "UObject/ConstructorHelpers.h"
ALoadingGameModeBase::ALoadingGameModeBase()
	: Super()
{
	static ConstructorHelpers::FClassFinder<AHUD> HUDClassFinder(TEXT("/Game/FirstPerson/Blueprints/Loading/LoadingHUD"));
	HUDClass = HUDClassFinder.Class;  //  …Ë÷√HUD¿‡
}



