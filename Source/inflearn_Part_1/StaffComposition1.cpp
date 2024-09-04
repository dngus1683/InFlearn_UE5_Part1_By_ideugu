// Fill out your copyright notice in the Description page of Project Settings.


#include "StaffComposition1.h"
#include "Card.h"

UStaffComposition1::UStaffComposition1()
{
	Name = TEXT("성직원");
	Card->SetCardTye(ECardType::Staff);
}
