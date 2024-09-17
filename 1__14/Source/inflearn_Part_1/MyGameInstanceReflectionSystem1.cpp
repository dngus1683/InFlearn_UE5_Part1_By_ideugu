// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameInstanceReflectionSystem1.h" // 해당 .cpp 파일의 해더는 항상 먼저 include 해야 한다.
#include "Teacher.h" 
#include "Student.h"

UMyGameInstanceReflectionSystem1::UMyGameInstanceReflectionSystem1()
{
	// 해더 파일의 리플렉션 정보의 구조를 바꾸거나 생성자에서 Class Default Object 기본값을 변형한다면, 해더 파일 변형할 때와 마찬가지로 UE editor를 끈 상태로 작업을 하고 저장해야 적용이 된다.
	SchoolName = TEXT("기본학교");
}

void UMyGameInstanceReflectionSystem1::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Log, TEXT("================================================"));

	// 이 GameInstance의 클래스 정보 불러오기.
	UClass* ClassRuntime = GetClass();	// 런타임동안 불러오기
	UClass* ClassComplie = UMyGameInstanceReflectionSystem1::StaticClass();	// 컴파일 시 불러오기

	// 위 두 클래스는 사실 같은 정보를 받아온다. 두 값이 같은지 확인하는 방법은 cheak()라는 assertion 함수를 사용한다.
	// 만약 check()가 false가 뜨면 프로젝트가 꺼지고 Crash 창이 뜬다.
	// 때문에 게임을 개발할 때, 중간중간 check() 함수를 적절히 사용하여 안정성을 확인해야 한다.
	check(ClassRuntime == ClassComplie);

	// check()는 강제적으로 프로젝트를 끄기 때문에, 이러한 점이 불편하다면 ensure() 함수를 사용한다.
	// ensure()는 false가 뜨면 프로젝트는 종료되지 않는 대신에 에러 문구가 log창에 뜬다.
	// ensureMsgf()는 TEXT()를 추가하여 에러 시 띄울 문구를 정할 수 있다.
	ensure(ClassRuntime != ClassComplie);
	ensureMsgf(ClassRuntime != ClassComplie, TEXT("ensure 함수 테스트"));

	// 이 함수 내에서 CDO의 값을 바꿔도 아래 변수값만 바뀔 뿐, 근본적인 CDO 기본값은 생성자에서 설정한 그대로로, 바뀌지 않는다.
	SchoolName = TEXT("광운대학교");

	UE_LOG(LogTemp, Log, TEXT("%s"), *SchoolName);
	UE_LOG(LogTemp, Log, TEXT("%s"), *GetClass()->GetDefaultObject<UMyGameInstanceReflectionSystem1>()->SchoolName);	// GetDefaultObject<~~>() 에서 ~~에 클래스 타입을 넣으면 그 클래스의 형으로 변환이 된다.



	UE_LOG(LogTemp, Log, TEXT("%s"), *ClassRuntime->GetName());

	UE_LOG(LogTemp, Log, TEXT("================================================"));


	// C++ 클래스가 아닌 언리얼 클래스의 새로운 객체를 선언할 때, new 대신 NewObject를 사용.
	UStudent* Student = NewObject<UStudent>();
	UTeacher* Teacher = NewObject<UTeacher>();

	// 해당 클래스의 내부 함수를 통해 property를 불러오거나 변형할 수 있다.
	Student->SetName(TEXT("학생1"));
	UE_LOG(LogTemp, Log, TEXT("새로운 학생 이름 %s"), *Student->GetName());

	// 리플렉션 활용. 
	// 클래스 내부 함수가 아닌 언리얼 내부의 기능을 통해서도 해당 클래스의 property를 불러오거나 변형할 수 있다.
	FString CurrentTeacherName;
	FString NewTeacherName = TEXT("염선생");
	FProperty* NameProp = UTeacher::StaticClass()->FindPropertyByName(TEXT("Name"));	// property 이름을 통해서 불러옴.
	if (NameProp)	// 찾고자 하는 prop을 찾지 못했을 수도 있기 때문에 if 문을 사용.
	{
		NameProp->GetValue_InContainer(Teacher, &CurrentTeacherName);	// Teacher 객체가 가지고 있는 Name prop 값을 CurrentTeacherName 포인터에 저장.
		UE_LOG(LogTemp, Log, TEXT("현재 선생님 이름: %s"), *CurrentTeacherName);

		NameProp->SetValue_InContainer(Teacher, &NewTeacherName);	// 새로운 name 값을 객체의 prop에 저장.
		UE_LOG(LogTemp, Log, TEXT("현재 선생님 이름: %s"), *Teacher->GetName());
	}


	UE_LOG(LogTemp, Log, TEXT("================================================"));
	
	// 직접 클래스의 내부 함수를 호출.
	Student->DoLesson();

	// 리플렉션 활용.
	// 클래스 내부 함수가 아닌 언리얼 내부의 기능을 통해서도 해당 클래스의 함수를 호출할 수 있다.
	UFunction* DoLessonFunc = Teacher->GetClass()->FindFunctionByName(TEXT("DoLesson"));	// 내부 함수 이름을 통해서 불러옴.
	if (DoLessonFunc) 
	{
		Teacher->ProcessEvent(DoLessonFunc, nullptr);	// ProcessEvent() 함수를 통해 실행하고자 하는 함수 포인터를 넘겨준다. 같이 넘겨줄 인자가 없다면 nullptr을 넘겨준다.
	}

	// 위 예제를 통해, 리플렉션 시스템을 사용하면 접근 지정자(public, protected, private)와 무관하게 값을 설정할 수 있으며 언리얼 오브젝트의 함수도 호출할 수 있다.
	UE_LOG(LogTemp, Log, TEXT("================================================"));
}