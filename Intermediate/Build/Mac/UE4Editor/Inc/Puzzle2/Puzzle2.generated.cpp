// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Puzzle2.h"
#include "Puzzle2.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle2() {}
	void APuzzle2Block::StaticRegisterNativesAPuzzle2Block()
	{
		FNativeFunctionRegistrar::RegisterFunction(APuzzle2Block::StaticClass(),"BlockClicked",(Native)&APuzzle2Block::execBlockClicked);
		FNativeFunctionRegistrar::RegisterFunction(APuzzle2Block::StaticClass(),"OnFingerPressedBlock",(Native)&APuzzle2Block::execOnFingerPressedBlock);
	}
	IMPLEMENT_CLASS(APuzzle2Block, 2629808807);
	void APuzzle2BlockGrid::StaticRegisterNativesAPuzzle2BlockGrid()
	{
	}
	IMPLEMENT_CLASS(APuzzle2BlockGrid, 4071665931);
	void APuzzle2GameMode::StaticRegisterNativesAPuzzle2GameMode()
	{
	}
	IMPLEMENT_CLASS(APuzzle2GameMode, 3518786131);
	void APuzzle2PlayerController::StaticRegisterNativesAPuzzle2PlayerController()
	{
	}
	IMPLEMENT_CLASS(APuzzle2PlayerController, 2874175940);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	PUZZLE2_API class UFunction* Z_Construct_UFunction_APuzzle2Block_BlockClicked();
	PUZZLE2_API class UFunction* Z_Construct_UFunction_APuzzle2Block_OnFingerPressedBlock();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2Block_NoRegister();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2Block();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2BlockGrid_NoRegister();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2BlockGrid();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2GameMode_NoRegister();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2GameMode();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2PlayerController_NoRegister();
	PUZZLE2_API class UClass* Z_Construct_UClass_APuzzle2PlayerController();
	PUZZLE2_API class UPackage* Z_Construct_UPackage_Puzzle2();
	UFunction* Z_Construct_UFunction_APuzzle2Block_BlockClicked()
	{
		struct Puzzle2Block_eventBlockClicked_Parms
		{
			UPrimitiveComponent* ClickedComp;
		};
		UObject* Outer=Z_Construct_UClass_APuzzle2Block();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlockClicked"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(Puzzle2Block_eventBlockClicked_Parms));
			UProperty* NewProp_ClickedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClickedComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ClickedComp, Puzzle2Block_eventBlockClicked_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Handle the block being clicked"));
			MetaData->SetValue(NewProp_ClickedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APuzzle2Block_OnFingerPressedBlock()
	{
		struct Puzzle2Block_eventOnFingerPressedBlock_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
		UObject* Outer=Z_Construct_UClass_APuzzle2Block();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnFingerPressedBlock"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(Puzzle2Block_eventOnFingerPressedBlock_Parms));
			UProperty* NewProp_TouchedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TouchedComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(TouchedComponent, Puzzle2Block_eventOnFingerPressedBlock_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_FingerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FingerIndex"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(FingerIndex, Puzzle2Block_eventOnFingerPressedBlock_Parms), 0x0000000000000080, Z_Construct_UEnum_InputCore_ETouchIndex());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Handle the block being touched"));
			MetaData->SetValue(NewProp_TouchedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APuzzle2Block_NoRegister()
	{
		return APuzzle2Block::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzle2Block()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_Puzzle2();
			OuterClass = APuzzle2Block::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880080;

				OuterClass->LinkChild(Z_Construct_UFunction_APuzzle2Block_BlockClicked());
				OuterClass->LinkChild(Z_Construct_UFunction_APuzzle2Block_OnFingerPressedBlock());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OwningGrid = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OwningGrid"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OwningGrid, APuzzle2Block), 0x0000000000000000, Z_Construct_UClass_APuzzle2BlockGrid_NoRegister());
				UProperty* NewProp_BlueMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlueMaterial"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(BlueMaterial, APuzzle2Block), 0x0000000000000000, Z_Construct_UClass_UMaterialInstance_NoRegister());
				UProperty* NewProp_OrangeMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OrangeMaterial"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OrangeMaterial, APuzzle2Block), 0x0000000000000000, Z_Construct_UClass_UMaterialInstance_NoRegister());
				UProperty* NewProp_BlockMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlockMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(BlockMesh, APuzzle2Block), 0x00000000000b001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_DummyRoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DummyRoot"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(DummyRoot, APuzzle2Block), 0x00000000000b001d, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APuzzle2Block_BlockClicked()); // 3613489292
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APuzzle2Block_OnFingerPressedBlock()); // 85512730
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Puzzle2Block.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A block that can be clicked"));
				MetaData->SetValue(NewProp_OwningGrid, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
				MetaData->SetValue(NewProp_OwningGrid, TEXT("ToolTip"), TEXT("Grid that owns us"));
				MetaData->SetValue(NewProp_BlueMaterial, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
				MetaData->SetValue(NewProp_BlueMaterial, TEXT("ToolTip"), TEXT("Pointer to blue material used on active blocks"));
				MetaData->SetValue(NewProp_OrangeMaterial, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
				MetaData->SetValue(NewProp_OrangeMaterial, TEXT("ToolTip"), TEXT("Pointer to orange material used on active blocks"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("Category"), TEXT("Block"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("ToolTip"), TEXT("StaticMesh component for the clickable block"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("Category"), TEXT("Block"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("ModuleRelativePath"), TEXT("Puzzle2Block.h"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("ToolTip"), TEXT("Dummy root component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle2Block(Z_Construct_UClass_APuzzle2Block, TEXT("APuzzle2Block"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle2Block);
	UClass* Z_Construct_UClass_APuzzle2BlockGrid_NoRegister()
	{
		return APuzzle2BlockGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzle2BlockGrid()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_Puzzle2();
			OuterClass = APuzzle2BlockGrid::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BlockSpacing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlockSpacing"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BlockSpacing, APuzzle2BlockGrid), 0x0000000000000015);
				UProperty* NewProp_Size = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Size"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(Size, APuzzle2BlockGrid), 0x0000000000000015);
				UProperty* NewProp_TimerText = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimerText"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(TimerText, APuzzle2BlockGrid), 0x00000000000b001d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_ScoreText = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScoreText"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ScoreText, APuzzle2BlockGrid), 0x00000000000b001d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_DummyRoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DummyRoot"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(DummyRoot, APuzzle2BlockGrid), 0x00000000000b001d, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Puzzle2BlockGrid.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Puzzle2BlockGrid.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Class used to spawn blocks and manage score"));
				MetaData->SetValue(NewProp_BlockSpacing, TEXT("Category"), TEXT("Grid"));
				MetaData->SetValue(NewProp_BlockSpacing, TEXT("ModuleRelativePath"), TEXT("Puzzle2BlockGrid.h"));
				MetaData->SetValue(NewProp_BlockSpacing, TEXT("ToolTip"), TEXT("Spacing of blocks"));
				MetaData->SetValue(NewProp_Size, TEXT("Category"), TEXT("Grid"));
				MetaData->SetValue(NewProp_Size, TEXT("ModuleRelativePath"), TEXT("Puzzle2BlockGrid.h"));
				MetaData->SetValue(NewProp_Size, TEXT("ToolTip"), TEXT("Number of blocks along each side of grid"));
				MetaData->SetValue(NewProp_TimerText, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TimerText, TEXT("Category"), TEXT("Grid"));
				MetaData->SetValue(NewProp_TimerText, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TimerText, TEXT("ModuleRelativePath"), TEXT("Puzzle2BlockGrid.h"));
				MetaData->SetValue(NewProp_TimerText, TEXT("ToolTip"), TEXT("Text component for the score"));
				MetaData->SetValue(NewProp_ScoreText, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ScoreText, TEXT("Category"), TEXT("Grid"));
				MetaData->SetValue(NewProp_ScoreText, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ScoreText, TEXT("ModuleRelativePath"), TEXT("Puzzle2BlockGrid.h"));
				MetaData->SetValue(NewProp_ScoreText, TEXT("ToolTip"), TEXT("Text component for the score"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("Category"), TEXT("Grid"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("ModuleRelativePath"), TEXT("Puzzle2BlockGrid.h"));
				MetaData->SetValue(NewProp_DummyRoot, TEXT("ToolTip"), TEXT("Dummy root component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle2BlockGrid(Z_Construct_UClass_APuzzle2BlockGrid, TEXT("APuzzle2BlockGrid"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle2BlockGrid);
	UClass* Z_Construct_UClass_APuzzle2GameMode_NoRegister()
	{
		return APuzzle2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzle2GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_Puzzle2();
			OuterClass = APuzzle2GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2088028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Puzzle2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Puzzle2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("GameMode class to specify pawn and playercontroller"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle2GameMode(Z_Construct_UClass_APuzzle2GameMode, TEXT("APuzzle2GameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle2GameMode);
	UClass* Z_Construct_UClass_APuzzle2PlayerController_NoRegister()
	{
		return APuzzle2PlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzle2PlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage_Puzzle2();
			OuterClass = APuzzle2PlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Puzzle2PlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Puzzle2PlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("PlayerController class used to enable cursor"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle2PlayerController(Z_Construct_UClass_APuzzle2PlayerController, TEXT("APuzzle2PlayerController"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle2PlayerController);
	UPackage* Z_Construct_UPackage_Puzzle2()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Puzzle2")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0xF27671D0;
			Guid.B = 0xA8FAFD40;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
