// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_GrippableBoxComponent_generated_h
#error "GrippableBoxComponent.generated.h already included, missing '#pragma once' in GrippableBoxComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableBoxComponent_generated_h

#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_SPARSE_DATA
#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrippableBoxComponent(); \
	friend struct Z_Construct_UClass_UGrippableBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableBoxComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableBoxComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGrippableBoxComponent(); \
	friend struct Z_Construct_UClass_UGrippableBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableBoxComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableBoxComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableBoxComponent(UGrippableBoxComponent&&); \
	NO_API UGrippableBoxComponent(const UGrippableBoxComponent&); \
public:


#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableBoxComponent(UGrippableBoxComponent&&); \
	NO_API UGrippableBoxComponent(const UGrippableBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableBoxComponent)


#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_21_PROLOG
#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_SPARSE_DATA \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_RPC_WRAPPERS \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_INCLASS \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_SPARSE_DATA \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_INCLASS_NO_PURE_DECLS \
	Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGrippableBoxComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rayscape_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableBoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
