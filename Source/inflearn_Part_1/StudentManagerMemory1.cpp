// Fill out your copyright notice in the Description page of Project Settings.


#include "StudentManagerMemory1.h"
#include "StudentMemory1.h"

void FStudentManagerMemory1::AddReferencedObjects(FReferenceCollector& Collector)
{
	if (SafeStudent->IsValidLowLevel())
	{
		Collector.AddReferencedObject(SafeStudent);
	}
}
