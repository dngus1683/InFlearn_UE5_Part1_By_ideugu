// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/MyGameInstanceUCL2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceUCL2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceUCL2();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceUCL2_NoRegister();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentUCL2_NoRegister();
	INFLEARN_PART_1_API UScriptStruct* Z_Construct_UScriptStruct_FStudentData();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StudentData;
class UScriptStruct* FStudentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StudentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StudentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStudentData, (UObject*)Z_Construct_UPackage__Script_inflearn_Part_1(), TEXT("StudentData"));
	}
	return Z_Registration_Info_UScriptStruct_StudentData.OuterSingleton;
}
template<> INFLEARN_PART_1_API UScriptStruct* StaticStruct<FStudentData>()
{
	return FStudentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStudentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStudentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstanceUCL2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStudentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStudentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstanceUCL2.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStudentData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Order_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstanceUCL2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStudentData, Order), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Order_MetaData), Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Order_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStudentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStudentData_Statics::NewProp_Order,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStudentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
		nullptr,
		&NewStructOps,
		"StudentData",
		Z_Construct_UScriptStruct_FStudentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStudentData_Statics::PropPointers),
		sizeof(FStudentData),
		alignof(FStudentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStudentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStudentData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStudentData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStudentData()
	{
		if (!Z_Registration_Info_UScriptStruct_StudentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StudentData.InnerSingleton, Z_Construct_UScriptStruct_FStudentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StudentData.InnerSingleton;
	}
	void UMyGameInstanceUCL2::StaticRegisterNativesUMyGameInstanceUCL2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceUCL2);
	UClass* Z_Construct_UClass_UMyGameInstanceUCL2_NoRegister()
	{
		return UMyGameInstanceUCL2::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceUCL2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Students_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Students_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Students;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstanceUCL2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceUCL2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceUCL2_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstanceUCL2.h" },
		{ "ModuleRelativePath", "MyGameInstanceUCL2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMyGameInstanceUCL2_Statics::NewProp_Students_Inner = { "Students", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStudentUCL2_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceUCL2_Statics::NewProp_Students_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TArray\xec\x97\x90\xea\xb2\x8c \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xa5\xbc \xea\xb4\x80\xeb\x9d\xbc\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xed\x95\x9c\xeb\x8b\xa4\xeb\xa9\xb4, \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xec\x97\x94\xec\xa7\x84\xec\x9d\xb4 \xec\x9e\x90\xeb\x8f\x99\xec\x9c\xbc\xeb\xa1\x9c \xeb\xa9\x94\xeb\xaa\xa8\xeb\xa6\xac\xeb\xa5\xbc \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d UPROPERTY()\xeb\xa5\xbc \xeb\xb6\x99\xec\x97\xac\xec\x95\xbc \xed\x95\x9c\xeb\x8b\xa4.\n// \xec\x9c\x84 StudentsData\xec\x9d\x98 \xea\xb2\xbd\xec\x9a\xb0, \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xec\x9e\x90\xec\xb2\xb4\xeb\xa5\xbc \xea\xb4\x80\xeb\xa6\xac\xed\x95\x98\xeb\x8a\x94 \xeb\xb0\xb0\xec\x97\xb4\xec\x9d\xb4\xeb\xaf\x80\xeb\xa1\x9c UPROPERTY()\xea\xb0\x80 \xed\x95\x84\xec\x88\x98\xeb\x8a\x94 \xec\x95\x84\xeb\x8b\x88\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstanceUCL2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TArray\xec\x97\x90\xea\xb2\x8c \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xa5\xbc \xea\xb4\x80\xeb\x9d\xbc\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xed\x95\x9c\xeb\x8b\xa4\xeb\xa9\xb4, \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xec\x97\x94\xec\xa7\x84\xec\x9d\xb4 \xec\x9e\x90\xeb\x8f\x99\xec\x9c\xbc\xeb\xa1\x9c \xeb\xa9\x94\xeb\xaa\xa8\xeb\xa6\xac\xeb\xa5\xbc \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d UPROPERTY()\xeb\xa5\xbc \xeb\xb6\x99\xec\x97\xac\xec\x95\xbc \xed\x95\x9c\xeb\x8b\xa4.\n\xec\x9c\x84 StudentsData\xec\x9d\x98 \xea\xb2\xbd\xec\x9a\xb0, \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xec\x9e\x90\xec\xb2\xb4\xeb\xa5\xbc \xea\xb4\x80\xeb\xa6\xac\xed\x95\x98\xeb\x8a\x94 \xeb\xb0\xb0\xec\x97\xb4\xec\x9d\xb4\xeb\xaf\x80\xeb\xa1\x9c UPROPERTY()\xea\xb0\x80 \xed\x95\x84\xec\x88\x98\xeb\x8a\x94 \xec\x95\x84\xeb\x8b\x88\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstanceUCL2_Statics::NewProp_Students = { "Students", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstanceUCL2, Students), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceUCL2_Statics::NewProp_Students_MetaData), Z_Construct_UClass_UMyGameInstanceUCL2_Statics::NewProp_Students_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstanceUCL2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstanceUCL2_Statics::NewProp_Students_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstanceUCL2_Statics::NewProp_Students,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceUCL2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceUCL2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceUCL2_Statics::ClassParams = {
		&UMyGameInstanceUCL2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyGameInstanceUCL2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceUCL2_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceUCL2_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstanceUCL2_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceUCL2_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyGameInstanceUCL2()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceUCL2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceUCL2.OuterSingleton, Z_Construct_UClass_UMyGameInstanceUCL2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceUCL2.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UMyGameInstanceUCL2>()
	{
		return UMyGameInstanceUCL2::StaticClass();
	}
	UMyGameInstanceUCL2::UMyGameInstanceUCL2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceUCL2);
	UMyGameInstanceUCL2::~UMyGameInstanceUCL2() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_Statics::ScriptStructInfo[] = {
		{ FStudentData::StaticStruct, Z_Construct_UScriptStruct_FStudentData_Statics::NewStructOps, TEXT("StudentData"), &Z_Registration_Info_UScriptStruct_StudentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStudentData), 3317932972U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceUCL2, UMyGameInstanceUCL2::StaticClass, TEXT("UMyGameInstanceUCL2"), &Z_Registration_Info_UClass_UMyGameInstanceUCL2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceUCL2), 2467905189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_1486016681(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL2_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
