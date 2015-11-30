// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Puzzle2.h"
#include "Puzzle2PlayerController.h"

APuzzle2PlayerController::APuzzle2PlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
    DefaultMouseCursor = EMouseCursor::Crosshairs;
}
