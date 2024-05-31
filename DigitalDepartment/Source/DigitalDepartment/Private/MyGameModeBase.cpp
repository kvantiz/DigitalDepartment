// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
//���������� include ������ � cpp
#include "MyMapController.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();


	FMapController = NewObject<UMyMapController>(this, ptrMapController);

	//����� ������� Init, ����� ������� ������ �� ������ ������ 
	//������ �������
	//https://forums.unrealengine.com/t/initialised-uobject-always-returns-null/356806/8
	FMapController->Init();
}
