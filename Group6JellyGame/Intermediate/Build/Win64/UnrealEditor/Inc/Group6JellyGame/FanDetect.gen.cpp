// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group6JellyGame/FanDetect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFanDetect() {}
// Cross Module References
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AFanDetect_NoRegister();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AFanDetect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Group6JellyGame();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AFanDetect::StaticRegisterNativesAFanDetect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFanDetect);
	UClass* Z_Construct_UClass_AFanDetect_NoRegister()
	{
		return AFanDetect::StaticClass();
	}
	struct Z_Construct_UClass_AFanDetect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistBetweenLines_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistBetweenLines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFanDetect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanDetect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FanDetect.h" },
		{ "ModuleRelativePath", "FanDetect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanDetect_Statics::NewProp_DefaultRoot_MetaData[] = {
		{ "Category", "FanDetect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FanDetect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFanDetect_Statics::NewProp_DefaultRoot = { "DefaultRoot", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFanDetect, DefaultRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFanDetect_Statics::NewProp_DefaultRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::NewProp_DefaultRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanDetect_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FanDetect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFanDetect_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFanDetect, CollisionMesh), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFanDetect_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeX_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "FanDetect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeX = { "RangeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFanDetect, RangeX), METADATA_PARAMS(Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeY_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "FanDetect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeY = { "RangeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFanDetect, RangeY), METADATA_PARAMS(Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeZ_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "FanDetect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeZ = { "RangeZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFanDetect, RangeZ), METADATA_PARAMS(Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanDetect_Statics::NewProp_DistBetweenLines_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "FanDetect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFanDetect_Statics::NewProp_DistBetweenLines = { "DistBetweenLines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFanDetect, DistBetweenLines), METADATA_PARAMS(Z_Construct_UClass_AFanDetect_Statics::NewProp_DistBetweenLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::NewProp_DistBetweenLines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFanDetect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFanDetect_Statics::NewProp_DefaultRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFanDetect_Statics::NewProp_CollisionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFanDetect_Statics::NewProp_RangeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFanDetect_Statics::NewProp_DistBetweenLines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFanDetect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFanDetect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFanDetect_Statics::ClassParams = {
		&AFanDetect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFanDetect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFanDetect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFanDetect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFanDetect()
	{
		if (!Z_Registration_Info_UClass_AFanDetect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFanDetect.OuterSingleton, Z_Construct_UClass_AFanDetect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFanDetect.OuterSingleton;
	}
	template<> GROUP6JELLYGAME_API UClass* StaticClass<AFanDetect>()
	{
		return AFanDetect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFanDetect);
	struct Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_FanDetect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_FanDetect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFanDetect, AFanDetect::StaticClass, TEXT("AFanDetect"), &Z_Registration_Info_UClass_AFanDetect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFanDetect), 2801679296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_FanDetect_h_547798742(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_FanDetect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_FanDetect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
