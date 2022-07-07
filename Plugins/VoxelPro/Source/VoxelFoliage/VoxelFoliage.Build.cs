using UnrealBuildTool;

public class VoxelFoliage : ModuleRules {
    public VoxelFoliage(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "Landscape",
            "PhysicsCore",
            "Voxel",
        });
    }
}
