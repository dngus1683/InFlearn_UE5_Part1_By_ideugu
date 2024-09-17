// Fill out your copyright notice in the Description page of Project Settings.


#include "StudentSerialization1.h"

UStudentSerialization1::UStudentSerialization1()
{
	Order = -1;
	Name = TEXT("홍길동");
}

void UStudentSerialization1::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	Ar << Order;
	Ar << Name;
}
