// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PluginTesting : ModuleRules
{
	public PluginTesting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "DeveloperSettings", "TAB_Game" });
	}
}
