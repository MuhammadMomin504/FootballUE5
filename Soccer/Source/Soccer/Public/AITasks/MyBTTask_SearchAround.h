// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_SearchAround.generated.h"

/**
 * 
 */
UCLASS()
class SOCCER_API UMyBTTask_SearchAround : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UMyBTTask_SearchAround();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
