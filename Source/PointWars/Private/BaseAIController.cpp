// Fill out your copyright notice in the Description page of Project Settings.

#include "PointWars.h"
#include "BaseAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ABaseAIController::ABaseAIController(const FObjectInitializer & ObjectInitializer)
	: Super(ObjectInitializer)
{	 
		 BehaveComp = ObjectInitializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaveComp"));
}

AControlPoint * ABaseAIController::FindAPoint()
{
	return nullptr;
}
