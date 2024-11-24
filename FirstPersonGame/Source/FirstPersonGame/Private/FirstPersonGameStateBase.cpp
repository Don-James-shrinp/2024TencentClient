// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstPersonGameStateBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "FirstPersonGame/FirstPersonGameGameMode.h" // Change this include to resolve the incomplete type error

AFirstPersonGameStateBase::AFirstPersonGameStateBase()
{
	TotalScore = 0;
	AFirstPersonGameGameMode* GameMode = Cast<AFirstPersonGameGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		RemainingTime = GameMode->GetGameDuration();
	}
}


int32 AFirstPersonGameStateBase::GetScore()
{
	return TotalScore;
}

void AFirstPersonGameStateBase::AddScore(int32 Value)
{
	TotalScore += Value;
}


void AFirstPersonGameStateBase::SetRemainingTime(float Time)
{
	RemainingTime = Time;
}

float AFirstPersonGameStateBase::GetRemainingTime()
{
	return RemainingTime;
}

void AFirstPersonGameStateBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (RemainingTime > 0)
	{
		RemainingTime -= DeltaTime;
	}
}


void AFirstPersonGameStateBase::InitializeItems()
{
}
