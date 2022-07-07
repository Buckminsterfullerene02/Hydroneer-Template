#include "AutoSettingsInputProjectConfig.h"

class UTexture;

TArray<UTexture*> UAutoSettingsInputProjectConfig::LoadKeyIcons(FGameplayTagContainer KeyIconTags) {
    return TArray<UTexture*>();
}

FGameplayTag UAutoSettingsInputProjectConfig::GetKeyGroupStatic(FKey Key) {
    return FGameplayTag{};
}

FText UAutoSettingsInputProjectConfig::GetKeyFriendlyNameStatic(FKey Key) {
    return FText::GetEmpty();
}

UAutoSettingsInputProjectConfig::UAutoSettingsInputProjectConfig() {
}

