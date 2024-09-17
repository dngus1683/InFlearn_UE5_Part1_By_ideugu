// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstanceUCL2.generated.h"


USTRUCT()
struct FStudentData
{
	GENERATED_BODY()

	FStudentData()
	{
		Name = TEXT("홍길동");
		Order = -1;
	}
	FStudentData(FString InName, int32 InOrder) : Name(InName), Order(InOrder) {}


	// ------------- TSet을 위한 구조체의 해시 함수 설정 -----------------
	// Order값이 같다면, 두 데이터는 같다고 설정.
	bool operator==(const FStudentData& InOther) const
	{
		return Order == InOther.Order;
	}
	// Order(int32)의 해시 함수를 사용.
	// 이때, GetTypeHash를 외부에 선언하는 것보다 friend를 통해 내부에 구현하는 것이 깔끔.
	friend FORCEINLINE uint32 GetTypeHash(const FStudentData& inStudentData)
	{
		return GetTypeHash(inStudentData.Order);
	}
	// ---------------------------------------------------------------


	UPROPERTY()
	FString Name;

	UPROPERTY()
	int32 Order;
};

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UMyGameInstanceUCL2 : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;

private:
	TArray<FStudentData> StudentsData;
	

	// TArray에게 포인터를 관라하도록 한다면, 반드시 언리얼엔진이 자동으로 메모리를 관리할 수 있도록 UPROPERTY()를 붙여야 한다.
	// 위 StudentsData의 경우, 구조체 데이터 자체를 관리하는 배열이므로 UPROPERTY()가 필수는 아니다.
	UPROPERTY()
	TArray<TObjectPtr<class UStudentUCL2>> Students;

	TMap<int32, FString> StudentsMap;
};
