// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterMovementController.h"
#include "GameFramework/Character.h"
#include "MyNPC.generated.h"

class AAIController;
class UPawnSensingComponent;
//class ACharacterMovementController;

UCLASS()
class SOCCER_API AMyNPC : public ACharacterMovementController
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyNPC();
	virtual void Tick(float DeltaTime) override;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	ACharacter* myCharacter;
	
	AAIController* myAIController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UPawnSensingComponent* pawnSensingComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float Value) override;
	void Turn(float Value) override;
	//void LookUp(float Value) override;
	void MoveRight(float Value) override;
	void Run(float Value) override;

private:
	
	
};
