// Copyright Epic Games, Inc. All Rights Reserved.

#include "FP_SKI_V2GameMode.h"
#include "FP_SKI_V2Character.h"
#include "UObject/ConstructorHelpers.h"

AFP_SKI_V2GameMode::AFP_SKI_V2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
