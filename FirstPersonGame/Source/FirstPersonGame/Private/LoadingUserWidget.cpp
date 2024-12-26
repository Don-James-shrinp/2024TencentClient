// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadingUserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
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

	if (LoadingProgress)
	{
		Progress = 0.0f;
		LoadingProgress->SetPercent(0.0f);
		GetWorld()->GetTimerManager().SetTimer(UpdateProgressBarTimer, this, &ULoadingUserWidget::UpdateProgressBar, 0.5f, true, 1.0f);
	}
	ProgressPerTick = 0.05f;
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


void ULoadingUserWidget::UpdateProgressBar()
{
	if (LoadingProgress)
	{
		Progress += ProgressPerTick;
		LoadingProgress->SetPercent(FMath::Clamp(Progress, 0.0f, 1.0f)); // 确保进度在0到1之间
		if (LoadingProgress->GetPercent() == 1.0f)  //  进度条加载完
		{
			GetWorld()->GetTimerManager().ClearTimer(UpdateProgressBarTimer);
			GetWorld()->GetTimerManager().ClearTimer(UpdateTextTimer);
			UGameplayStatics::OpenLevel(GetWorld(), TEXT("FirstPersonMap"));
		}
	}
}
