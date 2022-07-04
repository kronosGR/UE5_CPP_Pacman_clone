// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE5_CPP_Pacman_cloneTarget : TargetRules
{
	public UE5_CPP_Pacman_cloneTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "UE5_CPP_Pacman_clone" } );
	}
}
