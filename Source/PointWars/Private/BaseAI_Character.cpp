// Fill out your copyright notice in the Description page of Project Settings.

#include "PointWars.h"
#include "BaseAI_Character.h"


// Sets default values
ABaseAI_Character::ABaseAI_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AI_Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	RootComponent = AI_Body;
}

// Called when the game starts or when spawned
void ABaseAI_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAI_Character::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ABaseAI_Character::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

