// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugDeveloperSettings.h"
#include "PluginTesting.h"

UDebugDeveloperSettings::UDebugDeveloperSettings()
{
	// get needed settings from .ini file here.
	const UDebugDeveloperSettings* DebugSettings = GetDefault<UDebugDeveloperSettings>();
	if (DebugSettings == nullptr)
	{
		return;
	}

	bDebugOverrideGameModes = DebugSettings->bDebugOverrideGameModes;
}
