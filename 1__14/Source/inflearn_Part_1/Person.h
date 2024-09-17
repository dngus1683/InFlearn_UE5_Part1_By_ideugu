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

	const FString& GetName() const;	// 앞의 const는 이 함수 내에서 객체의 상태를 바꾸지 않는 것. 뒤의 const는 return 값인 FString 객체가 함수 외부에서 수정되지 않는 것.
	void SetName(const FString& InName);

protected:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	int32 Year;

private:

	
};
