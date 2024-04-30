// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DebugDeveloperSettings.generated.h"

/**
 *	Debug Options added to make testing the TAB_Game plugin faster and easier.
 */
UCLASS(Config = Game, Defaultconfig, meta = (DisplayName = "DEBUG Plugin Testing Options"))
class PLUGINTESTING_API UDebugDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Config, Category = "DEBUG Plugin Testing Options")
	bool bDebugOverrideGameModes{ true };

	UDebugDeveloperSettings();

};
