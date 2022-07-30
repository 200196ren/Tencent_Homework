// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NewAndroidProject : ModuleRules
{
	public NewAndroidProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
