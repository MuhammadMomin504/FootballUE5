// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Football.generated.h"

UCLASS()
class SOCCER_API AFootball : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFootball();


private:
	float idleTimeElapsed = 0.f; // Time elapsed since the last kick

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Ball Behaviour")
	float forceStrength = 1000.f;
	
	UPROPERTY(EditAnywhere, Category = "Ball Behaviour")
	float idleForceStrength = 20000.f;
	
	UPROPERTY(EditAnywhere, Category = "Ball Behaviour")
	float idleTimeDuration = 5.f;

	
	void ApplyIdleForce(); 
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* footballMesh;

	UFUNCTION()
	void OnFootballHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit); // Function to handle collision events
	

};
