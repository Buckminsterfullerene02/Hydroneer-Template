#include "EMSObject.h"

UEMSObject::UEMSObject() {
    this->World = NULL;
    this->CurrentSaveGameName = TEXT("                             d");
    this->CachedSlotInfoSave = NULL;
    this->CachedPersistentSave = NULL;
    this->CachedProfileSave = NULL;
}

void UEMSObject::OuterActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


