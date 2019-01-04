// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ARPG_demoreelGameMode.h"
#include "ARPG_demoreelPlayerController.h"
#include "ARPG_demoreelCharacter.h"
#include "UObject/ConstructorHelpers.h"

AARPG_demoreelGameMode::AARPG_demoreelGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AARPG_demoreelPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}