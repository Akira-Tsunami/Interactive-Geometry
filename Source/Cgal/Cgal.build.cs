// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class Cgal : ModuleRules
{
    public Cgal(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
		
		PublicSystemIncludePaths.Add(ModuleDirectory);
        
        PublicDependencyModuleNames.AddRange(new string[] { "Boost" });
        
        ShadowVariableWarningLevel = WarningLevel.Off;
		bDisableStaticAnalysis = true;
	}
}
