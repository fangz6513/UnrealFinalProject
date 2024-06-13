// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "finalProject/finalProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinalProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FINALPROJECT_API UClass* Z_Construct_UClass_AfinalProjectGameModeBase();
	FINALPROJECT_API UClass* Z_Construct_UClass_AfinalProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_finalProject();
// End Cross Module References
	void AfinalProjectGameModeBase::StaticRegisterNativesAfinalProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AfinalProjectGameModeBase);
	UClass* Z_Construct_UClass_AfinalProjectGameModeBase_NoRegister()
	{
		return AfinalProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AfinalProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfinalProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_finalProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfinalProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "finalProjectGameModeBase.h" },
		{ "ModuleRelativePath", "finalProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfinalProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfinalProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AfinalProjectGameModeBase_Statics::ClassParams = {
		&AfinalProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AfinalProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfinalProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfinalProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AfinalProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AfinalProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AfinalProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AfinalProjectGameModeBase.OuterSingleton;
	}
	template<> FINALPROJECT_API UClass* StaticClass<AfinalProjectGameModeBase>()
	{
		return AfinalProjectGameModeBase::StaticClass();
	}
	AfinalProjectGameModeBase::AfinalProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfinalProjectGameModeBase);
	AfinalProjectGameModeBase::~AfinalProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_zfang6513_Documents_Unreal_Projects_finalProject_Source_finalProject_finalProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zfang6513_Documents_Unreal_Projects_finalProject_Source_finalProject_finalProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AfinalProjectGameModeBase, AfinalProjectGameModeBase::StaticClass, TEXT("AfinalProjectGameModeBase"), &Z_Registration_Info_UClass_AfinalProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AfinalProjectGameModeBase), 1630651253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zfang6513_Documents_Unreal_Projects_finalProject_Source_finalProject_finalProjectGameModeBase_h_1612216760(TEXT("/Script/finalProject"),
		Z_CompiledInDeferFile_FID_Users_zfang6513_Documents_Unreal_Projects_finalProject_Source_finalProject_finalProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zfang6513_Documents_Unreal_Projects_finalProject_Source_finalProject_finalProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
