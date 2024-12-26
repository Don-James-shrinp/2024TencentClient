// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoginUserWidget.generated.h"
class UButton;
class UTextBlock;
class UEditableText;
/**
 * 
 */
UCLASS()
class FIRSTPERSONGAME_API ULoginUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
protected:

	UFUNCTION()
	void OnLoginButtonClicked();

	UFUNCTION()
	bool ValidateUserInput();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* Button_Login;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* ErrorMessage;  //  提示信息

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText* Password_Input;  //  密码输入文本框

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText* UserName_Input;  //  用户名文本输入框
};
