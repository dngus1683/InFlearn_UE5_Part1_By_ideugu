// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/StudentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudentInterface() {}
// Cross Module References
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonInterface1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentInterface();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UStudentInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UStudentInterface::StaticRegisterNativesUStudentInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStudentInterface);
	UClass* Z_Construct_UClass_UStudentInterface_NoRegister()
	{
		return UStudentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStudentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStudentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonInterface1,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStudentInterface_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StudentInterface.h" },
		{ "ModuleRelativePath", "StudentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStudentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStudentInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStudentInterface_Statics::ClassParams = {
		&UStudentInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UStudentInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStudentInterface()
	{
		if (!Z_Registration_Info_UClass_UStudentInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStudentInterface.OuterSingleton, Z_Construct_UClass_UStudentInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStudentInterface.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UStudentInterface>()
	{
		return UStudentInterface::StaticClass();
	}
	UStudentInterface::UStudentInterface() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStudentInterface);
	UStudentInterface::~UStudentInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStudentInterface, UStudentInterface::StaticClass, TEXT("UStudentInterface"), &Z_Registration_Info_UClass_UStudentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStudentInterface), 3309181770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface_h_3581830440(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_StudentInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
