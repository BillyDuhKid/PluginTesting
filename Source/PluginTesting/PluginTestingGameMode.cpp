// Copyright Epic Games, Inc. All Rights Reserved.

#include "PluginTestingGameMode.h"
#include "PluginTestingCharacter.h"
#include "UObject/ConstructorHelpers.h"

APluginTestingGameMode::APluginTestingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
