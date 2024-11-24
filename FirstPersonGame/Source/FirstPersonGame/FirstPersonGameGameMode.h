// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FirstPersonGameGameMode.generated.h"

UCLASS(minimalapi)
class AFirstPersonGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFirstPersonGameGameMode();
	float GetGameDuration();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
private:

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 ImportantTargetCount;  //  重要物品的数量N

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	float GameDuration;  //  一局游戏持续的时间T

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 PointPerHit;  //  每次击中获得的分数X

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 BonusMagnification;  //  重要物体的倍率

	float RemainingTime; //  游戏剩余的时间
	bool isEnd;  //  是否结束游戏
	TArray<AActor*> TargetCubes;

	void EndGame();

};



