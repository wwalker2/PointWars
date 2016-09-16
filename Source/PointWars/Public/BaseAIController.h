// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "ControlPoint.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class POINTWARS_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

	ABaseAIController(const class FObjectInitializer& ObjectInitializer);

	UBehaviorTreeComponent* BehaveComp;
	UBlackboardComponent* BlackBoardComp;

public:
	AControlPoint* FindAPoint();
};
