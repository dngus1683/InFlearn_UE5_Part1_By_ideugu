// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/StaffInterface1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaffInterface1() {}
// Cross Module References
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStaffInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStaffInterface1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UStaffInterface1::StaticRegisterNativesUStaffInterface1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaffInterface1);
	UClass* Z_Construct_UClass_UStaffInterface1_NoRegister()
	{
		return UStaffInterface1::StaticClass();
	}
	struct Z_Construct_UClass_UStaffInterface1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaffInterface1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonInterface1,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaffInterface1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaffInterface1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StaffInterface1.h" },
		{ "ModuleRelativePath", "StaffInterface1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaffInterface1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaffInterface1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaffInterface1_Statics::ClassParams = {
		&UStaffInterface1::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaffInterface1_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaffInterface1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStaffInterface1()
	{
		if (!Z_Registration_Info_UClass_UStaffInterface1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaffInterface1.OuterSingleton, Z_Construct_UClass_UStaffInterface1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaffInterface1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UStaffInterface1>()
	{
		return UStaffInterface1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaffInterface1);
	UStaffInterface1::~UStaffInterface1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StaffInterface1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StaffInterface1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaffInterface1, UStaffInterface1::StaticClass, TEXT("UStaffInterface1"), &Z_Registration_Info_UClass_UStaffInterface1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaffInterface1), 2683950434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StaffInterface1_h_2134742201(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StaffInterface1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StaffInterface1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
