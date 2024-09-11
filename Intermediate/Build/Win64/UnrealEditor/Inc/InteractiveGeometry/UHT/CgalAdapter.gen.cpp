// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveGeometry/Public/CgalAdapter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCgalAdapter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVEGEOMETRY_API UClass* Z_Construct_UClass_UCgalAdapter();
	INTERACTIVEGEOMETRY_API UClass* Z_Construct_UClass_UCgalAdapter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveGeometry();
// End Cross Module References
	void UCgalAdapter::StaticRegisterNativesUCgalAdapter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCgalAdapter);
	UClass* Z_Construct_UClass_UCgalAdapter_NoRegister()
	{
		return UCgalAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UCgalAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCgalAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveGeometry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgalAdapter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCgalAdapter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CgalAdapter.h" },
		{ "ModuleRelativePath", "Public/CgalAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCgalAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCgalAdapter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCgalAdapter_Statics::ClassParams = {
		&UCgalAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCgalAdapter_Statics::Class_MetaDataParams), Z_Construct_UClass_UCgalAdapter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCgalAdapter()
	{
		if (!Z_Registration_Info_UClass_UCgalAdapter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCgalAdapter.OuterSingleton, Z_Construct_UClass_UCgalAdapter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCgalAdapter.OuterSingleton;
	}
	template<> INTERACTIVEGEOMETRY_API UClass* StaticClass<UCgalAdapter>()
	{
		return UCgalAdapter::StaticClass();
	}
	UCgalAdapter::UCgalAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCgalAdapter);
	UCgalAdapter::~UCgalAdapter() {}
	struct Z_CompiledInDeferFile_FID_Unreal5SrcProject_Utopia_Plugins_InteractiveGeometry_Source_InteractiveGeometry_Public_CgalAdapter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5SrcProject_Utopia_Plugins_InteractiveGeometry_Source_InteractiveGeometry_Public_CgalAdapter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCgalAdapter, UCgalAdapter::StaticClass, TEXT("UCgalAdapter"), &Z_Registration_Info_UClass_UCgalAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCgalAdapter), 131462831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5SrcProject_Utopia_Plugins_InteractiveGeometry_Source_InteractiveGeometry_Public_CgalAdapter_h_769148100(TEXT("/Script/InteractiveGeometry"),
		Z_CompiledInDeferFile_FID_Unreal5SrcProject_Utopia_Plugins_InteractiveGeometry_Source_InteractiveGeometry_Public_CgalAdapter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5SrcProject_Utopia_Plugins_InteractiveGeometry_Source_InteractiveGeometry_Public_CgalAdapter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
