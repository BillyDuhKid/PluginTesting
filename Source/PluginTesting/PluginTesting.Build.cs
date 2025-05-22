// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PluginTesting : ModuleRules
{
	public PluginTesting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		//TODO: Remove CommonLoadingScreen when a version of it can be integrated to TAB_Game.
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "DeveloperSettings", "TAB_Game", "CommonLoadingScreen" });
	}
}
