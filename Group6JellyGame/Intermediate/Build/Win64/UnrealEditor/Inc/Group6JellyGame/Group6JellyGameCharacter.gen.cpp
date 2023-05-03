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
	DEFINE_FUNCTION(AGroup6JellyGameCharacter::execinitscale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->initscale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGroup6JellyGameCharacter::execScaleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScaleAnimation();
		P_NATIVE_END;
	}
	void AGroup6JellyGameCharacter::StaticRegisterNativesAGroup6JellyGameCharacter()
	{
		UClass* Class = AGroup6JellyGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "initscale", &AGroup6JellyGameCharacter::execinitscale },
			{ "ScaleAnimation", &AGroup6JellyGameCharacter::execScaleAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGroup6JellyGameCharacter, nullptr, "initscale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* called to change the players size*/" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
		{ "ToolTip", "called to change the players size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGroup6JellyGameCharacter, nullptr, "ScaleAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroup6JellyGameCharacter);
	UClass* Z_Construct_UClass_AGroup6JellyGameCharacter_NoRegister()
	{
		return AGroup6JellyGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGroup6JellyGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changing_MetaData[];
#endif
		static void NewProp_Changing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Changing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changing2_MetaData[];
#endif
		static void NewProp_Changing2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Changing2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_setScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_setScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Init_MetaData[];
#endif
		static void NewProp_Init_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Init;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Group6JellyGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGroup6JellyGameCharacter_initscale, "initscale" }, // 1609545709
		{ &Z_Construct_UFunction_AGroup6JellyGameCharacter_ScaleAnimation, "ScaleAnimation" }, // 3706757614
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_NormalSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_NormalSize = { "NormalSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, NormalSize), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_NormalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_NormalSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CrouchSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CrouchSize = { "CrouchSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, CrouchSize), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CrouchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CrouchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_IsCrouching_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_IsCrouching_SetBit(void* Obj)
	{
		((AGroup6JellyGameCharacter*)Obj)->IsCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_IsCrouching = { "IsCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGroup6JellyGameCharacter), &Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_IsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_IsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_IsCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing_SetBit(void* Obj)
	{
		((AGroup6JellyGameCharacter*)Obj)->Changing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing = { "Changing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGroup6JellyGameCharacter), &Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing2_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing2_SetBit(void* Obj)
	{
		((AGroup6JellyGameCharacter*)Obj)->Changing2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing2 = { "Changing2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGroup6JellyGameCharacter), &Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, Size), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_minScale_MetaData[] = {
		{ "Category", "Mechanics" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_minScale = { "minScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, minScale), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_minScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_minScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_maxScale_MetaData[] = {
		{ "Category", "Mechanics" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_maxScale = { "maxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, maxScale), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_maxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_maxScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_setScale_MetaData[] = {
		{ "Category", "Mechanics" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_setScale = { "setScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroup6JellyGameCharacter, setScale), METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_setScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_setScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Init_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Group6JellyGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Init_SetBit(void* Obj)
	{
		((AGroup6JellyGameCharacter*)Obj)->Init = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Init = { "Init", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGroup6JellyGameCharacter), &Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Init_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Init_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Init_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CameraBoom2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_FirstCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_ViewToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_NormalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_CrouchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_IsCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Changing2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_PlayerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_minScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_maxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_setScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::NewProp_Init,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroup6JellyGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::ClassParams = {
		&AGroup6JellyGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGroup6JellyGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AGroup6JellyGameCharacter, AGroup6JellyGameCharacter::StaticClass, TEXT("AGroup6JellyGameCharacter"), &Z_Registration_Info_UClass_AGroup6JellyGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroup6JellyGameCharacter), 2831827817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_500639248(TEXT("/Script/Group6JellyGame"),
		Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group6JellyGame_Source_Group6JellyGame_Group6JellyGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
