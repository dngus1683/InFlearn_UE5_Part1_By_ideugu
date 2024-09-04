// Fill out your copyright notice in the Description page of Project Settings.


#include "TeacherComposition1.h"
#include "Card.h"

UTeacherComposition1::UTeacherComposition1()
{
	Name = TEXT("신선생");
	Card->SetCardTye(ECardType::Teacher);
}
