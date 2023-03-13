// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group6JellyGame/Group6JellyGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroup6JellyGameGameMode() {}
// Cross Module References
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AGroup6JellyGameGameMode_NoRegister();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AGroup6JellyGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Group6JellyGame();
// End Cross Module References
	void AGroup6JellyGameGameMode::StaticRegisterNativesAGroup6JellyGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroup6JellyGameGameMode);
	UClass* Z_Construct_UClass_AGroup6JellyGameGameMode_NoRegister()
	{
		return AGroup6JellyGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGroup6JellyGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroup6JellyGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Group6JellyGameGameMode.h" },
		{ "ModuleRelativePath", "Group6JellyGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroup6JellyGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroup6JellyGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroup6JellyGameGameMode_Statics::ClassParams = {
		&AGroup6JellyGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroup6JellyGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AGroup6JellyGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroup6JellyGameGameMode.OuterSingleton, Z_Construct_UClass_AGroup6JellyGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGroup6JellyGameGameMode.OuterSingleton;
	}
	template<> GROUP6JELLYGAME_API UClass* StaticClass<AGroup6JellyGameGameMode>()
	{
		return AGroup6JellyGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroup6JellyGameGameMode);
	struct Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGroup6JellyGameGameMode, AGroup6JellyGameGameMode::StaticClass, TEXT("AGroup6JellyGameGameMode"), &Z_Registration_Info_UClass_AGroup6JellyGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroup6JellyGameGameMode), 2836779497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameGameMode_h_800932723(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
