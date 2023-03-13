// Copyright Epic Games, Inc. All Rights Reserved.

#include "Group6JellyGameGameMode.h"
#include "Group6JellyGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroup6JellyGameGameMode::AGroup6JellyGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
