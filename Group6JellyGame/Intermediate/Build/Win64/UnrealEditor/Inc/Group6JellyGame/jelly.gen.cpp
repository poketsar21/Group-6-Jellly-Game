// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group6JellyGame/jelly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodejelly() {}
// Cross Module References
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_Ajelly_NoRegister();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_Ajelly();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Group6JellyGame();
// End Cross Module References
	void Ajelly::StaticRegisterNativesAjelly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ajelly);
	UClass* Z_Construct_UClass_Ajelly_NoRegister()
	{
		return Ajelly::StaticClass();
	}
	struct Z_Construct_UClass_Ajelly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ajelly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajelly_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "jelly.h" },
		{ "ModuleRelativePath", "jelly.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ajelly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ajelly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ajelly_Statics::ClassParams = {
		&Ajelly::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ajelly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ajelly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ajelly()
	{
		if (!Z_Registration_Info_UClass_Ajelly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ajelly.OuterSingleton, Z_Construct_UClass_Ajelly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ajelly.OuterSingleton;
	}
	template<> GROUP6JELLYGAME_API UClass* StaticClass<Ajelly>()
	{
		return Ajelly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ajelly);
	struct Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_jelly_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_jelly_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ajelly, Ajelly::StaticClass, TEXT("Ajelly"), &Z_Registration_Info_UClass_Ajelly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ajelly), 2035175918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_jelly_h_2197891661(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_jelly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_jelly_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
