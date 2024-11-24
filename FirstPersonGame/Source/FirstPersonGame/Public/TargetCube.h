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
	void OnHit();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	int32 Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	float ScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	bool bIsImportantTarget;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool bIsHitOnce;  //  是否已经被击中一次
	
};
