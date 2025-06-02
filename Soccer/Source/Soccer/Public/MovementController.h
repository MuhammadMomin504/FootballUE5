// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
//#include "Components/CapsuleComponent.h"
#include "MovementController.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS()
class SOCCER_API AMovementController : public APawn
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* characterMesh;
	
public:
	// Sets default values for this pawn's properties
	AMovementController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void MoveRight(float Value);
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
