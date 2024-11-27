// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TargetCube.h"
#include "FirstPersonGameGameMode.generated.h"

UCLASS(minimalapi)
class AFirstPersonGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFirstPersonGameGameMode();
	int32 GetPointsPerHit();

	float GetScaleFactor();

	int32 GetBonusMagnification();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
private:

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 ImportantTargetCount;  //  重要物品的数量N

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	float GameDuration;  //  一局游戏持续的时间T

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 BonusMagnification;  //  重要物体的倍率

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 PointsPerHit;  //  每次击中的得分x

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	float ScaleFactor;  //  被击中后的缩放比例y

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	TArray<ATargetCube*> cubes;

	bool isEnd;  //  是否结束游戏

	void EndGame();

	void InitializeItems();  //  初始化特殊方块

};



