// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSerialization1.h"
#include "StudentSerialization1.h"
#include "JsonObjectConverter.h"	// 언리얼 오브젝트를 json 오브젝트로 변환해주는 해더.

void PrintStudentInfo(const UStudentSerialization1* InStudent, const FString& InTag)
{
	UE_LOG(LogTemp, Log, TEXT("[%s] 이름 %s 순번 %d"), *InTag, *InStudent->GetName(), InStudent->GetOrder());
}

void UMyGameInstanceSerialization1::Init()
{
	Super::Init();

	FStudentData1 RawDataSrc(16, TEXT("주홍철"));

	// ========================================== bin 파일 생성 & 경로 저장 ========================================================

	const FString SavedDir = FPaths::Combine(FPlatformMisc::ProjectDir(), TEXT("Saved"));	// FPlatformMisc::ProjectDir()를 통해 프로젝트의 경로를 얻음.
																							// 이후 Saved 경로를 추가하여 SavedDir에 Saved 폴더 경로 저장.
	UE_LOG(LogTemp, Log, TEXT("저장할 파일 폴더: %s"), *SavedDir);

	const FString RawDataFileName(TEXT("RawData.bin"));
	FString AbsolutePath = FPaths::Combine(*SavedDir, *RawDataFileName);
	UE_LOG(LogTemp, Log, TEXT("저장할 파일 전체 경로: %s"), *AbsolutePath);
	FPaths::MakeStandardFilename(AbsolutePath);	// MakeStandardFileName()을 통해 파일 경로를 가독성 좋게 변환.
	UE_LOG(LogTemp, Log, TEXT("변경할 파일 전체 경로: %s"), *AbsolutePath);


	// ========================================== 구조체를 아카이브에 저장 & 불러오기 ================================================
	{
		// 아카이브를 생성하여 데이터들을 << 연산자를 통해 아카이브에 넣는다.
		// 구조체와 같은 사용자 지정 데이터 타입에 경우, << 연산자 오버로드로 선언해준다.
		FArchive* RawFileWriterAr = IFileManager::Get().CreateFileWriter(*AbsolutePath);
		if (RawFileWriterAr != nullptr)
		{
			*RawFileWriterAr << RawDataSrc;
			RawFileWriterAr->Close();	// 전송이 완료되면, 파일을 닫음.
			delete RawFileWriterAr; 
			RawFileWriterAr = nullptr;
		}

		// 아카이브에서 파일을 불러오는 것 역시 동일하게 << 연산자를 사용한다. 
		FStudentData1 RawDataDest;
		FArchive* RawFileReaderAr = IFileManager::Get().CreateFileReader(*AbsolutePath);
		if (RawFileReaderAr != nullptr)
		{
			*RawFileReaderAr << RawDataDest;
			RawFileReaderAr->Close();
			delete RawFileReaderAr;
			RawFileReaderAr = nullptr;

			UE_LOG(LogTemp, Log, TEXT("[RawData] 이름 %s 순번 %d"), *RawDataDest.Name, RawDataDest.Order);
		}
	}




	// ======================================= 언리얼 오브젝트를 아카이브에 저장 & 불러오기 =============================================
	{
		StudentSrc = NewObject<UStudentSerialization1>();
		StudentSrc->SetName(TEXT("임상우"));
		StudentSrc->SetOrder(22);

		const FString ObjectDataFileName(TEXT("ObjectData.bin"));
		FString ObjectDataAbsolutePath = FPaths::Combine(*SavedDir, *ObjectDataFileName);
		FPaths::MakeStandardFilename(ObjectDataAbsolutePath);

		TArray<uint8> BufferArray;	// Byte Steam => 직렬화 버퍼
		FMemoryWriter MemoryWriterAr(BufferArray);
		StudentSrc->Serialize(MemoryWriterAr);

		// bin파일에 저장하기.
		// (아카이브 생성, 메모리 해제, 포인터 널 가리키기)등의 번거로움을 없애기 위해 스마트 포인터 활용.
		TUniquePtr<FArchive> FileWriterAr = TUniquePtr<FArchive>(IFileManager::Get().CreateFileWriter(*ObjectDataAbsolutePath));
		if (FileWriterAr != nullptr)
		{
			*FileWriterAr << BufferArray;
			FileWriterAr->Close();
		}

		// bin파일로부터 데이터 읽어오기.
		TArray<uint8> BufferArrayFromFile;
		TUniquePtr<FArchive> FileReaderAr = TUniquePtr<FArchive>(IFileManager::Get().CreateFileReader(*ObjectDataAbsolutePath));
		if (FileWriterAr != nullptr)
		{
			*FileReaderAr << BufferArrayFromFile;
			FileReaderAr->Close();
		}
		FMemoryReader MemoryReaderAr(BufferArrayFromFile);
		UStudentSerialization1* StudentDest = NewObject<UStudentSerialization1>();
		StudentDest->Serialize(MemoryReaderAr);
		PrintStudentInfo(StudentDest, TEXT("ObjectData"));
	}

	
	// ============================================= Json으로 직렬화 구현 ===================================================
	{
		const FString JsonDataFileName(TEXT("StudentJsonData.txt"));
		FString JsonDataAbsolutePath = FPaths::Combine(*SavedDir, *JsonDataFileName);
		FPaths::MakeStandardFilename(JsonDataAbsolutePath);

		TSharedRef<FJsonObject> JsonObjectSrc = MakeShared<FJsonObject>();	// TSharedRef를 통해 null이 아님을 보장.
		FJsonObjectConverter::UStructToJsonObject(StudentSrc->GetClass(), StudentSrc, JsonObjectSrc);	// 언리얼 오브젝트는 모두 UStruct를 상속받음.
																										// 때문에 UStruct를 Json 오브젝트로 변환하는 함수 사용.
																										// 함수 인자로, (언리얼 오브젝트의 스키마, 언리얼 오브젝트, json 오브젝트)
		/* 
		* 이대로 빌드를 하면 JsonObjectConverter.h이 선언은 되어있지만 구현부가 없다는 에러가 뜬다.
		* 이는 json 라이브러리를 사용하기 위해서는 별도의 라이브러리들을 연동시켜서 구현부를 제공해야 한다.
		* * 연동시키는 방법:
		* * => 프로젝트 파일 중, [프로젝트 이름].build.cs 파일 내에 
		* * => "PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });"에 Json과 JsonUtilities를 추가한다.
		*/

		// 텍스트 파일에 저장.
		FString JsonOutString;	// json은 텍스트 기반이므로.
		TSharedRef<TJsonWriter<TCHAR>> JsonWriterAr = TJsonWriterFactory<TCHAR>::Create(&JsonOutString);
		if (FJsonSerializer::Serialize(JsonObjectSrc, JsonWriterAr))
		{
			FFileHelper::SaveStringToFile(JsonOutString, *JsonDataAbsolutePath);
		}

		// 텍스트 파일로부터 데이터 불러오기.
		FString JsonInString;
		FFileHelper::LoadFileToString(JsonInString, *JsonDataAbsolutePath);

		TSharedRef<TJsonReader<TCHAR>> JsonReaderAr = TJsonReaderFactory<TCHAR>::Create(JsonInString);

		TSharedPtr<FJsonObject> JsonObjectDest;	// 널 값이 읽어질 수 있기 때문에 TSharedPtr 사용.
		if (FJsonSerializer::Deserialize(JsonReaderAr, JsonObjectDest))
		{
			UStudentSerialization1* JsonStudentDest = NewObject<UStudentSerialization1>();
			if (FJsonObjectConverter::JsonObjectToUStruct(JsonObjectDest.ToSharedRef(), JsonStudentDest->GetClass(), JsonStudentDest))
			{
				PrintStudentInfo(JsonStudentDest, TEXT("JsonData"));
			}
		}
	}
}
