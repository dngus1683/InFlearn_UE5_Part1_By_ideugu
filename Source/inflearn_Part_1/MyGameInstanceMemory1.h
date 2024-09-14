// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstanceMemory1.generated.h"

/**
 * �ó�����
 * GCCycle: 3��
 * ������ ����� ��(Init) ������Ʈ ����
 * 3�� �̻� ����� GC �ߵ�
 * ������ ����(Shutdown)�ϰ� ������Ʈ ��ȿ�� Ȯ��
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
