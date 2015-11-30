// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Actor.h"
#include "Puzzle2BlockGrid.generated.h"

/** Class used to spawn blocks and manage score */
UCLASS(minimalapi)
class APuzzle2BlockGrid : public AActor
{
	GENERATED_BODY()

	/** Dummy root component */
	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	/** Text component for the score */
	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UTextRenderComponent* ScoreText;
    
    /** Text component for the score */
    UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    class UTextRenderComponent* TimerText;

public:
	APuzzle2BlockGrid();

	/** How many blocks have been clicked */
	int32 Score;
    
    int32 Timer;
    
    int32 minutes, seconds;
    
    /* Handle to manage the timer */
    FTimerHandle PuzzleTimerHandle;
    

    
	/** Number of blocks along each side of grid */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	int32 Size;

	/** Spacing of blocks */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	float BlockSpacing;

	// Begin AActor interface
	virtual void BeginPlay() override;
	// End AActor interface
    
    /**Handle settingup the adjacent blocks**/
    void SettingUpAdjacentBlocks();

	/** Handle the block being clicked */
	void AddScore();
    
    /** Handle the timer */
    void DecreaseTimer();

public:
	/** Returns DummyRoot subobject **/
	FORCEINLINE class USceneComponent* GetDummyRoot() const { return DummyRoot; }
	/** Returns ScoreText subobject **/
	FORCEINLINE class UTextRenderComponent* GetScoreText() const { return ScoreText; }
    /** Returns ScoreText subobject **/
    FORCEINLINE class UTextRenderComponent* GetTimerText() const { return TimerText; }

};



