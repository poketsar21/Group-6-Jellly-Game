// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group6JellyGame/MyGroup6JellyGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGroup6JellyGameCharacter() {}
// Cross Module References
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AMyGroup6JellyGameCharacter_NoRegister();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AMyGroup6JellyGameCharacter();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AGroup6JellyGameCharacter();
	UPackage* Z_Construct_UPackage__Script_Group6JellyGame();
// End Cross Module References
	void AMyGroup6JellyGameCharacter::StaticRegisterNativesAMyGroup6JellyGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGroup6JellyGameCharacter);
	UClass* Z_Construct_UClass_AMyGroup6JellyGameCharacter_NoRegister()
	{
		return AMyGroup6JellyGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGroup6JellyGameCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyGroup6JellyGameCharacter.h" },
		{ "ModuleRelativePath", "MyGroup6JellyGameCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGroup6JellyGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics::ClassParams = {
		&AMyGroup6JellyGameCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGroup6JellyGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyGroup6JellyGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGroup6JellyGameCharacter.OuterSingleton, Z_Construct_UClass_AMyGroup6JellyGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGroup6JellyGameCharacter.OuterSingleton;
	}
	template<> GROUP6JELLYGAME_API UClass* StaticClass<AMyGroup6JellyGameCharacter>()
	{
		return AMyGroup6JellyGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGroup6JellyGameCharacter);
	struct Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_MyGroup6JellyGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_MyGroup6JellyGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGroup6JellyGameCharacter, AMyGroup6JellyGameCharacter::StaticClass, TEXT("AMyGroup6JellyGameCharacter"), &Z_Registration_Info_UClass_AMyGroup6JellyGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGroup6JellyGameCharacter), 1555435999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_MyGroup6JellyGameCharacter_h_2713974477(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_MyGroup6JellyGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_MyGroup6JellyGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS