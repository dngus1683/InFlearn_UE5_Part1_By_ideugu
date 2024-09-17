// Fill out your copyright notice in the Description page of Project Settings.


#include "StudentInterface1.h"

UStudentInterface1::UStudentInterface1()
{
	Name = TEXT("김학생");
}

void UStudentInterface1::DoLesson()
{
	ILessonInterface::DoLesson();
	UE_LOG(LogTemp, Log, TEXT("%s님은 공부합니다"), *Name);
}
