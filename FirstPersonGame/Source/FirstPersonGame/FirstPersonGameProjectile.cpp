// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonGameProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "FirstGameStateBase.h"
#include "TargetCube.h"
#include "FirstPersonGameGameMode.h"
#include <Kismet/GameplayStatics.h>
#include "GameFramework/PlayerController.h"
#include "ShootingUserWidget.h"


AFirstPersonGameProjectile::AFirstPersonGameProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AFirstPersonGameProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

}

void AFirstPersonGameProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		ATargetCube* targetCube = Cast<ATargetCube>(OtherActor);
		if (targetCube)
		{
			MyPlayerController->ShootingUserWidget->PlayHitFeedback();
			auto currentGameState = GetWorld()->GetGameState<AFirstGameStateBase>();
			auto myGameMode = Cast<AFirstPersonGameGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
			if (myGameMode && currentGameState)
			{
				int32 currentScore = currentGameState->GetTotalScore();
				if (targetCube->GetIsImportantTarget())
				{
					GEngine->AddOnScreenDebugMessage(
						-1,
						10.0f,
						FColor::Yellow,
						TEXT("Get Bonus!!!")
					);
					currentGameState->SetTotalScore(currentScore + myGameMode->GetPointsPerHit() * myGameMode->GetBonusMagnification());
				}
				else
				{
					currentGameState->SetTotalScore(currentScore + myGameMode->GetPointsPerHit());
				}
				targetCube->OnHit(myGameMode->GetScaleFactor());
			}
		}
		Destroy();
	}
}

void AFirstPersonGameProjectile::BeginPlay()
{
	Super::BeginPlay();
	MyPlayerController = Cast<AFirstPersonGamePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!MyPlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("Get Player Controler Failed!"));
	}
}
