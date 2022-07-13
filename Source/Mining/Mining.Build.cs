using UnrealBuildTool;

public class Mining : ModuleRules {
    public Mining(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "CableComponent",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "SteamCore",
            "RenderCore"
        });
    }
}
