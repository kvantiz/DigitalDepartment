// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
//Подключаем include только в cpp
#include "MyMapController.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();


	FMapController = NewObject<UMyMapController>(this, ptrMapController);

	//Лучше вызвать Init, чтобы сборщик мусора не удалил объект 
	//Раньше времени
	//https://forums.unrealengine.com/t/initialised-uobject-always-returns-null/356806/8
	FMapController->Init();
}
