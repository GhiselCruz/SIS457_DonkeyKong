// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457_DonkeyKong/Escudo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudo() {}
// Cross Module References
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_AEscudo_NoRegister();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_AEscudo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SIS457_DonkeyKong();
// End Cross Module References
	void AEscudo::StaticRegisterNativesAEscudo()
	{
	}
	UClass* Z_Construct_UClass_AEscudo_NoRegister()
	{
		return AEscudo::StaticClass();
	}
	struct Z_Construct_UClass_AEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escudo.h" },
		{ "ModuleRelativePath", "Escudo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudo_Statics::ClassParams = {
		&AEscudo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudo, 3137250968);
	template<> SIS457_DONKEYKONG_API UClass* StaticClass<AEscudo>()
	{
		return AEscudo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudo(Z_Construct_UClass_AEscudo, &AEscudo::StaticClass, TEXT("/Script/SIS457_DonkeyKong"), TEXT("AEscudo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
