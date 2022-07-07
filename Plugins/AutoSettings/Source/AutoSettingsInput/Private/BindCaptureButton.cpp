#include "BindCaptureButton.h"

class UBindCapturePrompt;

UBindCapturePrompt* UBindCaptureButton::StartCapture() {
    return NULL;
}

void UBindCaptureButton::InitializePrompt_Implementation(UBindCapturePrompt* PromptWidget) {
}

void UBindCaptureButton::ChordCaptured(FCapturedInput CapturedInput) {
}

UBindCaptureButton::UBindCaptureButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BindCapturePromptClass = NULL;
    this->CapturePromptZOrder = 1;
    this->Prompt = NULL;
}

