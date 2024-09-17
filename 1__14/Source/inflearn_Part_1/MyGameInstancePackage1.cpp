// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstancePackage1.h"
#include "StudentPackage1.h"
#include "UObject/SavePackage.h"

// 패키지를 설정하기 위해서는 패키지와 패키지가 담고 있는 대표 에셋을 설정해야 한다.
// 이때 둘의 이름을 지정해야 한다.
// UE 5.3부터는 패키지 이름과 에셋 이름이 동일해야 에디터의 contents browser에 보인다.
// 이름이 달라도 패키지는 성공적으로 저장된다. 
const FString UMyGameInstancePackage1::PackageName = TEXT("/Game/Student");
const FString UMyGameInstancePackage1::AssetName = TEXT("TopStudent");

void PrintStudentInfo(const UStudentPackage1* InStudent, const FString& InTag)
{
	UE_LOG(LogTemp, Log, TEXT("[%s] 이름 %s 순번 %d"), *InTag, *InStudent->GetName(), InStudent->GetOrder());
}


// ===================================================== 생성자에서 오브젝트 경로를 통해 패키지 내의 데이터 불러오기 =====================================================
// 생성자에서 데이터를 불러온다는 것은 미리 메모리에 할당된다는 것을 의미.
// 또한, 생성자에서 불러오는 것은, 해당 패키지가 이미 해당 경로이 존재하는 것을 전재로 하기 때문에, 패키지 파일이 없다면 프로그램 실행 시 에러가 뜬다.
UMyGameInstancePackage1::UMyGameInstancePackage1()
{
	const FString TopSoftObjectPath = FString::Printf(TEXT("%s.%s"), *PackageName, *AssetName);
	static ConstructorHelpers::FObjectFinder<UStudentPackage1> UASSET_TopStudent(*TopSoftObjectPath);
	if (UASSET_TopStudent.Succeeded())
	{
		PrintStudentInfo(UASSET_TopStudent.Object, TEXT("Constructor"));
	}
}

void UMyGameInstancePackage1::Init()
{
	Super::Init();

	SaveStudentPackage();
	//LoadStudentPackage();
	LoadStudentObject();

	// ===================================================== 비동기 방식으로 애셋 로드 =====================================================
	const FString TopSoftObjectPath = FString::Printf(TEXT("%s.%s"), *PackageName, *AssetName);
	Handle = StreamableManager.RequestAsyncLoad(TopSoftObjectPath,
		[&]()
		{
			if (Handle.IsValid() && Handle->HasLoadCompleted())
			{
				UStudentPackage1* TopStudent = Cast<UStudentPackage1>(Handle->GetLoadedAsset());
				if (TopStudent)
				{
					PrintStudentInfo(TopStudent, TEXT("AsyncLoad"));

					// 다 쓴 Handle 닫기.
					Handle->ReleaseHandle();
					Handle.Reset();
				}
			}
		}
	);
}

// ===================================================== 패키지 저장 =====================================================
void UMyGameInstancePackage1::SaveStudentPackage() const
{
	// 패키지를 저장할 때, 이미 해당 패키지가 있을 수 있기 때문에, 그러한 경우 패키지를 사전에 모두 load 하는 것이 안전하다.
	UPackage* StudentPackage = ::LoadPackage(nullptr, *PackageName, LOAD_None);
	if (StudentPackage)
	{
		StudentPackage->FullyLoad();
	}

	StudentPackage = CreatePackage(*PackageName);	// 패키지 생성
	EObjectFlags ObjectFlag = RF_Public | RF_Standalone;	// 패키지 저장 플래그 -> 이를 활용하여 패키지 저장.

	UStudentPackage1* TopStudent = NewObject<UStudentPackage1>(StudentPackage, UStudentPackage1::StaticClass(), *AssetName, ObjectFlag);	// 오브젝트를 아무 인자 없이 생성하면 transient(임시) 패키지에 포함된다.
																																			// 원하는 패키지에 넣기 위해서는 필요한 인자를 추가한다.
																																			// 이때, 세번째 인자에 에셋 이름을 넣기 위해서 두번째 인자는 구색맞추기 용으로 추가한다.
	TopStudent->SetName(TEXT("문교원"));
	TopStudent->SetOrder(21);

	const int32 NumOfSubs = 10;	// 서브 오브젝트 개수.
	for (int32 ix = 1; ix <= NumOfSubs; ix++)
	{
		FString SubOjectName = FString::Printf(TEXT("Student%d"), ix);
		UStudentPackage1* SubStudent = NewObject<UStudentPackage1>(TopStudent, UStudentPackage1::StaticClass(), *SubOjectName, ObjectFlag);	// 매인 애셋 아래에 서브 오브젝트를 저장하기 위해, 생성자 인자 추가.
		SubStudent->SetName(FString::Printf(TEXT("학생%d"), ix));
		SubStudent->SetOrder(ix);
	}

	const FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());	// GetAssetPackageExtension()를 통해 에셋 확장자(.uasset)를 추가.
	FSavePackageArgs SaveArgs;	// 패키지 저장 옵션 지정.
	SaveArgs.TopLevelFlags = ObjectFlag;

	if (UPackage::SavePackage(StudentPackage, nullptr, *PackageFileName, SaveArgs))
	{
		UE_LOG(LogTemp, Log, TEXT("패키지가 성공적으로 저장되었습니다."));
	}
}

// ===================================================== 패키지 로드 =====================================================
void UMyGameInstancePackage1::LoadStudentPackage() const
{
	UPackage* StudentPackage = ::LoadPackage(nullptr, *PackageName, LOAD_None);	// 패키지 불러오기
	if (StudentPackage == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("패키지를 찾을 수 없습니다."));
		return;
	}

	StudentPackage->FullyLoad();	// 패키지 내의 모든 데이터들을 불러오기.
	UStudentPackage1* TopStudent = FindObject<UStudentPackage1>(StudentPackage, *AssetName); // FindObject()함수를 통해, 첫 번째 인자 내에서, 두 번째 인자와 같은 이름의 <>안의 타입 데이터를 찾아 반환한다.
	PrintStudentInfo(TopStudent, TEXT("FindObject Asset"));
}


// ===================================================== 패키지를 모두 불러오는 것이 아닌, [오브젝트 경로]를 활용하여 데이터 불러오기 =====================================================
void UMyGameInstancePackage1::LoadStudentObject() const
{
	const FString TopSoftObjectPath = FString::Printf(TEXT("%s.%s"), *PackageName, *AssetName);
	UStudentPackage1* TopStudent = LoadObject<UStudentPackage1>(nullptr, *TopSoftObjectPath);	// 패키지를 로드하지 않으므로 outer=nullptr
	PrintStudentInfo(TopStudent, TEXT("LoadObject Asset"));
}
