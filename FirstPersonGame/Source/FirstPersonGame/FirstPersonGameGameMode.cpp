// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonGameGameMode.h"
#include "FirstPersonGameCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AFirstPersonGameGameMode::AFirstPersonGameGameMode()
	: Super()
{
	UE_LOG(LogTemp, Log, TEXT("Initialize Game Mode Class"));
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	ImportantTargetCount = 5;
	GameDuration = 10.0f;
	PointPerHit = 10;
	BonusMagnification = 2;
	RemainingTime = GameDuration;
	isEnd = false;
}

float AFirstPersonGameGameMode::GetGameDuration()
{
	return GameDuration;
}

void AFirstPersonGameGameMode::BeginPlay()
{
	Super::BeginPlay();
	//GetWorldTimerManager().SetTimerForNextTick(this, &AFirstPersonGameGameMode::EndGame);  // 为下一帧注册该函数
	
}

void AFirstPersonGameGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RemainingTime -= DeltaTime;
	if (RemainingTime <= 0 && !isEnd)
	{
		isEnd = true;
		EndGame();
	}
	//UE_LOG(LogTemp, Warning, TEXT("Remaining Time: %f"), RemainingTime);
}

void AFirstPersonGameGameMode::EndGame()
{
	UE_LOG(LogTemp, Warning, TEXT("EndGame"));
	//GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
	// Get the player controller
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("PAUSE"));
		isEnd = true;
		SetPause(PlayerController);
	}
}
