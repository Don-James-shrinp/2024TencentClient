// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FirstPersonGamePlayerController.generated.h"

class UInputMappingContext;
class UShootingUserWidget;
/**
 *
 */
UCLASS()
class FIRSTPERSONGAME_API AFirstPersonGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;
public:
	UPROPERTY(BlueprintReadWrite, Category = "UI")
	UShootingUserWidget* ShootingUserWidget;  //  射击界面的引用

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;

	// End Actor interface
};
