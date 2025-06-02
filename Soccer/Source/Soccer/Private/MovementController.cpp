// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CapsuleComponent.h"
#include "MovementController.h"
#include "Components/SkeletalMeshComponent.h"


// Sets default values
AMovementController::AMovementController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	SetRootComponent(CapsuleComponent);

	characterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	characterMesh->SetupAttachment(GetRootComponent());
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AMovementController::BeginPlay()
{
	Super::BeginPlay();
}

void AMovementController::MoveForward(float Value)
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

void AMovementController::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void AMovementController::LookUp(float Value)
{
	
}

void AMovementController::MoveRight(float Value)
{
	if((Controller != nullptr) && Value != 0.f)
	{
		//find out which way is right
		const FRotator controlRotation = GetControlRotation();
		const FRotator yawRotation(0, controlRotation.Yaw, 0);
		const FVector direction = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(direction, Value);
	}
}

// Called every frame
void AMovementController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

// Called to bind functionality to input
void AMovementController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMovementController::MoveForward);
	PlayerInputComponent->BindAxis("Turn", this, &AMovementController::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AMovementController::LookUp);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMovementController::MoveRight);
}

