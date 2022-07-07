#include "EMSFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UEMSProfileSaveGame;
class UObject;
class UTextureRenderTarget2D;
class UEMSCustomSaveGame;
class UTexture2D;
class UEMSPersistentSaveGame;
class UEMSInfoSaveGame;

void UEMSFunctionLibrary::SetCurrentSaveUserName(UObject* WorldContextObject, const FString& UserName) {
}

void UEMSFunctionLibrary::SetCurrentSaveGameName(UObject* WorldContextObject, const FString& SaveGameName) {
}

void UEMSFunctionLibrary::SetActorSaveProperties(UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform) {
}

bool UEMSFunctionLibrary::SavePersistentObject(UObject* WorldContextObject) {
    return false;
}

bool UEMSFunctionLibrary::SaveLocalProfile(UObject* WorldContextObject) {
    return false;
}

bool UEMSFunctionLibrary::SaveCustom(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame) {
    return false;
}

bool UEMSFunctionLibrary::IsSavingOrLoading(UObject* WorldContextObject) {
    return false;
}

UTexture2D* UEMSFunctionLibrary::ImportSaveThumbnail(UObject* WorldContextObject, const FString& SaveGameName) {
    return NULL;
}

TArray<FString> UEMSFunctionLibrary::GetSortedSaveSlots(UObject* WorldContextObject) {
    return TArray<FString>();
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetSlotInfoSaveGame(UObject* WorldContextObject, FString& SaveGameName) {
    return NULL;
}

UEMSPersistentSaveGame* UEMSFunctionLibrary::GetPersistentSave(UObject* WorldContextObject) {
    return NULL;
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetNamedSlotInfo(UObject* WorldContextObject, const FString& SaveGameName) {
    return NULL;
}

UEMSProfileSaveGame* UEMSFunctionLibrary::GetLocalProfileSaveGame(UObject* WorldContextObject) {
    return NULL;
}

UEMSCustomSaveGame* UEMSFunctionLibrary::GetCustomSave(UObject* WorldContextObject, TSubclassOf<UEMSCustomSaveGame> SaveGameClass) {
    return NULL;
}

TArray<FString> UEMSFunctionLibrary::GetAllSaveUsers(UObject* WorldContextObject) {
    return TArray<FString>();
}

void UEMSFunctionLibrary::ExportSaveThumbnail(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName) {
}

bool UEMSFunctionLibrary::DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName) {
    return false;
}

void UEMSFunctionLibrary::DeleteSaveUser(UObject* WorldContextObject, const FString& UserName) {
}

void UEMSFunctionLibrary::DeleteLocalProfile(UObject* WorldContextObject) {
}

void UEMSFunctionLibrary::DeleteCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame) {
}

void UEMSFunctionLibrary::DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName) {
}

UEMSFunctionLibrary::UEMSFunctionLibrary() {
}

