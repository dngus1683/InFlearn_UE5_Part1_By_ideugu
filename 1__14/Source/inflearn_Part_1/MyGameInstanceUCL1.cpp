// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceUCL1.h"
#include "Algo/Accumulate.h"	// Algo ���� �ȿ��� ���� algorithm �ش��� ���ԵǾ� ����. 
								// Accumulate�� ���� ����.

void UMyGameInstanceUCL1::Init()
{
	Super::Init();


	// ================================ TArray ���� ========================================================
	const int32 ArrayNum = 10;
	TArray<int32> Int32Array;

	for (int32 ix = 1; ix <= ArrayNum; ix++)
	{
		Int32Array.Add(ix);	// Add()�� �ν��Ͻ��� �����Ͽ� �迭�� �߰��ϰ�,Emplace()�� �ν��Ͻ��� �迭�� �ش� ��ġ�� ���� �����ϴ� ���
							// ������ Emplace()�� �޸������� ����.
							// Add()�� �ڵ��� ���ü��� ������.
	}

	// �迭���� ¦���� �����ϱ�.
	Int32Array.RemoveAll(
		[](int32 Val)
		{
			return Val % 2 == 0;
		}
	);

	// �ٽ� ¦�� �߰� -> {1 3 5 7 9 2 4 6 8 10} ������ 
	Int32Array += {2, 4, 6, 8, 10};


	// ================================== C ��Ÿ��ó�� �ο��ϰ� ���� =========================================
	TArray<int32> Int32ArrayCompare;
	int32 CArray[] = { 1,3,5,7,9,2,4,6,8,10 };
	Int32ArrayCompare.AddUninitialized(ArrayNum);	// �ʱ�ȭ���� ���� �����ͷ� 10�� �߰�. -> �޸� ���� Ȯ��
	FMemory::Memcpy(Int32ArrayCompare.GetData(), CArray, sizeof(int32) * ArrayNum);	// memcpy�� ���� ��� ����.

	ensure(Int32Array == Int32ArrayCompare);



	// ================================== �迭 ��� �� ���ϱ� ================================================
	// ���� ���
	int32 Sum = 0;
	for (const int32& Int32Elem : Int32Array)
	{
		Sum += Int32Elem;
	}
	ensure(Sum == 55);

	// Accumulate.h �ش� Ȱ��
	int SumByAlgo = Algo::Accumulate(Int32Array, 0);
	ensure(SumByAlgo == Sum);

	// ==================================== TSet ���� ======================================================
	TSet<int32> Int32Set;
	for (int32 ix = 1; ix <= ArrayNum; ix++)
	{
		Int32Set.Add(ix);
	}

	// ¦�� �����
	// TSet�� RemoveAll()�� ����.
	// TSet�� ��Ҹ� �����ϸ�, �� ��ġ�� �����ʹ� ����x, invalid�� ��������.
	Int32Set.Remove(2);
	Int32Set.Remove(4);
	Int32Set.Remove(6);
	Int32Set.Remove(8);
	Int32Set.Remove(10);
	 
	// ¦�� �ٽ� ä���
	// TSet�� ��Ҹ� ä�� ��, ���� �ֱٿ� �����Ǿ� �� ������ �� ������ ä��.
	// ������, ¦���� �ٽ� ä���, {1,10,3,8,5,6,7,4,9,2} ������ �����.
	Int32Set.Add(2);
	Int32Set.Add(4);
	Int32Set.Add(6);
	Int32Set.Add(8);
	Int32Set.Add(10);

}
