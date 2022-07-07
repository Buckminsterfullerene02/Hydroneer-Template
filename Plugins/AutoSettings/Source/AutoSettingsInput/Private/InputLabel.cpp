#include "InputLabel.h"

class APlayerController;

void UInputLabel::UpdateLabel_Implementation() {
}

void UInputLabel::MappingsChanged(APlayerController* Player) {
}

UInputLabel::UInputLabel() : UUserWidget(FObjectInitializer::Get()) {
    this->MappingGroup = -1;
    this->bUsePlayerKeyGroup = true;
}

