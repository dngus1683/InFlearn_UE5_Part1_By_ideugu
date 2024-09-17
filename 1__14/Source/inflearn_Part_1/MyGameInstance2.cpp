// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance2.h"

void UMyGameInstance2::Init()
{
	Super::Init();
	
	// 문자열은 최적화된 TCHAR 배열
	TCHAR LogCharArray[] = TEXT("Hello Unreal");
	UE_LOG(LogTemp, Log, TEXT("%s"), LogCharArray);

	// TCHAR은 활용방법이 제한되므로, 문자열을 유연하게 사용할 수 있는 Wrapper Class인 FString 사용.
	// TCHAR 배열은 FString에 TArray라는 동적 배열 방식으로 보관됨.
	FString LogCharString = LogCharArray;
	UE_LOG(LogTemp, Log, TEXT("%s"), *LogCharString);	// FString이 값을 반환할 때는 TArray에 포함되어 있는, 문자열 첫번째 인자의 포인터를 반환. 때문에 문자열을 내보낼때는 간접 연산자(*)를 사용해야 함.

	// 첫번째 인자 포인터 받아오기
	const TCHAR* LogCharPtr = *LogCharString;	// const로 참조하여 값을 변경못하도록 함.
	TCHAR* LogCharDataPtr = LogCharString.GetCharArray().GetData();	// 값을 변경하고 싶다면 직접 메모리에 접근. 

	// 다시 배열로 가져오기
	TCHAR LogCharArrayWithSize[100];
	FCString::Strcpy(LogCharArrayWithSize, LogCharString.Len(), *LogCharString);

	// 문자열 내에 부분 문자열이 포함되어 있는지 확인 후 해당 부분 문자열 출력.
	if (LogCharString.Contains(TEXT("unreal"), ESearchCase::IgnoreCase))	// ESearchCase는 대소문자를 구분할 것인가에 대한 설정.
	{
		int32 Index = LogCharString.Find(TEXT("unreal"), ESearchCase::IgnoreCase);	// Find 함수를 통해 해당 문자열이 있다면 그 문자열 시작 index 반환.
		FString EndString = LogCharString.Mid(Index);
		UE_LOG(LogTemp, Log, TEXT("Find Test: %s"), *EndString);
	}

	// 문자열 split
	FString Left, Right;
	if (LogCharString.Split(TEXT(" "), &Left, &Right))
	{
		UE_LOG(LogTemp, Log, TEXT("Split Test: %s & %s"), *Left, *Right);
	}
	

	// 정수, 실수 <-> 문자열 변환.
	int32 IntValue = 32;
	float FloatValue = 3.141592;

	FString FloatIntString = FString::Printf(TEXT("Int:%d Float:%f"), IntValue, FloatValue);
	FString FloatString = FString::SanitizeFloat(FloatValue);
	FString IntString = FString::FromInt(IntValue);

	UE_LOG(LogTemp, Log, TEXT("%s"), *FloatIntString);
	UE_LOG(LogTemp, Log, TEXT("Int:%s Float:%s"), *IntString, *FloatString);

	int32 IntValueFromString = FCString::Atoi(*IntString);
	float FloatValueFromString = FCString::Atof(*FloatString);
	FString FloatIntString2 = FString::Printf(TEXT("Int:%d Float:%f"), IntValueFromString, FloatValueFromString);
	UE_LOG(LogTemp, Log, TEXT("%s"), *FloatIntString2);


	// FName
	FName key1(TEXT("HELLO"));
	FName key2(TEXT("hello"));
	UE_LOG(LogTemp, Log, TEXT("FName 비교 결과: %s"), key1 == key2 ? TEXT("같음") : TEXT("다름"));


	// 주의할 점.
	// Tick()과 같이 여러 번 실행되는 상황.
	for (int i = 0; i < 10000; i++)
	{
		FName SearchNamePool = FName(TEXT("HELLO"));	// 이와 같이 FName 생성자에 문자열을 대입하면, 해당 문자열이 NamePool에 존재하는지 확인 후 추가하는 작업이 실행됨.
														// 이 같은 행동이 여러 번 발생하면 비효율적.
		const static FName StaticOnlyOnce(TEXT("HELLO")); // 이렇게 local static으로 한번만 처리하도록 하거나. 반복되는 루프 밖에서 한 번만 선언하는 것이 좋음.
	}
}