// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.h"	// �߰������� �ش��� include �� ���� �׻� generated.h ���� �߰������ �Ѵ�.
#include "Student.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UStudent : public UPerson
{
	GENERATED_BODY()
	
public:
	UStudent();

	virtual void DoLesson() override;


private:
	UPROPERTY()
	int32 Id;
};