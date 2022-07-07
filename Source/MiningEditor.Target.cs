using UnrealBuildTool;

public class MiningEditorTarget : TargetRules {
	public MiningEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Mining",
		});
	}
}
