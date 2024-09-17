// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/TeacherDelegate1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeacherDelegate1() {}
// Cross Module References
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonDelegate1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UTeacherDelegate1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UTeacherDelegate1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UTeacherDelegate1::StaticRegisterNativesUTeacherDelegate1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeacherDelegate1);
	UClass* Z_Construct_UClass_UTeacherDelegate1_NoRegister()
	{
		return UTeacherDelegate1::StaticClass();
	}
	struct Z_Construct_UClass_UTeacherDelegate1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTeacherDelegate1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonDelegate1,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacherDelegate1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeacherDelegate1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TeacherDelegate1.h" },
		{ "ModuleRelativePath", "TeacherDelegate1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTeacherDelegate1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeacherDelegate1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeacherDelegate1_Statics::ClassParams = {
		&UTeacherDelegate1::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacherDelegate1_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeacherDelegate1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTeacherDelegate1()
	{
		if (!Z_Registration_Info_UClass_UTeacherDelegate1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeacherDelegate1.OuterSingleton, Z_Construct_UClass_UTeacherDelegate1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTeacherDelegate1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UTeacherDelegate1>()
	{
		return UTeacherDelegate1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTeacherDelegate1);
	UTeacherDelegate1::~UTeacherDelegate1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherDelegate1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherDelegate1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTeacherDelegate1, UTeacherDelegate1::StaticClass, TEXT("UTeacherDelegate1"), &Z_Registration_Info_UClass_UTeacherDelegate1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeacherDelegate1), 683404580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherDelegate1_h_3059936942(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherDelegate1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_TeacherDelegate1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
