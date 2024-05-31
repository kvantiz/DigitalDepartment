// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyMapController.generated.h"

//���������� include ������ � cpp
class AMyTitle;

USTRUCT()
struct FMapRow
{
	GENERATED_BODY()

	TArray<AMyTitle*> arrMapRow;
};

//����������� ������ Blueprintable, ����� �� ������ ������� � Blueprint
UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class DIGITALDEPARTMENT_API UMyMapController : public UActorComponent
{
	GENERATED_BODY()

public:
	UMyMapController();

	//������� �����
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Map")
	int32 iHeight;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Map")
	int32 iWidth;

	//����� ��������������� ������ (������ ����)
	TArray<FMapRow> arrMap;

	//��������� ���� ������
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
	TArray<TSubclassOf<AMyTitle>> arrType;

public:

	void Init();
	//������� ��� ����������� ������� ����� (������)
	FVector GetSizeMesh(TSubclassOf<AActor> ItemToSpawn);
};


//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
//class DIGITALDEPARTMENT_API UMyMapController : public UActorComponent
//{
//	GENERATED_BODY()
//
//public:	
//	// Sets default values for this component's properties
//	UMyMapController();
//
//protected:
//	// Called when the game starts
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
//
//		
//};
