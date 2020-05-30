// Fill out your copyright notice in the Description page of Project Settings.


#include "VPTK_BaseActor.h"

DEFINE_LOG_CATEGORY(VP_LOG);

// Sets default values
AVPTK_BaseActor::AVPTK_BaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVPTK_BaseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVPTK_BaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVPTK_BaseActor::WriteVPLog(FString logMessage)
{
	UE_LOG(VP_LOG, Log, TEXT("%s"), *logMessage);
}

