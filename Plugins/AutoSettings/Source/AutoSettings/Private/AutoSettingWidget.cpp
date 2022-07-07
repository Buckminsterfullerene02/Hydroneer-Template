#include "AutoSettingWidget.h"

void UAutoSettingWidget::UpdateSelection_Implementation(const FString& Value) {
}

void UAutoSettingWidget::Save() {
}

bool UAutoSettingWidget::HasUnsavedChange() const {
    return false;
}

bool UAutoSettingWidget::HasUnappliedChange() const {
    return false;
}

void UAutoSettingWidget::Cancel() {
}

void UAutoSettingWidget::ApplySettingValue(const FString& Value, bool bSaveIfPossible) {
}

void UAutoSettingWidget::Apply() {
}

UAutoSettingWidget::UAutoSettingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ValueMask = NULL;
    this->bAutoSave = true;
    this->bAutoApply = true;
    this->bHasUnappliedChange = false;
    this->bHasUnsavedChange = false;
    this->bUpdatingSettingSelection = false;
}

