#pragma once
#include "CoreMinimal.h"
#include "EFileSaveMethod.generated.h"

UENUM(BlueprintType)
enum class EFileSaveMethod : uint8 {
    FM_Legacy,
    FM_Optimized,
    FM_MAX UMETA(Hidden),
};

