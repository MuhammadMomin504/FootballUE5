// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyNPC.generated.h"

class AAIController;

UCLASS()
class SOCCER_API AMyNPC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyNPC();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	ACharacter* myCharacter;
	
	AAIController* myAIController;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
	
};
