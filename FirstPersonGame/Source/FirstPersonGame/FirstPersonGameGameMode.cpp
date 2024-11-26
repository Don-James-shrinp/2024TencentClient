// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonGameGameMode.h"
#include "FirstPersonGameCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "FirstGameStateBase.h"
AFirstPersonGameGameMode::AFirstPersonGameGameMode()
	: Super()
{
	UE_LOG(LogTemp, Log, TEXT("Initialize Game Mode Class"));
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	GameStateClass = AFirstGameStateBase::StaticClass();
	ImportantTargetCount = 5;
	GameDuration = 10.0f;
	BonusMagnification = 2;
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
	auto currentGameState = GetWorld()->GetGameState<AFirstGameStateBase>();
	if (currentGameState)
	{
		float currentTime = currentGameState->GetTimePassed();
		currentGameState->SetTimePassed(currentTime + DeltaTime);
		if (currentGameState->GetTimePassed() >= GameDuration && !isEnd)
		{
			isEnd = true;
			EndGame();
		}
	}
}

void AFirstPersonGameGameMode::EndGame()
{
	UE_LOG(LogTemp, Warning, TEXT("EndGame"));
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("PAUSE"));
		isEnd = true;
		SetPause(PlayerController);
		auto currentGameState = GetWorld()->GetGameState<AFirstGameStateBase>();
		FString Message = FString::Printf(TEXT("Total Score: %d"), currentGameState->GetTotalScore());
		GEngine->AddOnScreenDebugMessage(
			-1,
			10.0f,
			FColor::Blue,
			Message
		);
	}
}
