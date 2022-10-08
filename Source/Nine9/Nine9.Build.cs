// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Nine9 : ModuleRules
{
	public Nine9(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
