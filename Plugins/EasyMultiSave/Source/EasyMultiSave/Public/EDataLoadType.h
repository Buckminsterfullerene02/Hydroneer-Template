#pragma once
#include "CoreMinimal.h"
#include "EDataLoadType.generated.h"

UENUM(BlueprintType)
enum class EDataLoadType : uint8 {
    DATA_Level,
    DATA_Player,
    DATA_Object,
    DATA_MAX UMETA(Hidden),
};

