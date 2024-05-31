// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTitle.generated.h"

UCLASS()
class DIGITALDEPARTMENT_API AMyTitle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTitle();

	// Блокирует ли путь
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Move")
	bool bIsBlock;

	// Стоимость перемещения на данный тайтл (клетку)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Move")
	uint8 iCost;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
