#include "MyMapController.h"
//Подключаем include только в cpp
#include "MyTitle.h"

// Sets default values for this component's properties
UMyMapController::UMyMapController() : iHeight(0), iWidth(0)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	//Сменим значение с true на false, так как нам не нужно событие Каждый тик
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UMyMapController::Init()
{
	// Генерация карты указанного размера

	//Для проверки того, что в Лог действительно выводится информация
	UE_LOG(LogTemp, Warning, L"Hello");

	if (arrType.Num() == 0)
	{
		//Если нет вариантов клеток, то и спавнить нечего
		UE_LOG(LogTemp, Warning, L"We dont have a tile (cell) option");
		return;
	}

	//Определим максимальное растояние от каждого тайла (клетки)
	FVector VMaxOffset;
	for (auto ptrType : arrType)
	{
		//Создадим и определим размеры Actore
		FVector VOffset = GetSizeMesh(ptrType);
		VMaxOffset.X = FMath::Max(VMaxOffset.X, VOffset.X);
		VMaxOffset.Y = FMath::Max(VMaxOffset.Y, VOffset.Y);
	}

	//Зададим количество тайлов (клеток) карты по высоте
	//Первый индекс будет отвечать за ось Y!
	arrMap.SetNum(iHeight);

	//Вектор, определяющий, на какой позиции мы находимся
	//Будем считать, что левый верхний угол, это координата 0, 0, 0
	FVector VPosition;
	for (auto& Row : arrMap)
	{
		//Зададим для каждой строки нужную нам ширину
		//Так как ширина всегда одинаковая, получится прямоугольная карта
		Row.arrMapRow.SetNum(iWidth);


		for (auto& ACeil : Row.arrMapRow)
		{
			//Теперь для каждой клетки спавним Actor
			//Рандомно
			// 
			 //От левой до правой границы включительно, поэтому -1
			int32 iType = FMath::RandRange(0, arrType.Num() - 1);

			AActor* FNewActor = GetWorld()->SpawnActor<AActor>(arrType[iType], VPosition, FRotator(0));

			if (Cast<AMyTitle>(FNewActor))
			{
				ACeil = Cast<AMyTitle>(FNewActor);
			}
			else
			{
				UE_LOG(LogTemp, Warning, L"Doesnt spawn %d type", iType);
			}

			VPosition.X += VMaxOffset.X;
		}

		VPosition.Y += VMaxOffset.Y;
		VPosition.X = 0;
	}
}

FVector UMyMapController::GetSizeMesh(TSubclassOf<AActor> ItemToSpawn)
{
	// Вычисляем размер тайла
	AActor* NewActor = GetWorld()->SpawnActor<AActor>(ItemToSpawn, FVector(0), FRotator(0));
	FVector _MeshCenter, _TitleSize;

	//Получаем размеры сетки коллизии
	NewActor->GetActorBounds(false, _MeshCenter, _TitleSize, true);
	NewActor->Destroy();

	UE_LOG(LogTemp, Warning, L"Q Mesh Extend = %s", *_TitleSize.ToString());

	return _TitleSize * 2;
}
