// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShootingUserWidget.generated.h"

class UTextBlock;
class UProgressBar;
/**
 * 
 */
UCLASS()
class FIRSTPERSONGAME_API UShootingUserWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void PlayHitFeedback();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* Ammo_Count;  //  ��ҩ����

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* Health_Bar;  //  ������
	
	UPROPERTY(meta=(BindWidgetAnim), Transient)  //  ��UMG����
	UWidgetAnimation* HitFeedbackAnimation;  //  ���к��׼�Ƕ���
	
};
