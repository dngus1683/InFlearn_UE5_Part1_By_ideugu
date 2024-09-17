// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/MyGameInstanceInterface1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceInterface1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceInterface1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UMyGameInstanceInterface1::StaticRegisterNativesUMyGameInstanceInterface1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceInterface1);
	UClass* Z_Construct_UClass_UMyGameInstanceInterface1_NoRegister()
	{
		return UMyGameInstanceInterface1::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceInterface1_Statics
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
	UObject* (*const Z_Construct_UClass_UMyGameInstanceInterface1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceInterface1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceInterface1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstanceInterface1.h" },
		{ "ModuleRelativePath", "MyGameInstanceInterface1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceInterface1_Statics::NewProp_SchoolName_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstanceInterface1.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGameInstanceInterface1_Statics::NewProp_SchoolName = { "SchoolName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstanceInterface1, SchoolName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceInterface1_Statics::NewProp_SchoolName_MetaData), Z_Construct_UClass_UMyGameInstanceInterface1_Statics::NewProp_SchoolName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstanceInterface1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstanceInterface1_Statics::NewProp_SchoolName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceInterface1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceInterface1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceInterface1_Statics::ClassParams = {
		&UMyGameInstanceInterface1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyGameInstanceInterface1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceInterface1_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceInterface1_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstanceInterface1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceInterface1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyGameInstanceInterface1()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceInterface1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceInterface1.OuterSingleton, Z_Construct_UClass_UMyGameInstanceInterface1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceInterface1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UMyGameInstanceInterface1>()
	{
		return UMyGameInstanceInterface1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceInterface1);
	UMyGameInstanceInterface1::~UMyGameInstanceInterface1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceInterface1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceInterface1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceInterface1, UMyGameInstanceInterface1::StaticClass, TEXT("UMyGameInstanceInterface1"), &Z_Registration_Info_UClass_UMyGameInstanceInterface1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceInterface1), 442944027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceInterface1_h_1682091282(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceInterface1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceInterface1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
