// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealTestAprilGameMode.h"
#include "UnrealTestAprilCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealTestAprilGameMode::AUnrealTestAprilGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
