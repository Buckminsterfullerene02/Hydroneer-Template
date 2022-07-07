#include "CHydroneerLibrary.h"

class UPrimitiveComponent;

bool UCHydroneerLibrary::StringToClassRef(const FString& ClassStringName, UClass*& OutClass) {
    return false;
}

void UCHydroneerLibrary::SetHiddenShadow(bool bNewCastHiddenShadow, UPrimitiveComponent* Target) {
}

void UCHydroneerLibrary::SetCanAffectNavigation(bool bCanAffectNavigation, UPrimitiveComponent* Target) {
}

FString UCHydroneerLibrary::SanitizeString(const FString& Filename) {
    return TEXT("");
}

bool UCHydroneerLibrary::RenameSave(const FString& OriginalSaveName, const FString& NewSaveName) {
    return false;
}

void UCHydroneerLibrary::ReloadInput(bool bReload) {
}

FString UCHydroneerLibrary::GetSaveDirectory() {
    return TEXT("");
}

void UCHydroneerLibrary::GetSaveBackupNames(const FString& SaveName, TArray<FString>& OutBackups) {
}

int32 UCHydroneerLibrary::GetHighestCurrentSaveIndex(const FString& SaveName) {
    return 0;
}

UClass* UCHydroneerLibrary::GetBlueprintAssetClass(const FAssetData& Asset) {
    return NULL;
}

FString UCHydroneerLibrary::GetAppdataLocalDir() {
    return TEXT("");
}

TArray<FString> UCHydroneerLibrary::FindFolders(const FString& FilePath) {
    return TArray<FString>();
}

void UCHydroneerLibrary::CopyOverDirectory(const FString& OldDirectory, const FString& NewDirectory) {
}

void UCHydroneerLibrary::BackupSave(const FString& SaveName, bool bIncrementSave, int32 MaxIncrements) {
}

UCHydroneerLibrary::UCHydroneerLibrary() {
}

