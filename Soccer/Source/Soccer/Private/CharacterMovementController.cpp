// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovementController.h"

#include "MyNPC.h"
#include "SoccerGameMode.h"
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
	AutoPossessPlayer = EAutoReceiveInput::Player0;
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
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}

	if(canControl)
		CheckProximityToNPC();
	
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

}

void ACharacterMovementController::CheckProximityToBall()
{
}

void ACharacterMovementController::CheckProximityToNPC()
{
	TArray<FOverlapResult> overlaps;
	FCollisionShape collisionShape = FCollisionShape::MakeSphere(proximityDistance);

	bool bHit = GetWorld()->OverlapMultiByObjectType(
		overlaps,
		GetActorLocation(),
		FQuat::Identity,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn),
		collisionShape
	);


	for (auto& Hit : overlaps)
	{
		AMyNPC* currentNPC = Cast<AMyNPC>(Hit.GetActor());
		if(currentNPC)
		{
			UE_LOG(LogTemp, Warning, TEXT("NPC is within proximity distance: %f"), proximityDistance);
			soccerGameMode->SwitchPlayerControlsToNPC(this, Cast<APawn>(currentNPC));
			canControl = false;
			break;
		}
	}

	
	// FVector playerCurrentLocation = GetActorLocation();
	// TArray<AActor*> foundNPC;
	// UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyNPC::StaticClass(), foundNPC);
	// for(AActor* actor : foundNPC)
	// {
	// 	if(actor && actor->ActorHasTag("NPC"))
	// 	{
	// 		FVector npcLocation = actor->GetActorLocation();
	// 		float distance = FVector::Dist(playerCurrentLocation, npcLocation);
	// 		if(distance <= proximityDistance)
	// 		{
	// 			UE_LOG(LogTemp, Warning, TEXT("NPC is within proximity distance: %f"), distance);
	// 			if(soccerGameMode)
	// 			{
	// 				soccerGameMode->SwitchPlayerControlsToNPC(this, Cast<APawn>(actor));
	// 				canControl = false;
	// 				break;
	// 			}
	// 		}
	// 	}
	// }

	
}

