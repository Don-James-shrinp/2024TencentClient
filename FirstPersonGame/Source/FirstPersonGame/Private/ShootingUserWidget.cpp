// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingUserWidget.h"

void UShootingUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (!HitFeedbackAnimation)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Bind Animiation HitFeedbackAnimation"));
	}
}

void UShootingUserWidget::PlayHitFeedback()
{
	PlayAnimation(HitFeedbackAnimation);
}
