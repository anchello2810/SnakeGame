// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameGameModeBase() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameGameModeBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	void ASnakeGameGameModeBase::StaticRegisterNativesASnakeGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASnakeGameGameModeBase_NoRegister()
	{
		return ASnakeGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SnakeGameGameModeBase.h" },
		{ "ModuleRelativePath", "SnakeGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameGameModeBase_Statics::ClassParams = {
		&ASnakeGameGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeGameGameModeBase, 30933072);
	template<> SNAKEGAME_API UClass* StaticClass<ASnakeGameGameModeBase>()
	{
		return ASnakeGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeGameGameModeBase(Z_Construct_UClass_ASnakeGameGameModeBase, &ASnakeGameGameModeBase::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ASnakeGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
