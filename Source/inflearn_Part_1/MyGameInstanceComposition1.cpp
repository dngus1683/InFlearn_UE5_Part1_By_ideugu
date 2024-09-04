// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceComposition1.h"
#include "TeacherComposition1.h"
#include "StudentComposition1.h"
#include "StaffComposition1.h"
#include "Card.h"

void UMyGameInstanceComposition1::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Log, TEXT("================================================"));
	TArray<UPersonComposition1*> Persons = { NewObject<UStudentComposition1>(), NewObject<UTeacherComposition1>(), NewObject<UStaffComposition1>() };
	for (const auto Person : Persons)
	{
		const UCard* OwnCard = Person->GetCard();

		// if문 대신, 코드의 간결성을 위해 check() 활용
		check(OwnCard);
		ECardType CardType = OwnCard->GetCardType();
		UE_LOG(LogTemp, Log, TEXT("%s님이 소유한 카드 종류 %d"), *Person->GetName(), CardType);

		// UENUM을 통해 설정한 UMETA 데이터를 활용하는 방법
		// FindObject API 활용 -> 열거형 클래스가 위치한 절대주소를 인자로.
		const UEnum* CardEnumType = FindObject<UEnum>(nullptr, TEXT("/Script/inflearn_Part_1.ECardType"));
		if (CardEnumType)
		{
			FString CardMetaDate = CardEnumType->GetDisplayNameTextByValue((int64)CardType).ToString();
			UE_LOG(LogTemp, Log, TEXT("%s님이 소유한 카드 종류 %s"), *Person->GetName(), *CardMetaDate);		
		}

	}
	UE_LOG(LogTemp, Log, TEXT("================================================"));
}
