// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE5_CPP_Pacman_cloneEditorTarget : TargetRules
{
	public UE5_CPP_Pacman_cloneEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "UE5_CPP_Pacman_clone" } );
	}
}
