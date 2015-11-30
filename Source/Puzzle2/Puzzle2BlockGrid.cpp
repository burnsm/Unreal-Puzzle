// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Puzzle2.h"
#include "Puzzle2BlockGrid.h"
#include "Puzzle2Block.h"
#include "Components/TextRenderComponent.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

APuzzle2BlockGrid::APuzzle2BlockGrid()
{
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Create static mesh component
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
    ScoreText->XScale=3.f;
    ScoreText->YScale=3.f;
	ScoreText->SetRelativeLocation(FVector(200.f,0.f,0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(0)));
	ScoreText->AttachTo(DummyRoot);
    
    
    // Create static mesh component
    TimerText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TimerText0"));
    TimerText->XScale=3.f;
    TimerText->YScale=3.f;
    TimerText->SetRelativeLocation(FVector(260.f,0.f,0.f));
    TimerText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
    TimerText->SetText(FText::Format(LOCTEXT("TimerFmt", "Timer: {0}"), FText::AsNumber(0)));
    TimerText->AttachTo(DummyRoot);
    
	// Set defaults
	Size = 5;
	BlockSpacing = 150.f;
    Timer = 300.f;
    
    
}


void APuzzle2BlockGrid::BeginPlay()
{
    /* Handle the pointers */
    int32 rows=7;
    int32 cols=7;
    
	Super::BeginPlay();
    
    GetWorld()->GetTimerManager().SetTimer(PuzzleTimerHandle, this, &APuzzle2BlockGrid::DecreaseTimer, 1.0f, true);
	// Number of blocks
	const int32 NumBlocks = Size * Size;
    
    //Initialize the pointers
    //Create a 2D array to store the pointers for the blocks in the grid:
    /*
    APuzzle2Block ***blockptrs = new (APuzzle2Block**)[rows];
     for (int i = 0; i < rows; ++i) {
         blockptrs[i] = new (APuzzle2Block*)[cols];
     }
     */
    APuzzle2Block * blockptrs[7][7];
    

     // Null out the pointers contained in the array:
     for (int i = 0; i < rows; ++i) {
         for (int j = 0; j < cols; ++j) {
             blockptrs[i][j] = NULL;
         }
     }
	// Loop to spawn each block
    for(int32 BlockIndex=0; BlockIndex<NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex/Size) * BlockSpacing; // Divide by dimension
		const float YOffset = (BlockIndex%Size) * BlockSpacing; // Modulo gives remainder
        

		// Make postion vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

		// Spawn a block
		APuzzle2Block* NewBlock = GetWorld()->SpawnActor<APuzzle2Block>(BlockLocation, FRotator(0,0,0));
        //Save the pointer to the block
        blockptrs[(BlockIndex/Size)+1][(BlockIndex%Size)+1] = NewBlock;
        
        
		// Tell the block about its owner
		if(NewBlock != NULL)
		{
			NewBlock->OwningGrid = this;
		}
        
	}
    for (int i = 1; i <=Size; i++) {
        for (int j = 1; j <=Size; j++) {
            blockptrs[i][j]->bt = blockptrs[i-1][j];
            blockptrs[i][j]->bb = blockptrs[i+1][j];
            blockptrs[i][j]->bl = blockptrs[i][j-1];
            blockptrs[i][j]->br = blockptrs[i][j+1];
        }
    }

    
}


void APuzzle2BlockGrid::AddScore()
{
	// Increment score
	Score++;

	// Update text
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(Score)));
    
}
void APuzzle2BlockGrid::DecreaseTimer()
{
    
    // Decrement Timer
    Timer--;
    
   
    minutes = Timer/60;
    seconds = Timer % 60;
    
    
    // Update text
    if(Timer>0) {
        TimerText->SetText(FText::Format(LOCTEXT("TimerFmt", "Timer: {0}:{1}"), FText::AsNumber(minutes),      FText::AsNumber(seconds)));
    } else {
        TimerText->SetText(FText::Format(LOCTEXT("TimerFmt", "Game Over"), FText()));
    }
    
}
#undef LOCTEXT_NAMESPACE
