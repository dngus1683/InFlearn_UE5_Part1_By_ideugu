// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PersonInterface1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UPersonInterface1 : public UObject
{
	GENERATED_BODY()

public:
	UPersonInterface1();

	// ������ �Լ����� inline���� �۵��ϴ� ���� ����.
	// ������, FORCEINLINE Ű���带 ����Ͽ� �ִ��� inline�� �ǵ��� �ϴ� ���� ����.  
	// (�� Ű���尡 100% inline���� ����Ǵ� ���� �������� �ʴ´�.)
	FORCEINLINE FString& GetName() { return Name; }
	FORCEINLINE void SetName(const FString& InName) { Name = InName; };

protected:
	UPROPERTY()
	FString Name;

private:

	
};
