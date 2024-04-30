// Fill out your copyright notice in the Description page of Project Settings.

#include "PluginTestingMenuGameMode.h"
#include "DebugDeveloperSettings.h"
#include "GameInstanceSubsystems/TAB_GameCreatorSubsystem.h"

void APluginTestingMenuGameMode::BeginPlay()
{
	// Override GameModes for PluginTesting Game. controlled by in Editor Debug Options for faster testing. //TODO: There maybe a better place to set these options.
	UDebugDeveloperSettings* DebugSettings = GetMutableDefault<UDebugDeveloperSettings>();
	if (DebugSettings == nullptr) { return; }

	if (DebugSettings->bDebugOverrideGameModes)
	{
		// get GameCreator.
		UTAB_GameCreatorSubsystem* GameCreator = GetWorld()->GetGameInstance()->GetSubsystem<UTAB_GameCreatorSubsystem>();
		if (GameCreator == nullptr)
		{
			return;
		}

		/*	
			GameInstanceSubsystems/TAB_GameCreatorSubsystem.h
			void SetGameModes(const TArray<FGameModeStruct>&inGameModes);
			void SetLobbyGameModes(const TArray<FGameMapStruct>&inLobbyMaps);
			TArray<FGameModeStruct> GameModes{ FGameModeStruct("TAB_Unique678", 2, { FGameMapStruct(FText::FromString("Default Map"), "/TAB_Game/Maps/EXAMPLE_InGame") }) };
			TArray <FGameMapStruct> LobbyMaps{ FGameMapStruct(FText::FromString("Default Map"), "/TAB_Game/Maps/EXAMPLE_Lobby") };
		*/

		TArray<FGameModeStruct> GameModes{ FGameModeStruct("PluginTestingGameMode", 2, { FGameMapStruct(FText::FromString("Plugin Testing Map"), "/Game/ThirdPerson/Maps/ThirdPersonMap") }) };
		GameCreator->SetGameModes(GameModes);
	}

	Super::BeginPlay();
}
