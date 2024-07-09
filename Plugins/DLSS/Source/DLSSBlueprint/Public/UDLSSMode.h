#pragma once
#include "CoreMinimal.h"
#include "UDLSSMode.generated.h"

UENUM(BlueprintType)
enum class UDLSSMode : uint8 {
    Off,
    UltraPerformance,
    Performance,
    Balanced,
    Quality,
    UltraQuality,
};

