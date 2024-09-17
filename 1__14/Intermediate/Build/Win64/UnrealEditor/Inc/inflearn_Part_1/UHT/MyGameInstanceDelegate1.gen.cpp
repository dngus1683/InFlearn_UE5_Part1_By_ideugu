// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/MyGameInstanceDelegate1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceDelegate1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceDelegate1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceDelegate1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UMyGameInstanceDelegate1::StaticRegisterNativesUMyGameInstanceDelegate1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceDelegate1);
	UClass* Z_Construct_UClass_UMyGameInstanceDelegate1_NoRegister()
	{
		return UMyGameInstanceDelegate1::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceDelegate1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchoolName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SchoolName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* CouseInfo \xea\xb0\x9d\xec\xb2\xb4\xec\x99\x80 (Student, Teacher, Staff) \xea\xb0\x9d\xec\xb2\xb4\xeb\x8a\x94 \xec\x84\x9c\xeb\xa1\x9c include \xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c => \xec\x84\x9c\xeb\xa1\x9c \xec\x99\x84\xec\xa0\x84\xed\x9e\x88 \xeb\x8f\x85\xeb\xa6\xbd\xec\xa0\x81.\n* \xec\x9d\xb4 \xec\x82\xac\xec\x9d\xb4\xeb\xa5\xbc \xec\xa4\x91\xec\x9e\xac\xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94 \xec\x97\xad\xed\x95\xa0\xec\x9d\x84 \xed\x95\x98\xeb\x8a\x94 \xea\xb0\x9d\xec\xb2\xb4\xea\xb0\x80 \xed\x95\x84\xec\x9a\x94. \n* GameInstance\xea\xb0\x80 \xea\xb7\xb8 \xec\x97\xad\xed\x95\xa0\xec\x9d\x84 \xed\x95\x98\xea\xb8\xb0\xeb\xa1\x9c \xed\x95\xa8.\n\n */" },
#endif
		{ "IncludePath", "MyGameInstanceDelegate1.h" },
		{ "ModuleRelativePath", "MyGameInstanceDelegate1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* CouseInfo \xea\xb0\x9d\xec\xb2\xb4\xec\x99\x80 (Student, Teacher, Staff) \xea\xb0\x9d\xec\xb2\xb4\xeb\x8a\x94 \xec\x84\x9c\xeb\xa1\x9c include \xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c => \xec\x84\x9c\xeb\xa1\x9c \xec\x99\x84\xec\xa0\x84\xed\x9e\x88 \xeb\x8f\x85\xeb\xa6\xbd\xec\xa0\x81.\n* \xec\x9d\xb4 \xec\x82\xac\xec\x9d\xb4\xeb\xa5\xbc \xec\xa4\x91\xec\x9e\xac\xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94 \xec\x97\xad\xed\x95\xa0\xec\x9d\x84 \xed\x95\x98\xeb\x8a\x94 \xea\xb0\x9d\xec\xb2\xb4\xea\xb0\x80 \xed\x95\x84\xec\x9a\x94.\n* GameInstance\xea\xb0\x80 \xea\xb7\xb8 \xec\x97\xad\xed\x95\xa0\xec\x9d\x84 \xed\x95\x98\xea\xb8\xb0\xeb\xa1\x9c \xed\x95\xa8." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::NewProp_SchoolName_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstanceDelegate1.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::NewProp_SchoolName = { "SchoolName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstanceDelegate1, SchoolName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::NewProp_SchoolName_MetaData), Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::NewProp_SchoolName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::NewProp_SchoolName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceDelegate1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::ClassParams = {
		&UMyGameInstanceDelegate1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyGameInstanceDelegate1()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceDelegate1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceDelegate1.OuterSingleton, Z_Construct_UClass_UMyGameInstanceDelegate1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceDelegate1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UMyGameInstanceDelegate1>()
	{
		return UMyGameInstanceDelegate1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceDelegate1);
	UMyGameInstanceDelegate1::~UMyGameInstanceDelegate1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceDelegate1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceDelegate1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceDelegate1, UMyGameInstanceDelegate1::StaticClass, TEXT("UMyGameInstanceDelegate1"), &Z_Registration_Info_UClass_UMyGameInstanceDelegate1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceDelegate1), 1055855369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceDelegate1_h_1231278058(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceDelegate1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceDelegate1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
