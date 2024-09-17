// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PersonComposition1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UPersonComposition1 : public UObject
{
	GENERATED_BODY()

public: 
	UPersonComposition1();

	FORCEINLINE const FString& GetName() const { return Name; }
	FORCEINLINE void SetName(const FString& InName) { Name = InName; }
	FORCEINLINE class UCard* GetCard() const { return Card; }
	FORCEINLINE void SetCard(class UCard* InCard) { Card = InCard; }

protected:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	TObjectPtr<class UCard> Card;
};
