// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingHUD.h"
#include "ShootingUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "FirstPersonGame/FirstPersonGamePlayerController.h"
void AShootingHUD::BeginPlay()  //  通过c++实现HUD的创建UserWidget逻辑，并将对UserWidget的引用传递给角色控制器
{
	Super::BeginPlay();
	if (ShootingUserWidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Widget Setting Validate!!!"));
		UUserWidget* Widget = CreateWidget<UUserWidget>(GetOwningPlayerController(), ShootingUserWidgetClass);
		if (Widget)
		{
			Widget->AddToViewport();
			AFirstPersonGamePlayerController* MyController = Cast<AFirstPersonGamePlayerController>(GetOwningPlayerController());
			if (MyController)
			{
				MyController->ShootingUserWidget = Cast<UShootingUserWidget>(Widget);
			}
		}
	}
}
