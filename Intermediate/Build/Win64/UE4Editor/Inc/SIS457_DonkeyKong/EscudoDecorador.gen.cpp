// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457_DonkeyKong/EscudoDecorador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoDecorador() {}
// Cross Module References
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_AEscudoDecorador_NoRegister();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_AEscudoDecorador();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ADecoradorBase();
	UPackage* Z_Construct_UPackage__Script_SIS457_DonkeyKong();
// End Cross Module References
	void AEscudoDecorador::StaticRegisterNativesAEscudoDecorador()
	{
	}
	UClass* Z_Construct_UClass_AEscudoDecorador_NoRegister()
	{
		return AEscudoDecorador::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoDecorador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoDecorador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecoradorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoDecorador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscudoDecorador.h" },
		{ "ModuleRelativePath", "EscudoDecorador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoDecorador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoDecorador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoDecorador_Statics::ClassParams = {
		&AEscudoDecorador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscudoDecorador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoDecorador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoDecorador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoDecorador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoDecorador, 1446568373);
	template<> SIS457_DONKEYKONG_API UClass* StaticClass<AEscudoDecorador>()
	{
		return AEscudoDecorador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoDecorador(Z_Construct_UClass_AEscudoDecorador, &AEscudoDecorador::StaticClass, TEXT("/Script/SIS457_DonkeyKong"), TEXT("AEscudoDecorador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoDecorador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
