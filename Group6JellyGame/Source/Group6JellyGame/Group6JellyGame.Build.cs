// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Group6JellyGame : ModuleRules
{
	public Group6JellyGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
