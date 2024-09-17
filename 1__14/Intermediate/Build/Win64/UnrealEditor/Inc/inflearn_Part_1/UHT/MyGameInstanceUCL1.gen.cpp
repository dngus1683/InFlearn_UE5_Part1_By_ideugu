// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/MyGameInstanceUCL1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceUCL1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceUCL1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UMyGameInstanceUCL1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UMyGameInstanceUCL1::StaticRegisterNativesUMyGameInstanceUCL1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceUCL1);
	UClass* Z_Construct_UClass_UMyGameInstanceUCL1_NoRegister()
	{
		return UMyGameInstanceUCL1::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceUCL1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstanceUCL1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceUCL1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceUCL1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstanceUCL1.h" },
		{ "ModuleRelativePath", "MyGameInstanceUCL1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceUCL1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceUCL1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceUCL1_Statics::ClassParams = {
		&UMyGameInstanceUCL1::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceUCL1_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstanceUCL1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyGameInstanceUCL1()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceUCL1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceUCL1.OuterSingleton, Z_Construct_UClass_UMyGameInstanceUCL1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceUCL1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UMyGameInstanceUCL1>()
	{
		return UMyGameInstanceUCL1::StaticClass();
	}
	UMyGameInstanceUCL1::UMyGameInstanceUCL1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceUCL1);
	UMyGameInstanceUCL1::~UMyGameInstanceUCL1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceUCL1, UMyGameInstanceUCL1::StaticClass, TEXT("UMyGameInstanceUCL1"), &Z_Registration_Info_UClass_UMyGameInstanceUCL1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceUCL1), 4167240108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL1_h_2463005752(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_MyGameInstanceUCL1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
