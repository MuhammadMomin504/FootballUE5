// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterMovementController.h"
#include "GameFramework/Character.h"
#include "MySoccerCharacter.generated.h"

class AMyNPC;

UCLASS()
class SOCCER_API AMySoccerCharacter : public ACharacterMovementController
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMySoccerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float Value) override;
	void Turn(float Value) override;
	void MoveRight(float Value) override;
	void Run(float Value) override;
	
	void TryPossessNPC();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,Category = "Movement")
	float proximityDistance = 0.f;

	void CheckProximityToBall();
	void CheckProximityToNPC();

	void PawnEnter() override;
	void PawnExit() override;

	// Called to bind functionality to input
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	AMyNPC* currentNPC;

};
