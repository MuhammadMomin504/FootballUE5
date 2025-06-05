// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_FindBall.generated.h"

/**
 * 
 */
UCLASS()

class SOCCER_API UMyBTTask_FindBall : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UMyBTTask_FindBall();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
