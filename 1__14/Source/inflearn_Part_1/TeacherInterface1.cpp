// Fill out your copyright notice in the Description page of Project Settings.


#include "TeacherInterface1.h"

UTeacherInterface1::UTeacherInterface1()
{
	Name = TEXT("이선생");
}

void UTeacherInterface1::DoLesson()
{
	// 한 클래스는 여러 개의 클래스를 상속받을 수 있지만 클래스 정보에 대해서는 단일 상속만 지원하기 때문에, ILessonInterface를 Super로 불러올 수 없다.
	ILessonInterface::DoLesson();
	UE_LOG(LogTemp, Log, TEXT("%s님은 가르칩니다"), *Name);
}
