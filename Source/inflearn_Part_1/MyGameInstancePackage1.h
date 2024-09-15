// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/StreamableManager.h"
#include "MyGameInstancePackage1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UMyGameInstancePackage1 : public UGameInstance
{
	GENERATED_BODY()

public:
	UMyGameInstancePackage1();

	virtual void Init() override;
	
	void SaveStudentPackage() const;
	void LoadStudentPackage() const;
	void LoadStudentObject() const;
private:
	static const FString PackageName;
	static const FString AssetName;

	UPROPERTY()
	TObjectPtr<class UStudentPackage1> StudentSrc;

	FStreamableManager StreamableManager;
	TSharedPtr<FStreamableHandle> Handle;
};
