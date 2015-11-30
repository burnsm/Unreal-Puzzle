// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Puzzle2.h"
#include "Puzzle2GameMode.h"
#include "Puzzle2PlayerController.h"

APuzzle2GameMode::APuzzle2GameMode()
{
	// no pawn by default
	DefaultPawnClass = NULL;
	// use our own player controller class
	PlayerControllerClass = APuzzle2PlayerController::StaticClass();
}
