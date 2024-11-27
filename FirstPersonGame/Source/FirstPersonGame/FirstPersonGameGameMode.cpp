// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonGameGameMode.h"
#include "FirstPersonGameCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "FirstGameStateBase.h"
#include "TargetCube.h"
#include "Algo/RandomShuffle.h"

AFirstPersonGameGameMode::AFirstPersonGameGameMode()
	: Super()
{
	//UE_LOG(LogTemp, Log, TEXT("Initialize Game Mode Class"));
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	GameStateClass = AFirstGameStateBase::StaticClass();
	ImportantTargetCount = 5;
	GameDuration = 10.0f;
	BonusMagnification = 2;
	PointsPerHit = 2;
	ScaleFactor = 0.2f;
	isEnd = false;
}

int32 AFirstPersonGameGameMode::GetPointsPerHit()
{
	return PointsPerHit;
}

float AFirstPersonGameGameMode::GetScaleFactor()
{
	return ScaleFactor;
}

int32 AFirstPersonGameGameMode::GetBonusMagnification()
{
	return BonusMagnification;
}

void AFirstPersonGameGameMode::BeginPlay()
{
	Super::BeginPlay();
	//GetWorldTimerManager().SetTimerForNextTick(this, &AFirstPersonGameGameMode::EndGame);  // 为下一帧注册该函数
	// 初始化场景中的物体
	InitializeItems();
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

void AFirstPersonGameGameMode::InitializeItems()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetCube::StaticClass(), FoundActors);
	if (FoundActors.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No TargetCube Found in Scene"));
		return;
	}
	Algo::RandomShuffle(FoundActors);
	uint32 NumToSelect = FMath::Min(FoundActors.Num(), ImportantTargetCount);
	for (uint32 index = 0; index < NumToSelect; ++index)
	{
		ATargetCube* targetCube = Cast<ATargetCube>(FoundActors[index]);
		if (targetCube)
		{
			targetCube->SetIsImportantTarget(true);
			UE_LOG(LogTemp, Log, TEXT("Marked TargetCube %s as important."), *targetCube->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to cast actor to ATargetCube."));
		}
	}
}
