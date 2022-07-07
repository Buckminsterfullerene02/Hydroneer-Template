#include "RadioButton.h"



void URadioButton::TriggerSelection() {
}

void URadioButton::SetValue(const FString& InValue) {
}

void URadioButton::SetSelected(bool InSelected) {
}

void URadioButton::SetLabel(FText InLabel) {
}

FString URadioButton::GetValue() const {
    return TEXT("");
}

bool URadioButton::GetSelected() const {
    return false;
}

FText URadioButton::GetLabel() const {
    return FText::GetEmpty();
}

URadioButton::URadioButton() : UUserWidget(FObjectInitializer::Get()) {
    this->Selected = false;
}

