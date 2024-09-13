// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceUCL1.h"
#include "Algo/Accumulate.h"	// Algo 폴더 안에는 여러 algorithm 해더가 포함되어 있음. 
								// Accumulate은 합을 구현.

void UMyGameInstanceUCL1::Init()
{
	Super::Init();


	// ================================ TArray 선언 ========================================================
	const int32 ArrayNum = 10;
	TArray<int32> Int32Array;

	for (int32 ix = 1; ix <= ArrayNum; ix++)
	{
		Int32Array.Add(ix);	// Add()는 인스턴스를 복사하여 배열에 추가하고,Emplace()는 인스턴스를 배열의 해당 위치에 직접 생성하는 방식
							// 때문에 Emplace()가 메모리적으로 유리.
							// Add()는 코드의 가시성을 높여줌.
	}

	// 배열에서 짝수만 제거하기.
	Int32Array.RemoveAll(
		[](int32 Val)
		{
			return Val % 2 == 0;
		}
	);

	// 다시 짝수 추가 -> {1 3 5 7 9 2 4 6 8 10} 순으로 
	Int32Array += {2, 4, 6, 8, 10};


	// ================================== C 스타일처럼 로우하게 구현 =========================================
	TArray<int32> Int32ArrayCompare;
	int32 CArray[] = { 1,3,5,7,9,2,4,6,8,10 };
	Int32ArrayCompare.AddUninitialized(ArrayNum);	// 초기화되지 않은 데이터로 10개 추가. -> 메모리 공간 확보
	FMemory::Memcpy(Int32ArrayCompare.GetData(), CArray, sizeof(int32) * ArrayNum);	// memcpy를 통한 요소 복사.

	ensure(Int32Array == Int32ArrayCompare);



	// ================================== 배열 요소 합 구하기 ================================================
	// 기존 방식
	int32 Sum = 0;
	for (const int32& Int32Elem : Int32Array)
	{
		Sum += Int32Elem;
	}
	ensure(Sum == 55);

	// Accumulate.h 해더 활용
	int SumByAlgo = Algo::Accumulate(Int32Array, 0);
	ensure(SumByAlgo == Sum);

	// ==================================== TSet 선언 ======================================================
	TSet<int32> Int32Set;
	for (int32 ix = 1; ix <= ArrayNum; ix++)
	{
		Int32Set.Add(ix);
	}

	// 짝수 지우기
	// TSet은 RemoveAll()이 없음.
	// TSet은 요소를 삭제하면, 그 위치의 데이터는 삭제x, invalid로 남아있음.
	Int32Set.Remove(2);
	Int32Set.Remove(4);
	Int32Set.Remove(6);
	Int32Set.Remove(8);
	Int32Set.Remove(10);
	 
	// 짝수 다시 채우기
	// TSet은 요소를 채울 때, 가장 최근에 삭제되어 빈 공간이 된 곳부터 채움.
	// 때문에, 짝수를 다시 채우면, {1,10,3,8,5,6,7,4,9,2} 순으로 저장됨.
	Int32Set.Add(2);
	Int32Set.Add(4);
	Int32Set.Add(6);
	Int32Set.Add(8);
	Int32Set.Add(10);

}
