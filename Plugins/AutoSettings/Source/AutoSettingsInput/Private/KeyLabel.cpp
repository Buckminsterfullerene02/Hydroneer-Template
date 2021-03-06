#include "KeyLabel.h"

class UTexture;


void UKeyLabel::OnGlobalKeyIconTagsModified() {
}

bool UKeyLabel::HasValidKey() const {
    return false;
}

bool UKeyLabel::HasIcon() const {
    return false;
}

ESlateVisibility UKeyLabel::GetIconVisibility_Implementation() const {
    return ESlateVisibility::Visible;
}

FSlateBrush UKeyLabel::GetIconBrush_Implementation() const {
    return FSlateBrush{};
}

UTexture* UKeyLabel::GetIcon() const {
    return NULL;
}

ESlateVisibility UKeyLabel::GetDisplayNameVisibility_Implementation() const {
    return ESlateVisibility::Visible;
}

FText UKeyLabel::GetDisplayName() const {
    return FText::GetEmpty();
}

UKeyLabel::UKeyLabel() : UUserWidget(FObjectInitializer::Get()) {
    this->KeyInvalidText = FText::FromString(TEXT("-"));
    this->AxisScale = 0.00f;
}

