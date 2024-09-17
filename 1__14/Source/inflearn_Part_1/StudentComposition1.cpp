// Fill out your copyright notice in the Description page of Project Settings.


#include "StudentComposition1.h"
#include "Card.h"

UStudentComposition1::UStudentComposition1()
{
	Name = TEXT("김학생");
	Card->SetCardTye(ECardType::Student);
}
