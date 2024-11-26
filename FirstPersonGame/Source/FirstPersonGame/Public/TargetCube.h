// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetCube.generated.h"

UCLASS()
class FIRSTPERSONGAME_API ATargetCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetCube();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void OnHit(float ScaleFactor);

	bool GetIsImportantTarget();

	void SetIsImportantTarget(bool NewValue);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool bIsHitOnce;  //  是否已经被击中一次
	bool bIsImportantTarget;  //  是否是重要物体
};
