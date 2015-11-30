// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Puzzle2.h"
#include "Puzzle2Block.h"
#include "Puzzle2BlockGrid.h"

APuzzle2Block::APuzzle2Block()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> BlueMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> OrangeMaterial;
		FConstructorStatics()
			: PlaneMesh(TEXT("/Game/Puzzle/Meshes/PuzzleCube.PuzzleCube"))
			, BlueMaterial(TEXT("/Game/Puzzle/Meshes/GreenMaterial.GreenMaterial"))
			, OrangeMaterial(TEXT("/Game/Puzzle/Meshes/PurpleMaterial.PurpleMaterial"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Create static mesh component
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));
	BlockMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());
	BlockMesh->SetRelativeScale3D(FVector(0.5f,0.5f,0.25f));
	BlockMesh->SetRelativeLocation(FVector(0.f,0.f,25.f));
	BlockMesh->SetMaterial(0, ConstructorStatics.BlueMaterial.Get());
	BlockMesh->AttachTo(DummyRoot);
	BlockMesh->OnClicked.AddDynamic(this, &APuzzle2Block::BlockClicked);
	BlockMesh->OnInputTouchBegin.AddDynamic(this, &APuzzle2Block::OnFingerPressedBlock);

	// Save a pointer to the orange material
	OrangeMaterial = ConstructorStatics.OrangeMaterial.Get();
    
    //Save a pointer to the blue material
    BlueMaterial = ConstructorStatics.BlueMaterial.Get();
    
  
}

void APuzzle2Block::BlockClicked(UPrimitiveComponent* ClickedComp)
{
    
    ChangeColor();
    
       

    // Tell the Grid
    if(OwningGrid != NULL)
    {
        OwningGrid->AddScore();
    }
    
    if (bt != NULL)
    {
        bt->ChangeColor();
    }
    if (bb != NULL)
    {
        bb->ChangeColor();
    }
    if (bl!= NULL)
    {
        bl->ChangeColor();
    }
    if (br != NULL)
    {
        br->ChangeColor();
    }

}

void APuzzle2Block::ChangeColor()
{
    
    // Check we are not already active
    if(!bIsActive)
    {
        bIsActive = true;
        
        // Change material
        BlockMesh->SetMaterial(0, OrangeMaterial);
        
        
    }else {
        bIsActive=false;
        BlockMesh->SetMaterial(0,BlueMaterial);
        
    }
}

void APuzzle2Block::OnFingerPressedBlock(ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent)
{
	BlockClicked(TouchedComponent);
}
