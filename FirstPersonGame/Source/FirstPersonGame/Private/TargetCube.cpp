// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetCube.h"


// Sets default values
ATargetCube::ATargetCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bIsImportantTarget = false;
	bIsHitOnce = false;
}

// Called when the game starts or when spawned
void ATargetCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATargetCube::OnHit(float ScaleFactor)
{
	if (bIsHitOnce)
	{
		Destroy();
	}
	else
	{
		bIsHitOnce = true;
		SetActorScale3D(FVector(ScaleFactor));
		GetRootComponent()->UpdateComponentToWorld();
	}
}

bool ATargetCube::GetIsImportantTarget()
{
	return bIsImportantTarget;
}

void ATargetCube::SetIsImportantTarget(bool NewValue)
{
	bIsImportantTarget = NewValue;
}

