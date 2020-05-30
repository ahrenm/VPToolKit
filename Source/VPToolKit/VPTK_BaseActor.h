// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VPTK_BaseActor.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(VP_LOG, Log, All);

UCLASS(Abstract, ClassGroup = ("Virtual Production"), Blueprintable, BlueprintType)
class VPTOOLKIT_API AVPTK_BaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVPTK_BaseActor();

	UFUNCTION(BlueprintCallable, Category = "Virtual Production")
	void WriteVPLog(FString logMessage);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
