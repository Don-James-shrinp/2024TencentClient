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
	int32 ImportantTargetCount;  //  ��Ҫ��Ʒ������N

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	float GameDuration;  //  һ����Ϸ������ʱ��T

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 PointPerHit;  //  ÿ�λ��л�õķ���X

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 BonusMagnification;  //  ��Ҫ����ı���

	float RemainingTime; //  ��Ϸʣ���ʱ��
	bool isEnd;  //  �Ƿ������Ϸ
	TArray<AActor*> TargetCubes;

	void EndGame();

};



