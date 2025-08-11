// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Game/TAB_GameMode.h"
//REM TAB_Game #include "GameFramework/GameModeBase.h"
#include "PluginTestingGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class APluginTestingGameMode : public ATAB_GameMode
//REM TAB_Game class APluginTestingGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	APluginTestingGameMode();
};



