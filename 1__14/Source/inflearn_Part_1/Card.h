// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Card.generated.h"

// 열겨형 enum 지원. 열거형은 항상 E 접두사.
// UEUM()을 통해, 해당 열거형 클래스를 언리얼 엔진이 파악하게 되고, 기능을 추가할 수 있다. => 매타 정보를 넣을 수 있다.
UENUM()
enum class ECardType : uint8
{
	Student = 1 UMETA(DisplayName = "For Student"),
	Teacher UMETA(DisplayName = "For Teacher"),
	Staff UMETA(DisplayName = "For Staff"),
	Invalid
};

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UCard : public UObject
{
	GENERATED_BODY()
	
public: 
	UCard();
	ECardType GetCardType() const { return CardType; }
	void SetCardTye(ECardType InCardType) { CardType = InCardType; }
private:
	UPROPERTY()
	ECardType CardType;

	UPROPERTY()
	uint32 Id;
};
