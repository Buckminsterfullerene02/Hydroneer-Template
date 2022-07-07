#include "EMSObject.h"

class AActor;

void UEMSObject::OuterActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UEMSObject::UEMSObject() {
    this->World = NULL;
    this->CachedSlotInfoSave = NULL;
    this->CachedPersistentSave = NULL;
    this->CachedProfileSave = NULL;
}

