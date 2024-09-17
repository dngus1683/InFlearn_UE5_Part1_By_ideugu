// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/CouseInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCouseInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UCouseInfo();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UCouseInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UCouseInfo::StaticRegisterNativesUCouseInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCouseInfo);
	UClass* Z_Construct_UClass_UCouseInfo_NoRegister()
	{
		return UCouseInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCouseInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCouseInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCouseInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouseInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CouseInfo.h" },
		{ "ModuleRelativePath", "CouseInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCouseInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCouseInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCouseInfo_Statics::ClassParams = {
		&UCouseInfo::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCouseInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCouseInfo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCouseInfo()
	{
		if (!Z_Registration_Info_UClass_UCouseInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCouseInfo.OuterSingleton, Z_Construct_UClass_UCouseInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCouseInfo.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UCouseInfo>()
	{
		return UCouseInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCouseInfo);
	UCouseInfo::~UCouseInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_CouseInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_CouseInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCouseInfo, UCouseInfo::StaticClass, TEXT("UCouseInfo"), &Z_Registration_Info_UClass_UCouseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCouseInfo), 3578320515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_CouseInfo_h_917819028(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_CouseInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_CouseInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
