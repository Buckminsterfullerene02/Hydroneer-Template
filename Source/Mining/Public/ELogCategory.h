#pragma once
#include "CoreMinimal.h"
#include "ELogCategory.generated.h"

UENUM(BlueprintType)
enum class ELogCategory : uint8 {
    SDK,
    Gameplay,
    Multiplayer,
    Items,
    SaveSystem,
    Physics,
    Loading,
    Misc,
};

