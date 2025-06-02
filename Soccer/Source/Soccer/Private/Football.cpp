// Fill out your copyright notice in the Description page of Project Settings.


#include "Football.h"
#include "GameFramework/Character.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFootball::AFootball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFootball::BeginPlay()
{
	Super::BeginPlay();
	footballMesh = FindComponentByClass<UStaticMeshComponent>();

	if(footballMesh)
	{
		footballMesh->SetNotifyRigidBodyCollision(true);
		footballMesh->SetSimulatePhysics(true);
		footballMesh->OnComponentHit.AddDynamic(this, &AFootball::OnFootballHit);
	}

}

void AFootball::ApplyIdleForce()
{
	FVector randomDirection = FMath::VRand();
	randomDirection.Z = 0.5f; // Add a slight upward force
	randomDirection.Normalize();
		
	if(footballMesh)
	{
		footballMesh->AddForce(randomDirection * idleForceStrength, NAME_None, true);
		UE_LOG(LogTemp, Warning, TEXT("Football kicked in random direction!"));
	}
}

// Called every frame
void AFootball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	idleTimeElapsed += DeltaTime;
	
	if(idleTimeElapsed >= idleTimeDuration)
	{
		idleTimeElapsed = 0.f;
		ApplyIdleForce();
	}

}

void AFootball::OnFootballHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp,
	FVector normalImpulse, const FHitResult& hit)
{

	if(ACharacter* hittingCharacter = Cast<ACharacter>(otherActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit:"));
		FVector playerForward = hittingCharacter->GetActorForwardVector();
		FVector forceDirection = playerForward + FVector(0, 0, 0.3f);
		forceDirection.Normalize();
		
		footballMesh->AddForce(forceDirection * forceStrength, NAME_None, true);
		idleTimeElapsed = 0.f;
	}
}

