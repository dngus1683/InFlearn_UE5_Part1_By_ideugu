// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 일반 C++ 클래스는 UPROPERTY()를 사용할 수 없기 때문에
 * 언리얼 오브젝트를 맴버변수로 받아오면, 해당 언리얼 오브젝트는 언리얼 시스템에서 자동으로 관리되지 않는다.
 * 때문에 AddReferencedObject()를 활용해야 함.
 */
class INFLEARN_PART_1_API FStudentManagerMemory1 : public FGCObject	// AddReferencedObject()와 GetReferencerName()을 override 하기 위한 상속.
{
public:
	FStudentManagerMemory1(class UStudentMemory1* InStudent) : SafeStudent(InStudent) {}

	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;

	virtual FString GetReferencerName() const override
	{
		return TEXT("FStudentManagerMemory1");	// 고유한 클래스 이름을 지정.
	}

	const class UStudentMemory1* GetStudent() const { return SafeStudent; }

public:
	class UStudentMemory1* SafeStudent = nullptr;
};
