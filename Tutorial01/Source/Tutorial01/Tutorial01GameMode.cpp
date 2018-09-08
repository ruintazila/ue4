// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Tutorial01GameMode.h"
#include "Tutorial01HUD.h"
#include "Tutorial01Character.h"
#include "UObject/ConstructorHelpers.h"

ATutorial01GameMode::ATutorial01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATutorial01HUD::StaticClass();
}
