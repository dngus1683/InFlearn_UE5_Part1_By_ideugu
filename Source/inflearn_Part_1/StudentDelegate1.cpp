// Fill out your copyright notice in the Description page of Project Settings.


#include "StudentDelegate1.h"

UStudentDelegate1::UStudentDelegate1()
{
	Name = TEXT("김학생");
}

void UStudentDelegate1::GetNotification(const FString& School, const FString& NewCouseInfo)
{
	UE_LOG(LogTemp, Log, TEXT("[Student]  %s님이 %s로부터 받은 메세지: %s"), *Name, *School, *NewCouseInfo);
}
