// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457_DonkeyKong/DisparoDecorador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisparoDecorador() {}
// Cross Module References
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ADisparoDecorador_NoRegister();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ADisparoDecorador();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ADecoradorBase();
	UPackage* Z_Construct_UPackage__Script_SIS457_DonkeyKong();
// End Cross Module References
	void ADisparoDecorador::StaticRegisterNativesADisparoDecorador()
	{
	}
	UClass* Z_Construct_UClass_ADisparoDecorador_NoRegister()
	{
		return ADisparoDecorador::StaticClass();
	}
	struct Z_Construct_UClass_ADisparoDecorador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisparoDecorador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecoradorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoDecorador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DisparoDecorador.h" },
		{ "ModuleRelativePath", "DisparoDecorador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisparoDecorador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisparoDecorador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisparoDecorador_Statics::ClassParams = {
		&ADisparoDecorador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisparoDecorador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoDecorador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisparoDecorador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisparoDecorador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisparoDecorador, 2326721190);
	template<> SIS457_DONKEYKONG_API UClass* StaticClass<ADisparoDecorador>()
	{
		return ADisparoDecorador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisparoDecorador(Z_Construct_UClass_ADisparoDecorador, &ADisparoDecorador::StaticClass, TEXT("/Script/SIS457_DonkeyKong"), TEXT("ADisparoDecorador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisparoDecorador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
