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
	void ReceiveDamage(float percent);  //  受到伤害，生命值减少的百分比

	UFUNCTION()
	void ShootAmmo();  //  射出一颗子弹
	
	UFUNCTION()
	bool isAmmoEmpty();  //  子弹是否为空

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* Ammo_Count_Text;  //  弹药数量

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* Health_Bar;  //  生命条
	
	UPROPERTY(meta=(BindWidgetAnim), Transient)  //  绑定UMG动画
	UWidgetAnimation* HitFeedbackAnimation;  //  击中后的准星动画

	UPROPERTY(EditAnywhere, Category="PlayerInfo")
	int32 MaxAmmo;  //  最大子弹数量
private:
	float HealthProgress;  //  剩余血量
	int32 AmmoCount;  //  子弹数量
};
