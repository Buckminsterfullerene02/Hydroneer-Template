#include "ComboBoxSetting.h"

void UComboBoxSetting::ComboBoxSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

UComboBoxSetting::UComboBoxSetting() {
    this->ComboBox = NULL;
}

