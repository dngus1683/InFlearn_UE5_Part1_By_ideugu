// Fill out your copyright notice in the Description page of Project Settings.


#include "CouseInfo.h"

UCouseInfo::UCouseInfo()
{
	Contents = TEXT("기존 학사 정보");
}

void UCouseInfo::ChangeCourseInfo(const FString& InSchoolName, const FString& InNewContents)
{
	Contents = InNewContents;

	UE_LOG(LogTemp, Log, TEXT("[CourseInfo] 학사 정보가 변경되어 알림을 발송합니다."));
	OnChanged.Broadcast(InSchoolName, Contents);
}
