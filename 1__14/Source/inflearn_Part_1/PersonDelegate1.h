// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PersonDelegate1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UPersonDelegate1 : public UObject
{
	GENERATED_BODY()
public:
	UPersonDelegate1();
	FORCEINLINE const FString& GetName() const { return Name; }
	FORCEINLINE void SetName(const FString& InName) { Name = InName; }

protected:
	UPROPERTY()
	FString Name;
	
};
