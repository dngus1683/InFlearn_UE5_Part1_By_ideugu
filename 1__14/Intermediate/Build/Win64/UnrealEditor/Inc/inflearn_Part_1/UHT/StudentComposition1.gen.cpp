// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/StudentComposition1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudentComposition1() {}
// Cross Module References
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonComposition1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentComposition1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentComposition1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UStudentComposition1::StaticRegisterNativesUStudentComposition1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStudentComposition1);
	UClass* Z_Construct_UClass_UStudentComposition1_NoRegister()
	{
		return UStudentComposition1::StaticClass();
	}
	struct Z_Construct_UClass_UStudentComposition1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStudentComposition1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonComposition1,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentComposition1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStudentComposition1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StudentComposition1.h" },
		{ "ModuleRelativePath", "StudentComposition1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStudentComposition1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStudentComposition1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStudentComposition1_Statics::ClassParams = {
		&UStudentComposition1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentComposition1_Statics::Class_MetaDataParams), Z_Construct_UClass_UStudentComposition1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStudentComposition1()
	{
		if (!Z_Registration_Info_UClass_UStudentComposition1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStudentComposition1.OuterSingleton, Z_Construct_UClass_UStudentComposition1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStudentComposition1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UStudentComposition1>()
	{
		return UStudentComposition1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStudentComposition1);
	UStudentComposition1::~UStudentComposition1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentComposition1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentComposition1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStudentComposition1, UStudentComposition1::StaticClass, TEXT("UStudentComposition1"), &Z_Registration_Info_UClass_UStudentComposition1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStudentComposition1), 3018403974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentComposition1_h_900767641(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentComposition1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentComposition1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
