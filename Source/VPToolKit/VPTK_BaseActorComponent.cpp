// Fill out your copyright notice in the Description page of Project Settings.


#include "VPTK_BaseActorComponent.h"

//DEFINE_LOG_CATEGORY(VP_LOG);

// Sets default values for this component's properties
UVPTK_BaseActorComponent::UVPTK_BaseActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVPTK_BaseActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVPTK_BaseActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UVPTK_BaseActorComponent::WriteVPLog(FString logMessage)
{
	UE_LOG(VP_LOG, Log, TEXT("%s"), *logMessage);
}

