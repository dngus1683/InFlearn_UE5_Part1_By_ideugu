// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceMemory1.h"
#include "StudentMemory1.h"
#include "StudentManagerMemory1.h"

// 오브젝트의 유효성 판단 함수.
void CheckUObjectIsValid(const UObject* InObject, const FString& InTag)
{
	if (InObject->IsValidLowLevel())	// 보통 유효성 판단은 IsValid()를 사용하지만, 내부적으로 깊숙히 확인해보기 위해 IsValidLowLevel() 활용.
	{
		UE_LOG(LogTemp, Log, TEXT("[%s] 유효한 언리얼 오브젝트"), *InTag);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("[%s] 유효하지 않은 언리얼 오브젝트"), *InTag);
	}
}

// 오브젝트 포인터가 nullptr을 가지는지 확인하는 함수.
void CheckUObjectIsNull(const UObject* InObject, const FString& InTag)
{
	if (InObject==nullptr)	
	{
		UE_LOG(LogTemp, Log, TEXT("[%s] 널 포인터 언리얼 오브젝트"), *InTag);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("[%s] 널 포인터가 아닌 언리얼 오브젝트"), *InTag);
	}
}

void UMyGameInstanceMemory1::Init()
{
	Super::Init();
	NonPropStudent = NewObject<UStudentMemory1>();
	PropStudent = NewObject<UStudentMemory1>();

	NonPropStudents.Add(NewObject<UStudentMemory1>());
	PropStudents.Add(NewObject<UStudentMemory1>());

	StudentManager = new FStudentManagerMemory1(NewObject<UStudentMemory1>());
}

void UMyGameInstanceMemory1::Shutdown()
{
	Super::Shutdown();

	const UStudentMemory1* StudentInManager = StudentManager->GetStudent();

	delete StudentManager;
	StudentManager = nullptr;
	

	CheckUObjectIsValid(StudentInManager, TEXT("StudentInManager"));
	CheckUObjectIsNull(StudentInManager, TEXT("StudentInManager"));

	CheckUObjectIsValid(NonPropStudent, TEXT("NonPropStudent"));
	CheckUObjectIsNull(NonPropStudent, TEXT("NonPropStudent"));

	CheckUObjectIsValid(PropStudent, TEXT("PropStudent"));
	CheckUObjectIsNull(PropStudent, TEXT("PropStudent"));

	CheckUObjectIsValid(NonPropStudents[0], TEXT("NonPropStudents"));
	CheckUObjectIsNull(NonPropStudents[0], TEXT("NonPropStudents"));

	CheckUObjectIsValid(PropStudents[0], TEXT("PropStudents"));
	CheckUObjectIsNull(PropStudents[0], TEXT("PropStudents"));
}
