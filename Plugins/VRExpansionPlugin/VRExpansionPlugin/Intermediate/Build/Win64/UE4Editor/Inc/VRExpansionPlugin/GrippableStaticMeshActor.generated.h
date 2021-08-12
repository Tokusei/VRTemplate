// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRepMovementVR;
#ifdef VREXPANSIONPLUGIN_GrippableStaticMeshActor_generated_h
#error "GrippableStaticMeshActor.generated.h already included, missing '#pragma once' in GrippableStaticMeshActor.h"
#endif
#define VREXPANSIONPLUGIN_GrippableStaticMeshActor_generated_h

#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_SPARSE_DATA
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_RPC_WRAPPERS
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptionalRepStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOptionalRepStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOptionalRepStaticMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUOptionalRepStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOptionalRepStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOptionalRepStaticMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionalRepStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionalRepStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionalRepStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionalRepStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptionalRepStaticMeshComponent(UOptionalRepStaticMeshComponent&&); \
	NO_API UOptionalRepStaticMeshComponent(const UOptionalRepStaticMeshComponent&); \
public:


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptionalRepStaticMeshComponent(UOptionalRepStaticMeshComponent&&); \
	NO_API UOptionalRepStaticMeshComponent(const UOptionalRepStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionalRepStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionalRepStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionalRepStaticMeshComponent)


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_PRIVATE_PROPERTY_OFFSET
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_27_PROLOG
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_PRIVATE_PROPERTY_OFFSET \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_SPARSE_DATA \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_RPC_WRAPPERS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_INCLASS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_PRIVATE_PROPERTY_OFFSET \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_SPARSE_DATA \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_INCLASS_NO_PURE_DECLS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UOptionalRepStaticMeshComponent>();

#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_SPARSE_DATA
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_RPC_WRAPPERS \
	virtual bool Server_GetClientAuthReplication_Validate(FRepMovementVR const& ); \
	virtual void Server_GetClientAuthReplication_Implementation(FRepMovementVR const& newMovement); \
	virtual bool Server_EndClientAuthReplication_Validate(); \
	virtual void Server_EndClientAuthReplication_Implementation(); \
 \
	DECLARE_FUNCTION(execIsCurrentlyClientAuthThrowing); \
	DECLARE_FUNCTION(execServer_GetClientAuthReplication); \
	DECLARE_FUNCTION(execServer_EndClientAuthReplication); \
	DECLARE_FUNCTION(execCeaseReplicationBlocking); \
	DECLARE_FUNCTION(execPollReplicationEvent); \
	DECLARE_FUNCTION(execRemoveFromClientReplicationBucket); \
	DECLARE_FUNCTION(execAddToClientReplicationBucket); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_GetClientAuthReplication_Validate(FRepMovementVR const& ); \
	virtual void Server_GetClientAuthReplication_Implementation(FRepMovementVR const& newMovement); \
	virtual bool Server_EndClientAuthReplication_Validate(); \
	virtual void Server_EndClientAuthReplication_Implementation(); \
 \
	DECLARE_FUNCTION(execIsCurrentlyClientAuthThrowing); \
	DECLARE_FUNCTION(execServer_GetClientAuthReplication); \
	DECLARE_FUNCTION(execServer_EndClientAuthReplication); \
	DECLARE_FUNCTION(execCeaseReplicationBlocking); \
	DECLARE_FUNCTION(execPollReplicationEvent); \
	DECLARE_FUNCTION(execRemoveFromClientReplicationBucket); \
	DECLARE_FUNCTION(execAddToClientReplicationBucket); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_EVENT_PARMS \
	struct GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms \
	{ \
		FRepMovementVR newMovement; \
	};


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_CALLBACK_WRAPPERS
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrippableStaticMeshActor(); \
	friend struct Z_Construct_UClass_AGrippableStaticMeshActor_Statics; \
public: \
	DECLARE_CLASS(AGrippableStaticMeshActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AGrippableStaticMeshActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGrippableStaticMeshActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachmentWeldReplication=NETFIELD_REP_START, \
		GripLogicScripts, \
		ClientAuthReplicationData, \
		GameplayTags, \
		bAllowIgnoringAttachOnOwner, \
		bRepGripSettingsAndGameplayTags, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAGrippableStaticMeshActor(); \
	friend struct Z_Construct_UClass_AGrippableStaticMeshActor_Statics; \
public: \
	DECLARE_CLASS(AGrippableStaticMeshActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AGrippableStaticMeshActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGrippableStaticMeshActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachmentWeldReplication=NETFIELD_REP_START, \
		GripLogicScripts, \
		ClientAuthReplicationData, \
		GameplayTags, \
		bAllowIgnoringAttachOnOwner, \
		bRepGripSettingsAndGameplayTags, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrippableStaticMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrippableStaticMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrippableStaticMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrippableStaticMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrippableStaticMeshActor(AGrippableStaticMeshActor&&); \
	NO_API AGrippableStaticMeshActor(const AGrippableStaticMeshActor&); \
public:


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrippableStaticMeshActor(AGrippableStaticMeshActor&&); \
	NO_API AGrippableStaticMeshActor(const AGrippableStaticMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrippableStaticMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrippableStaticMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrippableStaticMeshActor)


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_PRIVATE_PROPERTY_OFFSET
#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_47_PROLOG \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_EVENT_PARMS


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_PRIVATE_PROPERTY_OFFSET \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_SPARSE_DATA \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_RPC_WRAPPERS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_CALLBACK_WRAPPERS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_INCLASS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_PRIVATE_PROPERTY_OFFSET \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_SPARSE_DATA \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_CALLBACK_WRAPPERS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_INCLASS_NO_PURE_DECLS \
	Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AGrippableStaticMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rayscape_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
