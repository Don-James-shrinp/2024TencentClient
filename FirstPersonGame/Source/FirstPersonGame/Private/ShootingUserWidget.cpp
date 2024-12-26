// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingUserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
void UShootingUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (!HitFeedbackAnimation)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Bind Animiation HitFeedbackAnimation"));
	}
	AmmoCount = MaxAmmo;
	HealthProgress = 1.0f;
	Health_Bar->SetPercent(1.0f);  //  ³õÊ¼×´Ì¬ÎªÂú×´Ì¬
	Ammo_Count_Text->SetText(FText::FromString(FString::FromInt(AmmoCount)));
}

void UShootingUserWidget::PlayHitFeedback()
{
	PlayAnimation(HitFeedbackAnimation);
}

void UShootingUserWidget::ReceiveDamage(float percent)
{
	HealthProgress -= percent;
	HealthProgress = FMath::Clamp(HealthProgress, 0.0f, 1.0f);
	Health_Bar->SetPercent(HealthProgress);
}

void UShootingUserWidget::ShootAmmo()
{
	if (AmmoCount > 0)
	{
		AmmoCount--;
		Ammo_Count_Text->SetText(FText::FromString(FString::FromInt(AmmoCount)));
	}
}

bool UShootingUserWidget::isAmmoEmpty()
{
	return AmmoCount == 0;
}
