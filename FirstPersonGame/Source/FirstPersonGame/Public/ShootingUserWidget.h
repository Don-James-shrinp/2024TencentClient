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
public:
	UFUNCTION()
	void PlayHitFeedback();

	UFUNCTION()
	void ReceiveDamage(float percent);  //  �ܵ��˺�������ֵ���ٵİٷֱ�

	UFUNCTION()
	void ShootAmmo();  //  ���һ���ӵ�
	
	UFUNCTION()
	bool isAmmoEmpty();  //  �ӵ��Ƿ�Ϊ��

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* Ammo_Count_Text;  //  ��ҩ����

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* Health_Bar;  //  ������
	
	UPROPERTY(meta=(BindWidgetAnim), Transient)  //  ��UMG����
	UWidgetAnimation* HitFeedbackAnimation;  //  ���к��׼�Ƕ���

	UPROPERTY(EditAnywhere, Category="PlayerInfo")
	int32 MaxAmmo;  //  ����ӵ�����
private:
	float HealthProgress;  //  ʣ��Ѫ��
	int32 AmmoCount;  //  �ӵ�����
};
