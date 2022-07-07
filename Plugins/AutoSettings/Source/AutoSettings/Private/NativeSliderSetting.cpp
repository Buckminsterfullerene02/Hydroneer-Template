#include "NativeSliderSetting.h"

void UNativeSliderSetting::SliderValueChanged(float NewValue) {
}

void UNativeSliderSetting::SliderMouseCaptureEnd() {
}

void UNativeSliderSetting::SliderMouseCaptureBegin() {
}

UNativeSliderSetting::UNativeSliderSetting() {
    this->Slider = NULL;
    this->bMouseCaptureInProgress = false;
}

