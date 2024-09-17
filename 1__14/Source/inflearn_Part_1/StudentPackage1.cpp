// Fill out your copyright notice in the Description page of Project Settings.


#include "StudentPackage1.h"

UStudentPackage1::UStudentPackage1()
{
	Order = -1;
	Name = TEXT("홍길동");
}

void UStudentPackage1::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	Ar << Order;
	Ar << Name;
}
