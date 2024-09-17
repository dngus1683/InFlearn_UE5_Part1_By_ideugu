// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/StudentPackage1.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudentPackage1() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentPackage1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentPackage1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UStudentPackage1::StaticRegisterNativesUStudentPackage1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStudentPackage1);
	UClass* Z_Construct_UClass_UStudentPackage1_NoRegister()
	{
		return UStudentPackage1::StaticClass();
	}
	struct Z_Construct_UClass_UStudentPackage1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStudentPackage1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentPackage1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStudentPackage1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StudentPackage1.h" },
		{ "ModuleRelativePath", "StudentPackage1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Order_MetaData[] = {
		{ "ModuleRelativePath", "StudentPackage1.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStudentPackage1, Order), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Order_MetaData), Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Order_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "StudentPackage1.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStudentPackage1, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStudentPackage1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Order,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStudentPackage1_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStudentPackage1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStudentPackage1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStudentPackage1_Statics::ClassParams = {
		&UStudentPackage1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStudentPackage1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStudentPackage1_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentPackage1_Statics::Class_MetaDataParams), Z_Construct_UClass_UStudentPackage1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentPackage1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStudentPackage1()
	{
		if (!Z_Registration_Info_UClass_UStudentPackage1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStudentPackage1.OuterSingleton, Z_Construct_UClass_UStudentPackage1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStudentPackage1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UStudentPackage1>()
	{
		return UStudentPackage1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStudentPackage1);
	UStudentPackage1::~UStudentPackage1() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStudentPackage1)
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentPackage1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentPackage1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStudentPackage1, UStudentPackage1::StaticClass, TEXT("UStudentPackage1"), &Z_Registration_Info_UClass_UStudentPackage1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStudentPackage1), 1948031350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentPackage1_h_941958240(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentPackage1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentPackage1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
