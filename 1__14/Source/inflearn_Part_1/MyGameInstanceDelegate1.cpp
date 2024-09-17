// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameInstanceDelegate1.h"
#include "StudentDelegate1.h"
#include "CouseInfo.h"

UMyGameInstanceDelegate1::UMyGameInstanceDelegate1()
{
	SchoolName = TEXT("학교");
}

void UMyGameInstanceDelegate1::Init()
{
	Super::Init();

	CourseInfo = NewObject<UCouseInfo>(this);	// 언리얼 객체 생성 시, 첫번째 인자로, 생성된 객체의 outer를 설정하여 컴포지션을 이룰 수 있음. 
												// GameInstance는 CouseInfo를 포함해 GameInstance 내에서 관래해야 하기 때문에, outer를 GameInstance로 함.

	UE_LOG(LogTemp, Log, TEXT("==========================================="));

	UStudentDelegate1* Student1 = NewObject<UStudentDelegate1>();
	Student1->SetName(TEXT("학생1"));
	UStudentDelegate1* Student2 = NewObject<UStudentDelegate1>();
	Student2->SetName(TEXT("학생2"));
	UStudentDelegate1* Student3 = NewObject<UStudentDelegate1>();
	Student3->SetName(TEXT("학생3"));

	CourseInfo->OnChanged.AddUObject(Student1, &UStudentDelegate1::GetNotification);	//AddUObject를 통해 클래스 인스턴스를 지정하고 그 인스턴스의 맴버 함수를 묶을 수 있음.
	CourseInfo->OnChanged.AddUObject(Student2, &UStudentDelegate1::GetNotification);
	CourseInfo->OnChanged.AddUObject(Student3, &UStudentDelegate1::GetNotification);

	CourseInfo->ChangeCourseInfo(SchoolName, TEXT("변경된 학사 정보"));

	UE_LOG(LogTemp, Log, TEXT("==========================================="));

}

