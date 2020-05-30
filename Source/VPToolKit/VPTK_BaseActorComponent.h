// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VPTK_BaseActorComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(VP_LOG, Log, All);


UCLASS(Abstract, ClassGroup=("Virtual Production"), Blueprintable, BlueprintType)
class VPTOOLKIT_API UVPTK_BaseActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVPTK_BaseActorComponent();

	UFUNCTION(BlueprintCallable, Category = "Virtual Production")
	void WriteVPLog(FString logMessage);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
