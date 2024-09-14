// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstanceMemory1.generated.h"

/**
 * 시나리오
 * GCCycle: 3초
 * 게임이 실행될 때(Init) 오브젝트 생성
 * 3초 이상 대기해 GC 발동
 * 게임을 종료(Shutdown)하고 오브젝트 유효성 확인
 */
UCLASS()
class INFLEARN_PART_1_API UMyGameInstanceMemory1 : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Shutdown() override;

	TObjectPtr<class UStudentMemory1> NonPropStudent;
	
	UPROPERTY()
	TObjectPtr<class UStudentMemory1> PropStudent;

	TArray<TObjectPtr<class UStudentMemory1>> NonPropStudents;

	UPROPERTY()
	TArray<TObjectPtr<class UStudentMemory1>> PropStudents;


	class FStudentManagerMemory1* StudentManager = nullptr;
};
