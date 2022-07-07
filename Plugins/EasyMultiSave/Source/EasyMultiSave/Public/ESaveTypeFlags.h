#pragma once
#include "CoreMinimal.h"
#include "ESaveTypeFlags.generated.h"

UENUM(BlueprintType)
enum class ESaveTypeFlags : uint8 {
    SF_Player,
    SF_Level,
    SF_MAX UMETA(Hidden),
};

