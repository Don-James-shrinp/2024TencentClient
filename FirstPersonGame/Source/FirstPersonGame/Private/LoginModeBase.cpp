// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/HUD.h"
ALoginModeBase::ALoginModeBase()
	: Super()
{
	static ConstructorHelpers::FClassFinder<AHUD> HUDClassFinder(TEXT("/Game/FirstPerson/Blueprints/Login/LoginHUD"));
	HUDClass = HUDClassFinder.Class;

}



