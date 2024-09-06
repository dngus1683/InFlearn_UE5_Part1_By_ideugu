// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PersonDelegate1.h"
#include "StudentDelegate1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UStudentDelegate1 : public UPersonDelegate1
{
	GENERATED_BODY()
public:
	UStudentDelegate1();

	void GetNotification(const FString& School, const FString& NewCouseInfo);
};
