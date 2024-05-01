// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PersonInterface1.h"
#include "LessonInterface.h"
#include "TeacherInterface1.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_PART_1_API UTeacherInterface1 : public UPersonInterface1, public ILessonInterface
{
	GENERATED_BODY()

public:
	UTeacherInterface1();

	virtual void DoLesson() override;
};
