// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FirstPersonGameStateBase.generated.h"

/**
 * 用于存储全局的游戏状态
 *
 */
UCLASS()
class FIRSTPERSONGAME_API AFirstPersonGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	AFirstPersonGameStateBase();

	int32 GetScore();

	void AddScore(int32 Value);

	void SetRemainingTime(float Time);

	float GetRemainingTime();

	virtual void Tick(float DeltaTime) override;
protected:
	int32 TotalScore;
	float RemainingTime;
private:
	void InitializeItems();
	bool isEnd;
};

