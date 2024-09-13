// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstanceUCL1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UMyGameInstanceUCL1 : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;
};
