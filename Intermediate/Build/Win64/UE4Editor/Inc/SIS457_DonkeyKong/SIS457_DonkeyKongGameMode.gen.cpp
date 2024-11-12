// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457_DonkeyKong/SIS457_DonkeyKongGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457_DonkeyKongGameMode() {}
// Cross Module References
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ASIS457_DonkeyKongGameMode_NoRegister();
	SIS457_DONKEYKONG_API UClass* Z_Construct_UClass_ASIS457_DonkeyKongGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SIS457_DonkeyKong();
// End Cross Module References
	void ASIS457_DonkeyKongGameMode::StaticRegisterNativesASIS457_DonkeyKongGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASIS457_DonkeyKongGameMode_NoRegister()
	{
		return ASIS457_DonkeyKongGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SIS457_DonkeyKongGameMode.h" },
		{ "ModuleRelativePath", "SIS457_DonkeyKongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457_DonkeyKongGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics::ClassParams = {
		&ASIS457_DonkeyKongGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457_DonkeyKongGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASIS457_DonkeyKongGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASIS457_DonkeyKongGameMode, 1251553545);
	template<> SIS457_DONKEYKONG_API UClass* StaticClass<ASIS457_DonkeyKongGameMode>()
	{
		return ASIS457_DonkeyKongGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASIS457_DonkeyKongGameMode(Z_Construct_UClass_ASIS457_DonkeyKongGameMode, &ASIS457_DonkeyKongGameMode::StaticClass, TEXT("/Script/SIS457_DonkeyKong"), TEXT("ASIS457_DonkeyKongGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457_DonkeyKongGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
