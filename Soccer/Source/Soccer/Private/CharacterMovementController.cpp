// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovementController.h"


#include "SoccerGameMode.h"
#include "BallChaseAIController.h"
#include "Football.h"
#include "Chaos/AABBTree.h"
#include "Engine/OverlapResult.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACharacterMovementController::ACharacterMovementController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 360.f, 0.f);
	// characterMovementComponent = GetCharacterMovement();
	// if(characterMovementComponent)
	// {
	// 	characterMovementComponent->bOrientRotationToMovement = true;
	// 	characterMovementComponent->RotationRate = FRotator(0.f, 360.f, 0.f);
	// }
	

}

// Called when the game starts or when spawned
void ACharacterMovementController::BeginPlay()
{
	soccerGameMode = Cast<ASoccerGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	myAIController = Cast<ABallChaseAIController>(GetController());
	//UE_LOG(LogTemp, Warning, TEXT("Begin play"));
	if(myAIController)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller possessed: %s"), *myAIController->GetName());
	}

	if(!ballReference)
	{
		ballReference = soccerGameMode->footballReference;
		UE_LOG(LogTemp, Warning, TEXT("Ball Reference is set: %s"), *ballReference->GetName());
	}
	

	Super::BeginPlay();
	//GetCharacterMovement()->
	
}

void ACharacterMovementController::MoveForward(float Value)
{
	//UE_LOG(LogTemp, Warning, TEXT("MoveForward: %f"), Value);
	if((Controller != nullptr) && Value != 0.f)
	{
		//find out which way is forward
		const FRotator controlRotation = GetControlRotation();
		const FRotator yawRotation(0, controlRotation.Yaw, 0);
		const FVector direction = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(direction, Value);
	}
}

void ACharacterMovementController::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void ACharacterMovementController::LookUp(float Value)
{
}

void ACharacterMovementController::MoveRight(float Value)
{
	if((Controller != nullptr) && Value != 0.f)
	{
		//find out which way is right
		//UE_LOG(LogTemp, Warning, TEXT("Move right: %f"), Value);
		const FRotator controlRotation = GetControlRotation();
		const FRotator yawRotation(0, controlRotation.Yaw, 0);
		const FVector direction = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(direction, Value);

	}
}

void ACharacterMovementController::Run(float Value)
{
	if(Controller != nullptr && Value != 0.f)
	{
		shouldRun = true;
	}
	else
	{
		shouldRun = false;
	}
}



// Called every frame
void ACharacterMovementController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("MoveForward: %f"), characterMovementComponent-> GetMaxSpeed());
	currentSpeed = UKismetMathLibrary::VSizeXY(GetCharacterMovement()->Velocity / 100.0f); //divide by 100 to get speed in m/s
	if(currentSpeed >= 3.0f && shouldRun)
	{
		GetCharacterMovement()->MaxWalkSpeed = 1400.0f;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = FMath::RandRange(500.0f, 1000.0f);
	}
	
	//currentSpeed = GetCharacterMovement()->Velocity.Size() / 100.0f; //divide by 100 to get speed in m/s
}

// Called to bind functionality to input
void ACharacterMovementController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterMovementController::MoveForward);
	PlayerInputComponent->BindAxis("Turn", this, &ACharacterMovementController::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacterMovementController::LookUp);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterMovementController::MoveRight);
	PlayerInputComponent->BindAxis("Run", this, &ACharacterMovementController::Run);
	PlayerInputComponent->BindAction("PossessNPC", IE_Pressed, this, &ACharacterMovementController::TryPossessNPC);
	PlayerInputComponent->BindAction("ResetFootballLocation", IE_Pressed, this, &ACharacterMovementController::ResetFootballPosition);

}

void ACharacterMovementController::TryPossessNPC()
{
	UE_LOG(LogTemp, Warning, TEXT("E key is pressed"));
}

void ACharacterMovementController::ResetFootballPosition()
{
	if(ballReference)
		ballReference->ResetLocation();
}

void ACharacterMovementController::PawnExit()
{
	if (myAIController)
	{
		myAIController->OnPossess(this);
		UE_LOG(LogTemp, Warning, TEXT("Pawn Exit"));
	}
	isControlledByPlayer = false;
}

void ACharacterMovementController::PawnEnter()
{
	UE_LOG(LogTemp, Warning, TEXT("Pawn Enter"));
	isControlledByPlayer = true;
}

void ACharacterMovementController::SetRotation()
{
	if(ballReference)
	{
		FVector ballLocation = ballReference->GetActorLocation();
		FVector NPCLocation = GetActorLocation();
		FRotator LookAtRotation = (ballLocation - NPCLocation).Rotation();
		LookAtRotation.Pitch = 0.0f; // ignore vertical tilt
		LookAtRotation.Roll = 0.0f;
		SetActorRotation(LookAtRotation);
	}
}



