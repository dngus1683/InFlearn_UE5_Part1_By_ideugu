// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CouseInfo.generated.h"

DECLARE_MULTICAST_DELEGATE_TwoParams(FCouseInfoOnChangedSignature, const FString&, const FString&);

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UCouseInfo : public UObject
{
	GENERATED_BODY()
public:
	UCouseInfo();

	FCouseInfoOnChangedSignature OnChanged;
	
	void ChangeCourseInfo(const FString& InSchoolName, const FString& InNewContents);

private:
	FString Contents;
};
