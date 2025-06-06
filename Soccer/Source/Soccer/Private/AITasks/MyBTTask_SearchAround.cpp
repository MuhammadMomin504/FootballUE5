// Fill out your copyright notice in the Description page of Project Settings.


#include "AITasks/MyBTTask_SearchAround.h"
#include "GameFramework/Pawn.h"
#include "AIController.h"

UMyBTTask_SearchAround::UMyBTTask_SearchAround()
{
	NodeName = "SearchAround";
	bNotifyTick = false;
}

EBTNodeResult::Type UMyBTTask_SearchAround::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//UE_LOG(LogTemp, Warning, TEXT("Search Around...!"));
	APawn* Pawn = OwnerComp.GetAIOwner()->GetPawn();
	if (!Pawn) return EBTNodeResult::Failed;

	FRotator RandomRotation = FRotator(0.f, FMath::RandRange(-180.f, 180.f), 0.f);
	// Pawn->AddActorLocalRotation(RandomRotation);
	// UE_LOG(LogTemp, Warning, TEXT("setting rotation...!"));

	return EBTNodeResult::Succeeded;
}
