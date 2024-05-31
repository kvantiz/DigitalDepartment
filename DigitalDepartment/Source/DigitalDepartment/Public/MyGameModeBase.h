// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

//Подключаем include только в cpp
class UMyMapController;

UCLASS()
class DIGITALDEPARTMENT_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
	TSubclassOf<UMyMapController> ptrMapController;

private:
	UPROPERTY()
	UMyMapController* FMapController;
};
