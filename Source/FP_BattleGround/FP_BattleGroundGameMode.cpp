// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FP_BattleGroundGameMode.h"
#include "FP_BattleGroundHUD.h"
#include "FP_BattleGroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFP_BattleGroundGameMode::AFP_BattleGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFP_BattleGroundHUD::StaticClass();
}
