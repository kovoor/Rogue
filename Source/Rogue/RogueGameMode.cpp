// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RogueGameMode.h"
#include "RogueHUD.h"
#include "RogueCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARogueGameMode::ARogueGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARogueHUD::StaticClass();
}
