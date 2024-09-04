// Fill out your copyright notice in the Description page of Project Settings.


#include "PersonComposition1.h"
#include "Card.h"

UPersonComposition1::UPersonComposition1()
{
	Name = TEXT("홍길동");

	/*
	CDO에서 컴포지션을 구현할 때, CreateDefaultSuboject라는 API를 사용해야 한다.
	해당 API를 사용할 때, FNAME를 필수로 인자로 줘야 한다.
	FNAME과 일반 string을 구분하는 방법으로는 보통 NAME_ 접두사를 사용한다.
	*/
	Card = CreateDefaultSubobject<UCard>(TEXT("NAME_Card"));
}
