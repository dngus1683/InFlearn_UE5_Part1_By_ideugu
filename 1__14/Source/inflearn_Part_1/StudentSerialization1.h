// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StudentSerialization1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UStudentSerialization1 : public UObject
{
	GENERATED_BODY()
	
public:
	UStudentSerialization1();

	int32 GetOrder() const { return Order; }
	void SetOrder(int32 InOrder) { Order = InOrder; }

	const FString& GetName() const { return Name; }
	void SetName(const FString& InName) { Name = InName; }

	// 직렬화를 위해 UObject에 미리 구현되어 있는 Serialize()를 오버라이드한다.
	virtual void Serialize(FArchive& Ar) override;
private:
	UPROPERTY()
	int32 Order;

	UPROPERTY()
	FString Name;
};
