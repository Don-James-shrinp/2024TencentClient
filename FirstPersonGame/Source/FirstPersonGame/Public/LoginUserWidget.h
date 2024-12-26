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
	UTextBlock* ErrorMessage;  //  ��ʾ��Ϣ

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText* Password_Input;  //  ���������ı���

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText* UserName_Input;  //  �û����ı������
};
