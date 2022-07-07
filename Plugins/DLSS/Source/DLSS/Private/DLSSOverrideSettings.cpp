#include "DLSSOverrideSettings.h"

UDLSSOverrideSettings::UDLSSOverrideSettings() {
    this->EnableDLSSInEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->EnableScreenpercentageManipulationInDLSSEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->EnableDLSSInPlayInEditorViewportsOverride = EDLSSSettingOverride::Enabled;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
    this->ShowDLSSSDebugOnScreenMessages = EDLSSSettingOverride::UseProjectSettings;
}

