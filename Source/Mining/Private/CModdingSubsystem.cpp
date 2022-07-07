#include "CModdingSubsystem.h"

class UCModdingSubsystem;

void UCModdingSubsystem::UnloadMod(const FString& ModName) {
}

void UCModdingSubsystem::UninstallUnsubscribedMods() {
}

void UCModdingSubsystem::LoadMod(const FString& ModName) {
}

void UCModdingSubsystem::InstallAllPending() {
}

UCModdingSubsystem* UCModdingSubsystem::GetModdingSubsystem() {
    return NULL;
}

TArray<FString> UCModdingSubsystem::GetLoadedMods() {
    return TArray<FString>();
}

TArray<FString> UCModdingSubsystem::GetInstalledMods() {
    return TArray<FString>();
}

TArray<FPublishedFileID> UCModdingSubsystem::GetAllSubscribedMods() {
    return TArray<FPublishedFileID>();
}

UCModdingSubsystem::UCModdingSubsystem() {
}

