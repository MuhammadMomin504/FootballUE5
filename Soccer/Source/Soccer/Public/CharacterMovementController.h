// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "MyNPC.h"
#include "GameFramework/Character.h"
#include "CharacterMovementController.generated.h"

class UCharacterMovementComponent;


UCLASS()
class SOCCER_API ACharacterMovementController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterMovementController();

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	float currentSpeed = 0.f;

	bool shouldRun = false;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void MoveForward(float Value);
	virtual void Turn(float Value);
	virtual void LookUp(float Value);
	virtual void MoveRight(float Value);
	virtual void Run(float Value);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
