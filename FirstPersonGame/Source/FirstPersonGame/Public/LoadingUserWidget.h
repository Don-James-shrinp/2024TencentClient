// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadingUserWidget.generated.h"
class UTextBlock;
class UProgressBar;
/**
 * 
 */

UCLASS()
class FIRSTPERSONGAME_API ULoadingUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	// Update the loading text (no parameters needed)
	void UpdateLoadingText();

	void UpdateProgressBar();

	UPROPERTY(EditAnywhere)
	float ProgressPerTick;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LoadingText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* LoadingProgress;

private:
	int8 DotCounts;
	float Progress;
	FTimerHandle UpdateTextTimer;
	FTimerHandle UpdateProgressBarTimer;
};
