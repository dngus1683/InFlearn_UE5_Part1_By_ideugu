// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceUCL2.h"

// 랜덤으로 사람 이름 만들기.
FString MakeRandomName()
{
	TCHAR FirstChar[] = TEXT("김이박최");
	TCHAR MiddleChar[] = TEXT("상혜지성");
	TCHAR LastChar[] = TEXT("수은원연");

	TArray<TCHAR> RandArray;
	RandArray.SetNum(3);
	RandArray[0] = FirstChar[FMath::RandRange(0, 3)];
	RandArray[1] = MiddleChar[FMath::RandRange(0, 3)];
	RandArray[2] = LastChar[FMath::RandRange(0, 3)];

	return RandArray.GetData();	// FString의 반환값은 TArray에 포함되어 있는 문자열 첫번째 인자의 포인터이므로, TArray의 첫 인자 포인터가 자동으로 FString으로 반환됨.
}

void UMyGameInstanceUCL2::Init()
{
	Super::Init();


	// ============================================ UE 구조체 =======================================================
	const int32 StudentNum = 300;
	for (int32 ix = 1; ix <= StudentNum; ix++)
	{
		StudentsData.Emplace(FStudentData(MakeRandomName(), ix));	// 이 경우, 단순 자료형의 데이터를 추가하는 것이 아닌 구조체를 추가하는 것이기 때문에, 메모리 사용을 고려하여 Emplace() 사용.
	}

	TArray<FString> AllStudentsNames;

	// StudentsData의 내용을 AllStudentsName에 옮기기. (for문 쓰는 방법 대신, Algo.h에 정의된 Transform함수 활용).
	Algo::Transform(StudentsData, AllStudentsNames,
		[](const FStudentData& Val)
		{
			return Val.Name;
		}
	);
	UE_LOG(LogTemp, Log, TEXT("모든 학생 이름의 수: %d"), AllStudentsNames.Num());

	// StudentsData의 내용을, 중복없이 TSet에 옮기기.
	TSet<FString> AllUniqueNames;
	Algo::Transform(StudentsData, AllUniqueNames,
		[](const FStudentData& Val)
		{
			return Val.Name;
		}
	);
	UE_LOG(LogTemp, Log, TEXT("중복 없는 학생 이름의 수: %d"), AllUniqueNames.Num());




	// ====================================== TMap ====================================================================
	// Transform()을 통해 StudentsData의 내용을, TPair형태로 반환하여 TMap에 복사.
	Algo::Transform(StudentsData, StudentsMap,
		[](const FStudentData& Val)
		{
			return TPair<int32, FString>(Val.Order, Val.Name);
		}
	);
	UE_LOG(LogTemp, Log, TEXT("순번에 따른 학생 맵의 레코드 수: %d"), StudentsMap.Num());

	// 반대로, 이름(FString)을 key값으로 한 TMap 생성.
	// 이 경우, 일반적인 TMap은 TSet으로 구성되어 있어 중복을 허용하지 않는다.
	TMap<FString, int32> StudentsMapByUniqueName;
	Algo::Transform(StudentsData, StudentsMapByUniqueName,
		[](const FStudentData& Val)
		{
			return TPair<FString, int32>(Val.Name, Val.Order);
		}
	);
	UE_LOG(LogTemp, Log, TEXT("순번에 따른 학생 맵의 레코드 수: %d"), StudentsMapByUniqueName.Num());

	// TMap에 중복을 허용하고 싶은 경우.
	// => TMultiMap활용.
	TMultiMap<FString, int32> StudentsMapByName;
	Algo::Transform(StudentsData, StudentsMapByName,
		[](const FStudentData& Val)
		{
			return TPair<FString, int32>(Val.Name, Val.Order);
		}
	);
	UE_LOG(LogTemp, Log, TEXT("순번에 따른 학생 맵의 레코드 수: %d"), StudentsMapByName.Num());

	// 특정 이름 찾기.
	const FString TargetName(TEXT("김상수"));
	TArray<int32> AllOrders;
	StudentsMapByName.MultiFind(TargetName, AllOrders);		// TargetName에 대한 값을 찾아 AllOrders에 넘겨줌.
	UE_LOG(LogTemp, Log, TEXT("이름이 %s인 학생 수: %d"), *TargetName, AllOrders.Num());





	// ============================================================ 구조체 TSet 생성 =============================================================
	// TSet은 해시 구조로 이루어져 있다.
	// 이에 따라 해시 함수가 존재하는데, 데이터 타입에 따라 해시함수가 따로 존재한다.
	// 때문에 사용자가 지정한 구조체에 대한 TSet을 사용하고자 한다면, 해당 구조체에 대한 맞춤 해시 함수를 추가로 지정해줘야 한다 (== GetTypeHash()를 오버로드 해야 한다.).

	TSet<FStudentData> StudentsSet;
	for (int32 ix = 1; ix <= StudentNum; ix++)
	{
		StudentsSet.Emplace(FStudentData(MakeRandomName(), ix));
	}
}
