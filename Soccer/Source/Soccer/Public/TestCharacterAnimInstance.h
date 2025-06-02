// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TestCharacterAnimInstance.generated.h"

/**
 * 
 */

class UCharacterMovementComponent;
class ACharacterMovementController;
UCLASS()
class SOCCER_API UTestCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(BlueprintReadOnly)
	ACharacterMovementController* characterMovementController;

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	UCharacterMovementComponent* characterMovementComponent;
	
	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	float currentSpeed = 0.f;


	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	bool shouldRun = false;
};
