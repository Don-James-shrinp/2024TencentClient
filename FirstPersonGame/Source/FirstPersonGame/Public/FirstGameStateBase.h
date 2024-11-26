// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FirstGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONGAME_API AFirstGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	int32 GetTotalScore();
	void SetTotalScore(int32 NewValue);
	float GetTimePassed();
	void SetTimePassed(float NewValue);
private:
	int32 m_TotalScore;  //  ��һ�õ��ܷ�
	float m_TimePassed;  //  ���ŵ�ʱ��
	
	
	
};
