// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/HUD/AuraHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraHUD() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraHUD();
	AURA_API UClass* Z_Construct_UClass_AAuraHUD_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraHUD::StaticRegisterNativesAAuraHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraHUD);
	UClass* Z_Construct_UClass_AAuraHUD_NoRegister()
	{
		return AAuraHUD::StaticClass();
	}
	struct Z_Construct_UClass_AAuraHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/AuraHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "AuraHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass_MetaData), Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraHUD_Statics::ClassParams = {
		&AAuraHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraHUD()
	{
		if (!Z_Registration_Info_UClass_AAuraHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraHUD.OuterSingleton, Z_Construct_UClass_AAuraHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraHUD.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraHUD>()
	{
		return AAuraHUD::StaticClass();
	}
	AAuraHUD::AAuraHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraHUD);
	AAuraHUD::~AAuraHUD() {}
	struct Z_CompiledInDeferFile_FID_mahsa_Work_Aura_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mahsa_Work_Aura_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraHUD, AAuraHUD::StaticClass, TEXT("AAuraHUD"), &Z_Registration_Info_UClass_AAuraHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraHUD), 2665202918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mahsa_Work_Aura_Source_Aura_Public_UI_HUD_AuraHUD_h_1258738697(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_mahsa_Work_Aura_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mahsa_Work_Aura_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
