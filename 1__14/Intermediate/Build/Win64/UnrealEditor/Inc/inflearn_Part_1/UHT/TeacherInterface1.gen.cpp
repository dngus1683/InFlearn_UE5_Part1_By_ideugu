// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/TeacherInterface1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeacherInterface1() {}
// Cross Module References
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_ULessonInterface_NoRegister();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UTeacherInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UTeacherInterface1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UTeacherInterface1::StaticRegisterNativesUTeacherInterface1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeacherInterface1);
	UClass* Z_Construct_UClass_UTeacherInterface1_NoRegister()
	{
		return UTeacherInterface1::StaticClass();
	}
	struct Z_Construct_UClass_UTeacherInterface1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTeacherInterface1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonInterface1,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacherInterface1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeacherInterface1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TeacherInterface1.h" },
		{ "ModuleRelativePath", "TeacherInterface1.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTeacherInterface1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULessonInterface_NoRegister, (int32)VTABLE_OFFSET(UTeacherInterface1, ILessonInterface), false },  // 2058978753
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacherInterface1_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTeacherInterface1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeacherInterface1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeacherInterface1_Statics::ClassParams = {
		&UTeacherInterface1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacherInterface1_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeacherInterface1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTeacherInterface1()
	{
		if (!Z_Registration_Info_UClass_UTeacherInterface1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeacherInterface1.OuterSingleton, Z_Construct_UClass_UTeacherInterface1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTeacherInterface1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UTeacherInterface1>()
	{
		return UTeacherInterface1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTeacherInterface1);
	UTeacherInterface1::~UTeacherInterface1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherInterface1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherInterface1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTeacherInterface1, UTeacherInterface1::StaticClass, TEXT("UTeacherInterface1"), &Z_Registration_Info_UClass_UTeacherInterface1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeacherInterface1), 2364069414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherInterface1_h_367179783(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherInterface1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherInterface1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
