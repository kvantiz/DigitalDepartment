#include "MyMapController.h"
//���������� include ������ � cpp
#include "MyTitle.h"

// Sets default values for this component's properties
UMyMapController::UMyMapController() : iHeight(0), iWidth(0)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	//������ �������� � true �� false, ��� ��� ��� �� ����� ������� ������ ���
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UMyMapController::Init()
{
	// ��������� ����� ���������� �������

	//��� �������� ����, ��� � ��� ������������� ��������� ����������
	UE_LOG(LogTemp, Warning, L"Hello");

	if (arrType.Num() == 0)
	{
		//���� ��� ��������� ������, �� � �������� ������
		UE_LOG(LogTemp, Warning, L"We dont have a tile (cell) option");
		return;
	}

	//��������� ������������ ��������� �� ������� ����� (������)
	FVector VMaxOffset;
	for (auto ptrType : arrType)
	{
		//�������� � ��������� ������� Actore
		FVector VOffset = GetSizeMesh(ptrType);
		VMaxOffset.X = FMath::Max(VMaxOffset.X, VOffset.X);
		VMaxOffset.Y = FMath::Max(VMaxOffset.Y, VOffset.Y);
	}

	//������� ���������� ������ (������) ����� �� ������
	//������ ������ ����� �������� �� ��� Y!
	arrMap.SetNum(iHeight);

	//������, ������������, �� ����� ������� �� ���������
	//����� �������, ��� ����� ������� ����, ��� ���������� 0, 0, 0
	FVector VPosition;
	for (auto& Row : arrMap)
	{
		//������� ��� ������ ������ ������ ��� ������
		//��� ��� ������ ������ ����������, ��������� ������������� �����
		Row.arrMapRow.SetNum(iWidth);


		for (auto& ACeil : Row.arrMapRow)
		{
			//������ ��� ������ ������ ������� Actor
			//��������
			// 
			 //�� ����� �� ������ ������� ������������, ������� -1
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
	// ��������� ������ �����
	AActor* NewActor = GetWorld()->SpawnActor<AActor>(ItemToSpawn, FVector(0), FRotator(0));
	FVector _MeshCenter, _TitleSize;

	//�������� ������� ����� ��������
	NewActor->GetActorBounds(false, _MeshCenter, _TitleSize, true);
	NewActor->Destroy();

	UE_LOG(LogTemp, Warning, L"Q Mesh Extend = %s", *_TitleSize.ToString());

	return _TitleSize * 2;
}
