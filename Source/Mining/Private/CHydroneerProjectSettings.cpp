#include "CHydroneerProjectSettings.h"

class UCHydroneerProjectSettings;

UCHydroneerProjectSettings* UCHydroneerProjectSettings::Get() {
    return NULL;
}

UCHydroneerProjectSettings::UCHydroneerProjectSettings() {
    this->bDebugMainMenu = true;
}

