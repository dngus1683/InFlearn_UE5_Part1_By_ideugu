// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceInterface1.h"
#include "StudentInterface1.h"
#include "TeacherInterface1.h"
#include "StaffInterface1.h"

UMyGameInstanceInterface1::UMyGameInstanceInterface1()
{
	SchoolName = TEXT("기본학교");
}

void UMyGameInstanceInterface1::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Log, TEXT("=============================================="));

	// UE C++의 컨테이너 중 하나인 TArray로 학생, 선생님, 직원의 객체를 저장.
	TArray<UPersonInterface1*> Persons = { NewObject<UStaffInterface1>(), NewObject<UTeacherInterface1>(), NewObject<UStudentInterface1>() };
	for (const auto Person : Persons)
	{
		UE_LOG(LogTemp, Log, TEXT("구성원 이름: %s"), *Person->GetName());
	}


	UE_LOG(LogTemp, Log, TEXT("=============================================="));


	for (const auto Person : Persons)
	{
		// Cast를 통해 해당 객체가 ILessonInterface 를 상속받고 있는지 확인.
		ILessonInterface* LessonInterface = Cast<ILessonInterface>(Person);
		if (LessonInterface)
		{
			UE_LOG(LogTemp, Log, TEXT("%s님은 수업에 참여할 수 있습니다."), *Person->GetName());
			LessonInterface->DoLesson();
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("%s님은 수업에 참여할 수 없습니다"), *Person->GetName());
		}  
	}

	UE_LOG(LogTemp, Log, TEXT("=============================================="));
}
