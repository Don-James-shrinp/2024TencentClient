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
	int32 ImportantTargetCount;  //  ��Ҫ��Ʒ������N

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	float GameDuration;  //  һ����Ϸ������ʱ��T

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 BonusMagnification;  //  ��Ҫ����ı���

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 PointsPerHit;  //  ÿ�λ��еĵ÷�x

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	float ScaleFactor;  //  �����к�����ű���y

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	TArray<ATargetCube*> cubes;

	bool isEnd;  //  �Ƿ������Ϸ

	void EndGame();

	void InitializeItems();  //  ��ʼ�����ⷽ��

};



