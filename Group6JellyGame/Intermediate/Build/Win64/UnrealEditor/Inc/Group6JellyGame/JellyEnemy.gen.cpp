// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group6JellyGame/JellyEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJellyEnemy() {}
// Cross Module References
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AJellyEnemy_NoRegister();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AJellyEnemy();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AGroup6JellyGameCharacter();
	UPackage* Z_Construct_UPackage__Script_Group6JellyGame();
// End Cross Module References
	void AJellyEnemy::StaticRegisterNativesAJellyEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJellyEnemy);
	UClass* Z_Construct_UClass_AJellyEnemy_NoRegister()
	{
		return AJellyEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AJellyEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJellyEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGroup6JellyGameCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJellyEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JellyEnemy.h" },
		{ "ModuleRelativePath", "JellyEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJellyEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJellyEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJellyEnemy_Statics::ClassParams = {
		&AJellyEnemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJellyEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJellyEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJellyEnemy()
	{
		if (!Z_Registration_Info_UClass_AJellyEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJellyEnemy.OuterSingleton, Z_Construct_UClass_AJellyEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJellyEnemy.OuterSingleton;
	}
	template<> GROUP6JELLYGAME_API UClass* StaticClass<AJellyEnemy>()
	{
		return AJellyEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJellyEnemy);
	struct Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_JellyEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_JellyEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJellyEnemy, AJellyEnemy::StaticClass, TEXT("AJellyEnemy"), &Z_Registration_Info_UClass_AJellyEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJellyEnemy), 2426225471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_JellyEnemy_h_2948931638(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_JellyEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_JellyEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
