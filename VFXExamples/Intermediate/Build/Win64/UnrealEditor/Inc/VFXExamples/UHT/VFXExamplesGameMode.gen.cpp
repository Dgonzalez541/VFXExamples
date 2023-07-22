// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VFXExamples/VFXExamplesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVFXExamplesGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VFXExamples();
	VFXEXAMPLES_API UClass* Z_Construct_UClass_AVFXExamplesGameMode();
	VFXEXAMPLES_API UClass* Z_Construct_UClass_AVFXExamplesGameMode_NoRegister();
// End Cross Module References
	void AVFXExamplesGameMode::StaticRegisterNativesAVFXExamplesGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVFXExamplesGameMode);
	UClass* Z_Construct_UClass_AVFXExamplesGameMode_NoRegister()
	{
		return AVFXExamplesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVFXExamplesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVFXExamplesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VFXExamples,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVFXExamplesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VFXExamplesGameMode.h" },
		{ "ModuleRelativePath", "VFXExamplesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVFXExamplesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVFXExamplesGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVFXExamplesGameMode_Statics::ClassParams = {
		&AVFXExamplesGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVFXExamplesGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVFXExamplesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVFXExamplesGameMode()
	{
		if (!Z_Registration_Info_UClass_AVFXExamplesGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVFXExamplesGameMode.OuterSingleton, Z_Construct_UClass_AVFXExamplesGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVFXExamplesGameMode.OuterSingleton;
	}
	template<> VFXEXAMPLES_API UClass* StaticClass<AVFXExamplesGameMode>()
	{
		return AVFXExamplesGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVFXExamplesGameMode);
	AVFXExamplesGameMode::~AVFXExamplesGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_VFXExamples_VFXExamples_Source_VFXExamples_VFXExamplesGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_VFXExamples_VFXExamples_Source_VFXExamples_VFXExamplesGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVFXExamplesGameMode, AVFXExamplesGameMode::StaticClass, TEXT("AVFXExamplesGameMode"), &Z_Registration_Info_UClass_AVFXExamplesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVFXExamplesGameMode), 475378443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_VFXExamples_VFXExamples_Source_VFXExamples_VFXExamplesGameMode_h_1683005345(TEXT("/Script/VFXExamples"),
		Z_CompiledInDeferFile_FID_UnrealProjects_VFXExamples_VFXExamples_Source_VFXExamples_VFXExamplesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_VFXExamples_VFXExamples_Source_VFXExamples_VFXExamplesGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
