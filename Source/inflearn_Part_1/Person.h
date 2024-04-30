// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UPerson : public UObject
{
	GENERATED_BODY()

public:
	UPerson();

	UFUNCTION()
	virtual void DoLesson();

	const FString& GetName() const;	// ���� const�� �� �Լ� ������ ��ü�� ���¸� �ٲ��� �ʴ� ��. ���� const�� return ���� FString ��ü�� �Լ� �ܺο��� �������� �ʴ� ��.
	void SetName(const FString& InName);

protected:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	int32 Year;

private:

	
};
