// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457_DonkeyKong/DecoradorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorBase() {}
// Cross Module References
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ADecoradorBase_NoRegister();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ADecoradorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SIS457_DonkeyKong();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_UDecoradorInterface_NoRegister();
// End Cross Module References
	void ADecoradorBase::StaticRegisterNativesADecoradorBase()
	{
	}
	UClass* Z_Construct_UClass_ADecoradorBase_NoRegister()
	{
		return ADecoradorBase::StaticClass();
	}
	struct Z_Construct_UClass_ADecoradorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoradorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoradorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecoradorBase.h" },
		{ "ModuleRelativePath", "DecoradorBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecoradorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDecoradorInterface_NoRegister, (int32)VTABLE_OFFSET(ADecoradorBase, IDecoradorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoradorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoradorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoradorBase_Statics::ClassParams = {
		&ADecoradorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADecoradorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoradorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoradorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoradorBase, 833392767);
	template<> SIS457_DONKEYKONG_API UClass* StaticClass<ADecoradorBase>()
	{
		return ADecoradorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoradorBase(Z_Construct_UClass_ADecoradorBase, &ADecoradorBase::StaticClass, TEXT("/Script/SIS457_DonkeyKong"), TEXT("ADecoradorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoradorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
