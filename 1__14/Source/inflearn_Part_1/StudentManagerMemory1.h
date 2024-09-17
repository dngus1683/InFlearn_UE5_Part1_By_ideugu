// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * �Ϲ� C++ Ŭ������ UPROPERTY()�� ����� �� ���� ������
 * �𸮾� ������Ʈ�� �ɹ������� �޾ƿ���, �ش� �𸮾� ������Ʈ�� �𸮾� �ý��ۿ��� �ڵ����� �������� �ʴ´�.
 * ������ AddReferencedObject()�� Ȱ���ؾ� ��.
 */
class INFLEARN_PART_1_API FStudentManagerMemory1 : public FGCObject	// AddReferencedObject()�� GetReferencerName()�� override �ϱ� ���� ���.
{
public:
	FStudentManagerMemory1(class UStudentMemory1* InStudent) : SafeStudent(InStudent) {}

	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;

	virtual FString GetReferencerName() const override
	{
		return TEXT("FStudentManagerMemory1");	// ������ Ŭ���� �̸��� ����.
	}

	const class UStudentMemory1* GetStudent() const { return SafeStudent; }

public:
	class UStudentMemory1* SafeStudent = nullptr;
};
