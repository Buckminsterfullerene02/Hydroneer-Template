#include "EMSPluginSettings.h"

UEMSPluginSettings::UEMSPluginSettings() {
    this->DefaultSaveGameName = TEXT("MySaveGame");
    this->bPersistentPlayer = false;
    this->bPersistentGameMode = false;
    this->bAdvancedSpawnCheck = false;
    this->bSaveActorAffiliation = false;
    this->bAutoSaveStructs = true;
    this->bMultiThreadSaving = false;
    this->LoadMethod = ELoadMethod::LM_Deferred;
    this->FileNamingType = EFileSaveMethod::FM_Optimized;
    this->bCopyPersistentSave = false;
}

