// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.h"	// 추가적으로 해더를 include 할 때는 항상 generated.h 위에 추가해줘야 한다.
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
