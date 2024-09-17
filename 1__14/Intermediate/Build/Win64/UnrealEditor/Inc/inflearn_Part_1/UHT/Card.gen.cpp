// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "inflearn_Part_1/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UCard();
	INFLEARN_PART_1_API UClass* Z_Construct_UClass_UCard_NoRegister();
	INFLEARN_PART_1_API UEnum* Z_Construct_UEnum_inflearn_Part_1_ECardType();
	UPackage* Z_Construct_UPackage__Script_inflearn_Part_1();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardType;
	static UEnum* ECardType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECardType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECardType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_inflearn_Part_1_ECardType, (UObject*)Z_Construct_UPackage__Script_inflearn_Part_1(), TEXT("ECardType"));
		}
		return Z_Registration_Info_UEnum_ECardType.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UEnum* StaticEnum<ECardType>()
	{
		return ECardType_StaticEnum();
	}
	struct Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::Enumerators[] = {
		{ "ECardType::Student", (int64)ECardType::Student },
		{ "ECardType::Teacher", (int64)ECardType::Teacher },
		{ "ECardType::Staff", (int64)ECardType::Staff },
		{ "ECardType::Invalid", (int64)ECardType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x97\xb4\xea\xb2\xa8\xed\x98\x95 enum \xec\xa7\x80\xec\x9b\x90. \xec\x97\xb4\xea\xb1\xb0\xed\x98\x95\xec\x9d\x80 \xed\x95\xad\xec\x83\x81 E \xec\xa0\x91\xeb\x91\x90\xec\x82\xac.\n// UEUM()\xec\x9d\x84 \xed\x86\xb5\xed\x95\xb4, \xed\x95\xb4\xeb\x8b\xb9 \xec\x97\xb4\xea\xb1\xb0\xed\x98\x95 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x97\x94\xec\xa7\x84\xec\x9d\xb4 \xed\x8c\x8c\xec\x95\x85\xed\x95\x98\xea\xb2\x8c \xeb\x90\x98\xea\xb3\xa0, \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4. => \xeb\xa7\xa4\xed\x83\x80 \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\x84\xa3\xec\x9d\x84 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4.\n" },
#endif
		{ "Invalid.Name", "ECardType::Invalid" },
		{ "ModuleRelativePath", "Card.h" },
		{ "Staff.DisplayName", "For Staff" },
		{ "Staff.Name", "ECardType::Staff" },
		{ "Student.DisplayName", "For Student" },
		{ "Student.Name", "ECardType::Student" },
		{ "Teacher.DisplayName", "For Teacher" },
		{ "Teacher.Name", "ECardType::Teacher" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xb4\xea\xb2\xa8\xed\x98\x95 enum \xec\xa7\x80\xec\x9b\x90. \xec\x97\xb4\xea\xb1\xb0\xed\x98\x95\xec\x9d\x80 \xed\x95\xad\xec\x83\x81 E \xec\xa0\x91\xeb\x91\x90\xec\x82\xac.\nUEUM()\xec\x9d\x84 \xed\x86\xb5\xed\x95\xb4, \xed\x95\xb4\xeb\x8b\xb9 \xec\x97\xb4\xea\xb1\xb0\xed\x98\x95 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x97\x94\xec\xa7\x84\xec\x9d\xb4 \xed\x8c\x8c\xec\x95\x85\xed\x95\x98\xea\xb2\x8c \xeb\x90\x98\xea\xb3\xa0, \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4. => \xeb\xa7\xa4\xed\x83\x80 \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\x84\xa3\xec\x9d\x84 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_inflearn_Part_1,
		nullptr,
		"ECardType",
		"ECardType",
		Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_inflearn_Part_1_ECardType()
	{
		if (!Z_Registration_Info_UEnum_ECardType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardType.InnerSingleton, Z_Construct_UEnum_inflearn_Part_1_ECardType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECardType.InnerSingleton;
	}
	void UCard::StaticRegisterNativesUCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCard);
	UClass* Z_Construct_UClass_UCard_NoRegister()
	{
		return UCard::StaticClass();
	}
	struct Z_Construct_UClass_UCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_inflearn_Part_1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Card.h" },
		{ "ModuleRelativePath", "Card.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCard_Statics::NewProp_CardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCard_Statics::NewProp_CardType_MetaData[] = {
		{ "ModuleRelativePath", "Card.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_CardType = { "CardType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, CardType), Z_Construct_UEnum_inflearn_Part_1_ECardType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::NewProp_CardType_MetaData), Z_Construct_UClass_UCard_Statics::NewProp_CardType_MetaData) }; // 1963984766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCard_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Card.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::NewProp_Id_MetaData), Z_Construct_UClass_UCard_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_CardType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_CardType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCard_Statics::ClassParams = {
		&UCard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::Class_MetaDataParams), Z_Construct_UClass_UCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCard()
	{
		if (!Z_Registration_Info_UClass_UCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCard.OuterSingleton, Z_Construct_UClass_UCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCard.OuterSingleton;
	}
	template<> INFLEARN_PART_1_API UClass* StaticClass<UCard>()
	{
		return UCard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCard);
	UCard::~UCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_Statics::EnumInfo[] = {
		{ ECardType_StaticEnum, TEXT("ECardType"), &Z_Registration_Info_UEnum_ECardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1963984766U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCard, UCard::StaticClass, TEXT("UCard"), &Z_Registration_Info_UClass_UCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCard), 2357610304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_3258523723(TEXT("/Script/inflearn_Part_1"),
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jangwh_Documents_Unreal_Projects_inflearn_Part_1_1__14_Source_inflearn_Part_1_Card_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
