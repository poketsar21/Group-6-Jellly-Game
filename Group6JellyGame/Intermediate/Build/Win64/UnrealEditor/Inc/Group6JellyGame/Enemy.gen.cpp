// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group6JellyGame/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Group6JellyGame();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AEnemy::StaticRegisterNativesAEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewToggle_MetaData[];
#endif
		static void NewProp_ViewToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ViewToggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCrouching_MetaData[];
#endif
		static void NewProp_IsCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom2 = { "CameraBoom2", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, CameraBoom2), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_FirstCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Front camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Front camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_FirstCamera = { "FirstCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, FirstCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_FirstCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_FirstCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_ViewToggle_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_ViewToggle_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->ViewToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_ViewToggle = { "ViewToggle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_ViewToggle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_ViewToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_ViewToggle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_NormalSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_NormalSize = { "NormalSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, NormalSize), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_NormalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_NormalSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_CrouchSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_CrouchSize = { "CrouchSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, CrouchSize), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_CrouchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_CrouchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_IsCrouching_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_IsCrouching_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->IsCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_IsCrouching = { "IsCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_IsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_IsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_IsCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_PlayerHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_CameraBoom2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_FirstCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_ViewToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_NormalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_CrouchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_IsCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_PlayerHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy()
	{
		if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
	}
	template<> GROUP6JELLYGAME_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	struct Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 3589351248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Enemy_h_4192245544(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
