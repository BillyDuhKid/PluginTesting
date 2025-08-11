// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/TAB_MenuGameMode.h"
#include "PluginTestingMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINTESTING_API APluginTestingMenuGameMode : public ATAB_MenuGameMode
{
	GENERATED_BODY()

public:
	/** Initialization */
	virtual void BeginPlay() override;

};
