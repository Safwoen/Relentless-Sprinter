// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Relentless_Sprinter : ModuleRules
{
	public Relentless_Sprinter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
