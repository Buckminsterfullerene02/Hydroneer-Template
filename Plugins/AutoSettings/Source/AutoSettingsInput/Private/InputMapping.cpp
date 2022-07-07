#include "InputMapping.h"

void UInputMapping::UpdateMapping_Implementation() {
}

void UInputMapping::UpdateLabel_Implementation() {
}

void UInputMapping::ChordCaptured(FCapturedInput CapturedInput) {
}

void UInputMapping::BindChord(FCapturedInput CapturedInput) {
}

UInputMapping::UInputMapping() : UUserWidget(FObjectInitializer::Get()) {
    this->MappingGroup = -1;
    this->BindCaptureButton = NULL;
}

