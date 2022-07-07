#include "SettingsManager.h"

void USettingsManager::SaveSettingStatic(FAutoSettingData SettingData) {
}

void USettingsManager::RegisterStringCVarSettingWithCallback(FName Name, const FString& DefaultValue, const FString& Help, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void USettingsManager::RegisterStringCVarSetting(FName Name, const FString& DefaultValue, const FString& Help) {
}

void USettingsManager::RegisterIntCVarSettingWithCallback(FName Name, int32 DefaultValue, const FString& Help, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void USettingsManager::RegisterIntCVarSetting(FName Name, int32 DefaultValue, const FString& Help) {
}

void USettingsManager::RegisterFloatCVarSettingWithCallback(FName Name, float DefaultValue, const FString& Help, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void USettingsManager::RegisterFloatCVarSetting(FName Name, float DefaultValue, const FString& Help) {
}

void USettingsManager::RegisterBoolCVarSettingWithCallback(FName Name, bool DefaultValue, const FString& Help, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately) {
}

void USettingsManager::RegisterBoolCVarSetting(FName Name, bool DefaultValue, const FString& Help) {
}

FString USettingsManager::GetValue(FName Key, bool bPreferConfigValue) {
    return TEXT("");
}

void USettingsManager::AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier) {
}

void USettingsManager::ApplySettingStatic(FAutoSettingData SettingData) {
}

USettingsManager::USettingsManager() {
    this->IniFilename = TEXT("C:/Users/Bobby/AppData/Local/Mining/Saved/Config/WindowsNoEditor/Settings.ini");
}

