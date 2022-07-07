#include "SelectSetting.h"

void USelectSetting::UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions) {
}

void USelectSetting::RegenerateOptions() {
}

USelectSetting::USelectSetting() {
    this->OptionFactory = NULL;
    this->bUpdatingSettingOptions = false;
}

