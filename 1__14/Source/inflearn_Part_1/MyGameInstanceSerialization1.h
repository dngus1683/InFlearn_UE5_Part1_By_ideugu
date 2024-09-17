// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstanceSerialization1.generated.h"

struct FStudentData1
{
	FStudentData1() {}
	FStudentData1(int32 InOrder, const FString& InName) : Order(InOrder), Name(InName) {}

	friend FArchive& operator <<(FArchive& Ar, FStudentData1& InStudentData)
	{
		Ar << InStudentData.Order;
		Ar << InStudentData.Name;
		return Ar;
	}

	int32 Order = -1;
	FString Name = TEXT("홍길동");

};

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UMyGameInstanceSerialization1 : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;

	UPROPERTY()
	TObjectPtr<class UStudentSerialization1> StudentSrc;

	
};
