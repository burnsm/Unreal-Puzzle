// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLE2_Puzzle2GameMode_generated_h
#error "Puzzle2GameMode.generated.h already included, missing '#pragma once' in Puzzle2GameMode.h"
#endif
#define PUZZLE2_Puzzle2GameMode_generated_h

#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_RPC_WRAPPERS
#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPuzzle2GameMode(); \
	friend PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2GameMode(); \
	public: \
	DECLARE_CLASS(APuzzle2GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Puzzle2, PUZZLE2_API) \
	DECLARE_SERIALIZER(APuzzle2GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APuzzle2GameMode*>(this); }


#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesAPuzzle2GameMode(); \
	friend PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2GameMode(); \
	public: \
	DECLARE_CLASS(APuzzle2GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Puzzle2, PUZZLE2_API) \
	DECLARE_SERIALIZER(APuzzle2GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APuzzle2GameMode*>(this); }


#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLE2_API APuzzle2GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzle2GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE2_API, APuzzle2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzle2GameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	PUZZLE2_API APuzzle2GameMode(const APuzzle2GameMode& InCopy); \
public:


#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	PUZZLE2_API APuzzle2GameMode(const APuzzle2GameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE2_API, APuzzle2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzle2GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzle2GameMode)


#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_7_PROLOG
#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_RPC_WRAPPERS \
	Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_INCLASS \
	Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_INCLASS_NO_PURE_DECLS \
	Puzzle2_Source_Puzzle2_Puzzle2GameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzle2_Source_Puzzle2_Puzzle2GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
