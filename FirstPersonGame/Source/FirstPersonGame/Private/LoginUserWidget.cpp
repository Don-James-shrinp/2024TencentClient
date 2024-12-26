// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginUserWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/EditableText.h"
#include "Components/TextBlock.h"

void ULoginUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (Button_Login)
	{
		UE_LOG(LogTemp, Log, TEXT("Button_Login successfully bound."));
		Button_Login->OnClicked.AddDynamic(this, &ULoginUserWidget::OnLoginButtonClicked);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Button_Login is not set in the widget!"));
	}
}

void ULoginUserWidget::OnLoginButtonClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Login Clcked"));
	if (ValidateUserInput())
	{
		UGameplayStatics::OpenLevel(GetWorld(), TEXT("LoadingMap"));
	}
}

bool ULoginUserWidget::ValidateUserInput()
{
	if (!Password_Input || !UserName_Input|| !ErrorMessage)
	{
		UE_LOG(LogTemp, Error, TEXT("Input boxes or validation message text block not set!"));
		return false;
	}

	FString Username = UserName_Input->GetText().ToString();
	FString Password = Password_Input->GetText().ToString();
	if (Username.IsEmpty() || Password.IsEmpty())
	{
		ErrorMessage->SetText(FText::FromString("Username and password cannot be empty!"));
		return false;
	}
	ErrorMessage->SetText(FText::GetEmpty());
	return true;
}

