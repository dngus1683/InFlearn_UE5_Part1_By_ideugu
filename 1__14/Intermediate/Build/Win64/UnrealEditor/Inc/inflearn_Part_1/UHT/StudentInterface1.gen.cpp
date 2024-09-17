// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/StudentInterface1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudentInterface1() {}
// Cross Module References
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_ULessonInterface_NoRegister();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentInterface1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UStudentInterface1::StaticRegisterNativesUStudentInterface1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStudentInterface1);
	UClass* Z_Construct_UClass_UStudentInterface1_NoRegister()
	{
		return UStudentInterface1::StaticClass();
	}
	struct Z_Construct_UClass_UStudentInterface1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStudentInterface1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonInterface1,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentInterface1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStudentInterface1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StudentInterface1.h" },
		{ "ModuleRelativePath", "StudentInterface1.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStudentInterface1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULessonInterface_NoRegister, (int32)VTABLE_OFFSET(UStudentInterface1, ILessonInterface), false },  // 2058978753
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentInterface1_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStudentInterface1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStudentInterface1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStudentInterface1_Statics::ClassParams = {
		&UStudentInterface1::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentInterface1_Statics::Class_MetaDataParams), Z_Construct_UClass_UStudentInterface1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStudentInterface1()
	{
		if (!Z_Registration_Info_UClass_UStudentInterface1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStudentInterface1.OuterSingleton, Z_Construct_UClass_UStudentInterface1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStudentInterface1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UStudentInterface1>()
	{
		return UStudentInterface1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStudentInterface1);
	UStudentInterface1::~UStudentInterface1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStudentInterface1, UStudentInterface1::StaticClass, TEXT("UStudentInterface1"), &Z_Registration_Info_UClass_UStudentInterface1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStudentInterface1), 600570560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface1_h_1208736175(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
