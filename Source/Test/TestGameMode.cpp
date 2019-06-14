// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestGameMode.h"
#include "TestPawn.h"

ATestGameMode::ATestGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ATestPawn::StaticClass();
}
