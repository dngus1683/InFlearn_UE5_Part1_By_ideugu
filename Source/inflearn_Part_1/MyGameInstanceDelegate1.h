// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstanceDelegate1.generated.h"


/*
* CouseInfo 객체와 (Student, Teacher, Staff) 객체는 서로 include 하지 않음 => 서로 완전히 독립적.
* 이 사이를 중재해주는 역할을 하는 객체가 필요. 
* GameInstance가 그 역할을 하기로 함.

 */
UCLASS()
class INFLEARN_PART_1_API UMyGameInstanceDelegate1 : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;
	UMyGameInstanceDelegate1();

private:
	// CouseInfo는 언리얼 클래스이며, 포인터로 관리해야 하므로 TObjectPtr 활용.
	TObjectPtr<class UCouseInfo> CourseInfo;

	UPROPERTY()
	FString SchoolName;
};
