// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LessonInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class ULessonInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INFLEARN_PART_1_API ILessonInterface
{
	GENERATED_BODY()

public:
	// 가상함수 = 0으로 선언한 것은 순수 가상 함수(pure virtual function)이라 한다. 이는 하위 클래스에서 오버라이드 하지 않으면 컴파일 에러가 뜬다. 즉 해당 함수의 재정의를 강제할 수 있다.
	// 이러한 순수 가상 함수를 하나라도 가지고 있는 클래스를 추상 클래스(abstract class)라 한다.
	// virtual void DoLesson() = 0;


	// 여기서 UE C++의 특징으로, Jave나 C#의 인터페이스는 위처럼 추상 타입으로만 선언할 수 있는 반면, UE C++는 C++는 하위 클래스에서 구현하는 대신 이곳 인터페이스에서 직접 함수 구현이 가능하다.
	virtual void DoLesson()
	{
		UE_LOG(LogTemp, Log, TEXT("수업에 입장하였습니다."));
	}
};
