// Fill out your copyright notice in the Description page of Project Settings.


#include "PluginTestingMenuGameMode.h"
#include "Subsystems/TAB_GameCreatorSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PluginTestingMenuGameMode)

void APluginTestingMenuGameMode::BeginPlay()
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

	//TODO: Should be a better place to set these game specific set once values.
	TArray<FGameModeStruct> GameModes{ FGameModeStruct("PluginTestingGameMode", 2, { FGameMapStruct(FText::FromString("Plugin Testing Map"), "/Game/ThirdPerson/Lvl_ThirdPerson") }) };
	GameCreator->SetGameModes(GameModes);
	TArray <FGameMapStruct> MainMenuMaps{ FGameMapStruct(FText::FromString("Main Menu Map"), "/Game/Maps/GameStartupMap") };
	GameCreator->SetMainMenuMaps(MainMenuMaps);

	Super::BeginPlay();
}
