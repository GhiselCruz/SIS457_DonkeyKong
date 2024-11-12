// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457_DonkeyKong/DecoradorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorInterface() {}
// Cross Module References
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_UDecoradorInterface_NoRegister();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_UDecoradorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SIS457_DonkeyKong();
// End Cross Module References
	void UDecoradorInterface::StaticRegisterNativesUDecoradorInterface()
	{
	}
	UClass* Z_Construct_UClass_UDecoradorInterface_NoRegister()
	{
		return UDecoradorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDecoradorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecoradorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecoradorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "DecoradorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecoradorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDecoradorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecoradorInterface_Statics::ClassParams = {
		&UDecoradorInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDecoradorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDecoradorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecoradorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecoradorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecoradorInterface, 18821871);
	template<> SIS457_DONKEYKONG_API UClass* StaticClass<UDecoradorInterface>()
	{
		return UDecoradorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecoradorInterface(Z_Construct_UClass_UDecoradorInterface, &UDecoradorInterface::StaticClass, TEXT("/Script/SIS457_DonkeyKong"), TEXT("UDecoradorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecoradorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
