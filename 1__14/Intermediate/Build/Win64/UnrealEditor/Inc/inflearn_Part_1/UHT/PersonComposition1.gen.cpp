// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/PersonComposition1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonComposition1() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UCard_NoRegister();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonComposition1();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UPersonComposition1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	void UPersonComposition1::StaticRegisterNativesUPersonComposition1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonComposition1);
	UClass* Z_Construct_UClass_UPersonComposition1_NoRegister()
	{
		return UPersonComposition1::StaticClass();
	}
	struct Z_Construct_UClass_UPersonComposition1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Card_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Card;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonComposition1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonComposition1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonComposition1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PersonComposition1.h" },
		{ "ModuleRelativePath", "PersonComposition1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "PersonComposition1.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersonComposition1, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Card_MetaData[] = {
		{ "ModuleRelativePath", "PersonComposition1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersonComposition1, Card), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Card_MetaData), Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Card_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonComposition1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonComposition1_Statics::NewProp_Card,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonComposition1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonComposition1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonComposition1_Statics::ClassParams = {
		&UPersonComposition1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonComposition1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPersonComposition1_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonComposition1_Statics::Class_MetaDataParams), Z_Construct_UClass_UPersonComposition1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonComposition1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPersonComposition1()
	{
		if (!Z_Registration_Info_UClass_UPersonComposition1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonComposition1.OuterSingleton, Z_Construct_UClass_UPersonComposition1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonComposition1.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UPersonComposition1>()
	{
		return UPersonComposition1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonComposition1);
	UPersonComposition1::~UPersonComposition1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_PersonComposition1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_PersonComposition1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonComposition1, UPersonComposition1::StaticClass, TEXT("UPersonComposition1"), &Z_Registration_Info_UClass_UPersonComposition1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonComposition1), 2519855326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_PersonComposition1_h_2257822938(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_PersonComposition1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_PersonComposition1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
