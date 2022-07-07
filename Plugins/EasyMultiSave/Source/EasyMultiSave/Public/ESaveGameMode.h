#pragma once
#include "CoreMinimal.h"
#include "ESaveGameMode.generated.h"

UENUM(BlueprintType)
enum class ESaveGameMode : uint8 {
    MODE_Player,
    MODE_Level,
    MODE_All,
    MODE_MAX UMETA(Hidden),
};

