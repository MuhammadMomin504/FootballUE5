// Fill out your copyright notice in the Description page of Project Settings.


#include "AITasks/MyBTTask_FindBall.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Actor.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/Pawn.h"
#include "EngineUtils.h"
#include "VectorTypes.h"

UMyBTTask_FindBall::UMyBTTask_FindBall()
{
	NodeName = "FindBall";
}

EBTNodeResult::Type UMyBTTask_FindBall::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* aIController = OwnerComp.GetAIOwner();
	if (!aIController) return EBTNodeResult::Failed;
	
	
	APawn* AIPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (!AIPawn) return EBTNodeResult::Failed;

	UPawnSensingComponent* sensingComponent = AIPawn->FindComponentByClass<UPawnSensingComponent>();
	if (!sensingComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("PawnSensingComponent not found."));
		return EBTNodeResult::Failed;
	}

	float FOVDegrees = sensingComponent->GetPeripheralVisionAngle();
	float FOVDotThreshold = FMath::Cos(FMath::DegreesToRadians(FOVDegrees * 0.5f)); // e.g., 90° = dot > 0
	
	for (TActorIterator<AActor> It(AIPawn->GetWorld()); It; ++It)
	{
		AActor* Ball = *It;
		
		if(Ball && Ball-> ActorHasTag("Ball"))
		{
			FVector directionToBall = (Ball->GetActorLocation() - AIPawn->GetActorLocation()).GetSafeNormal();
			FVector forwardVector = AIPawn->GetActorForwardVector();

			float dotProduct = FVector::DotProduct(forwardVector, directionToBall);

			if(dotProduct > FOVDotThreshold)
			{
				FVector ballDistance = Ball->GetActorLocation() - AIPawn->GetActorLocation();
				float distanceSquared = ballDistance.SizeSquared();
				
				if(distanceSquared < FMath::Square(sensingComponent->SightRadius))
				{
					FHitResult HitResult;
					FCollisionQueryParams Params;
					Params.AddIgnoredActor(AIPawn);

					bool bHit = AIPawn->GetWorld()->LineTraceSingleByChannel(
						HitResult,
						AIPawn->GetActorLocation(),
						Ball->GetActorLocation(),
						ECC_Visibility,
						Params
					);
					if (bHit)
					{
						DrawDebugLine(AIPawn->GetWorld(), AIPawn->GetActorLocation(), Ball->GetActorLocation(), FColor::Green, false, 1.0f);
						OwnerComp.GetBlackboardComponent()->SetValueAsObject("TargetActor", Ball);
						UE_LOG(LogTemp, Warning, TEXT("AI sees the ball!"));
						return EBTNodeResult::Succeeded;
					}
				}
			}
			else
			{
				//UE_LOG(LogTemp, Warning, TEXT("Ball is behind the AI. Ignored."));
			}
		}

		
		// if (Ball && Ball->ActorHasTag("Ball"))  // Make sure your ball has a tag "Ball"
		// 	{
		// 		OwnerComp.GetBlackboardComponent()->SetValueAsObject("TargetActor", Ball);
		// 		UE_LOG(LogTemp, Warning, TEXT("Ball Found!"));
		// 		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		// 		return EBTNodeResult::Succeeded;
		// 	}
	}
	//UE_LOG(LogTemp, Warning, TEXT("AI did not see the ball."));
	return EBTNodeResult::Failed;
}
