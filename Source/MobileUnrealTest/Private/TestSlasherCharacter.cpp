// Fill out your copyright notice in the Description page of Project Settings.

#include "TestSlasherCharacter.h"

//logs
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

// Sets default values
ATestSlasherCharacter::ATestSlasherCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestSlasherCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestSlasherCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATestSlasherCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

