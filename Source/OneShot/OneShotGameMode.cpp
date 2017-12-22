// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "OneShotGameMode.h"
#include "OneShotHUD.h"
#include "OneShotCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOneShotGameMode::AOneShotGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOneShotHUD::StaticClass();
}
