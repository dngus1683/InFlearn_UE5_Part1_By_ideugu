// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstanceReflectionSystem1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UMyGameInstanceReflectionSystem1 : public UGameInstance
{
	GENERATED_BODY()
	
public:
	
	// 기본값 설정을 위한 생성자
	UMyGameInstanceReflectionSystem1();
	virtual void Init() override;


private:
	UPROPERTY()
	FString SchoolName;

};
