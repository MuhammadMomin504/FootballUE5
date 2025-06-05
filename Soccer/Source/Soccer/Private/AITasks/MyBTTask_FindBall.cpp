// Fill out your copyright notice in the Description page of Project Settings.


#include "AITasks/MyBTTask_FindBall.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"

UMyBTTask_FindBall::UMyBTTask_FindBall()
{
	NodeName = "FindBall";
}

EBTNodeResult::Type UMyBTTask_FindBall::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	APawn* AIPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (!AIPawn) return EBTNodeResult::Failed;

	for (TActorIterator<AActor> It(AIPawn->GetWorld()); It; ++It)
	{
		AActor* Ball = *It;
		if (Ball && Ball->ActorHasTag("Ball"))  // Make sure your ball has a tag "Ball"
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsObject("TargetActor", Ball);
				UE_LOG(LogTemp, Warning, TEXT("Ball Found!"));
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
	}

	return EBTNodeResult::Failed;
}
