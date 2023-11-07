// Copyright Epic Games, Inc. All Rights Reserved.

#include "FP_SKIGameMode.h"
#include "FP_SKICharacter.h"
#include "UObject/ConstructorHelpers.h"

AFP_SKIGameMode::AFP_SKIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
