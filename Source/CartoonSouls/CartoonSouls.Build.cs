// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CartoonSouls : ModuleRules
{
	public CartoonSouls(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "AIModule", "GameplayCameras" });
	}
}
