// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/AuraEffectActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
#ifdef AURA_AuraEffectActor_generated_h
#error "AuraEffectActor.generated.h already included, missing '#pragma once' in AuraEffectActor.h"
#endif
#define AURA_AuraEffectActor_generated_h

#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_SPARSE_DATA
#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execApplyEffectToTarget);


#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_ACCESSORS
#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEffectActor(); \
	friend struct Z_Construct_UClass_AAuraEffectActor_Statics; \
public: \
	DECLARE_CLASS(AAuraEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraEffectActor)


#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraEffectActor(AAuraEffectActor&&); \
	NO_API AAuraEffectActor(const AAuraEffectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEffectActor) \
	NO_API virtual ~AAuraEffectActor();


#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_27_PROLOG
#define FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_SPARSE_DATA \
	FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_ACCESSORS \
	FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_INCLASS_NO_PURE_DECLS \
	FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraEffectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mahsa_Work_Aura_Source_Aura_Public_Actor_AuraEffectActor_h


#define FOREACH_ENUM_EEFFECTAPPLICATIONPOLICY(op) \
	op(EEffectApplicationPolicy::ApplyOnOverlap) \
	op(EEffectApplicationPolicy::ApplyOnEndOverlap) \
	op(EEffectApplicationPolicy::DoNotApply) 

enum class EEffectApplicationPolicy;
template<> struct TIsUEnumClass<EEffectApplicationPolicy> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<EEffectApplicationPolicy>();

#define FOREACH_ENUM_EEFFECTREMOVALPOLICY(op) \
	op(EEffectRemovalPolicy::RemoveOnEndOverlap) \
	op(EEffectRemovalPolicy::DoNotApply) 

enum class EEffectRemovalPolicy;
template<> struct TIsUEnumClass<EEffectRemovalPolicy> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<EEffectRemovalPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
