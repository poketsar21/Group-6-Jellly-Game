// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group6JellyGame/Group6JellyGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroup6JellyGameCharacter() {}
// Cross Module References
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AGroup6JellyGameCharacter_NoRegister();
	GROUP6JELLYGAME_API UClass* Z_Construct_UClass_AGroup6JellyGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Group6JellyGame();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AGroup6JellyGameCharacter::StaticRegisterNativesAGroup6JellyGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroup6JellyGameCharacter);
	UClass* Z_Construct_UClass_AGroup6JellyGameCharacter_NoRegister()
	{
		return AGroup6JellyGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGroup6JellyGameCharacter_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Group6JellyGameCharacter.h" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom2 = { "CameraBoom2", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, CameraBoom2), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FirstCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Front camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
		{ "ToolTip", "Front camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FirstCamera = { "FirstCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, FirstCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FirstCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FirstCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle_SetBit(void* Obj)
	{
		((AGroup6JellyGameCharacter*)Obj)->ViewToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle = { "ViewToggle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGroup6JellyGameCharacter), &Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FirstCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroup6JellyGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::ClassParams = {
		&AGroup6JellyGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroup6JellyGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AGroup6JellyGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroup6JellyGameCharacter.OuterSingleton, Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGroup6JellyGameCharacter.OuterSingleton;
	}
	template<> GROUP6JELLYGAME_API UClass* StaticClass<AGroup6JellyGameCharacter>()
	{
		return AGroup6JellyGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroup6JellyGameCharacter);
	struct Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGroup6JellyGameCharacter, AGroup6JellyGameCharacter::StaticClass, TEXT("AGroup6JellyGameCharacter"), &Z_Registration_Info_UClass_AGroup6JellyGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroup6JellyGameCharacter), 104598060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_752439771(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
