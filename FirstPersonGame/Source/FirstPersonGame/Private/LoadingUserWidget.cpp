// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Kismet/GameplayStatics.h"
#include "LoadingUserWidget.h"
#include "Animation/WidgetAnimation.h"
// In ULoadingUserWidget.cpp

void ULoadingUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (LoadingText)
	{
		LoadingText->SetText(FText::FromString(TEXT("Loading...")));
		DotCounts = 3;
		GetWorld()->GetTimerManager().SetTimer(UpdateTextTimer, this, &ULoadingUserWidget::UpdateLoadingText, 0.5f, true, 1.0f); // Timer triggers without parameters
	}

	if (LoadingAnimation)
	{
		FWidgetAnimationDynamicEvent AnimationEvent;
		AnimationEvent.BindDynamic(this, &ULoadingUserWidget::OnLoadingAnimationFinished);
		this->BindToAnimationFinished(LoadingAnimation, AnimationEvent);  //  绑定动画播放完后要调用的回调函数
		PlayAnimation(LoadingAnimation);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Load Loading Animation"));
	}
}

void ULoadingUserWidget::OnLoadingAnimationFinished()
{
	GetWorld()->GetTimerManager().ClearTimer(UpdateTextTimer);
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("FirstPersonMap"));
}

void ULoadingUserWidget::UpdateLoadingText()  //  函数不能有参数？估计是可以的，类似std::bind，传入函数名和参数名以构造此函数调用
{
	DotCounts = (DotCounts + 1) % 4;
	FString text = TEXT("Loading");
	for (int8 i = 0; i < DotCounts; i++)
	{
		text += TEXT(".");
	}
	if (LoadingText)
	{
		LoadingText->SetText(FText::FromString(text));
	}
}