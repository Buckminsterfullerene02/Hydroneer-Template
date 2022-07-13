using UnrealBuildTool;

public class MiningGameTarget : TargetRules {
	public MiningGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Mining",
		});
	}
}