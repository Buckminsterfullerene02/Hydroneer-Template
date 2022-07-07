#pragma once
#include "CoreMinimal.h"
#include "EVoxelFoliageSpawnType.generated.h"

UENUM(BlueprintType)
enum class EVoxelFoliageSpawnType : uint8 {
    Ray,
    Height,
};

