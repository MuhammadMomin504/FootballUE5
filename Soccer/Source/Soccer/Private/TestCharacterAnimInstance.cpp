// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCharacterAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CharacterMovementController.h"


void UTestCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	characterMovementController = Cast<ACharacterMovementController>(TryGetPawnOwner());
	if(characterMovementController)
	{
		characterMovementComponent = characterMovementController->GetCharacterMovement();
	}
	
}

void UTestCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if(characterMovementComponent != nullptr)
	{
		currentSpeed = characterMovementController->currentSpeed;
	}

	if(characterMovementController != nullptr)
	{
		shouldRun = characterMovementController->shouldRun;
	}
	
	// if(characterMovementComponent != nullptr)
	// {
	// 	//currentSpeed = UKismetMathLibrary::VSizeXY(characterMovementComponent->Velocity / 100.0f); //divide by 100 to get speed in m/s
	// 	//UE_LOG(LogTemp, Warning, TEXT("Current Speed: %f"), currentSpeed);
	// 	
	// }
}






