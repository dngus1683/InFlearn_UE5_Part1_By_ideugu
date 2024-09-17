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

	// 간단한 함수들은 inline으로 작동하는 것이 좋다.
	// 때문에, FORCEINLINE 키워드를 사용하여 최대한 inline이 되도록 하는 것이 좋다.  
	// (이 키워드가 100% inline으로 실행되는 것을 보장하진 않는다.)
	FORCEINLINE FString& GetName() { return Name; }
	FORCEINLINE void SetName(const FString& InName) { Name = InName; };

protected:
	UPROPERTY()
	FString Name;

private:

	
};
