// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WallrunGameMode.h"
#include "WallrunHUD.h"
#include "WallrunCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWallrunGameMode::AWallrunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWallrunHUD::StaticClass();
}
