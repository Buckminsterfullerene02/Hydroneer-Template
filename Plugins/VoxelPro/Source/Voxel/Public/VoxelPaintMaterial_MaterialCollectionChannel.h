#pragma once
#include "CoreMinimal.h"
#include "VoxelPaintMaterial_MaterialCollectionChannel.generated.h"

USTRUCT(BlueprintType)
struct FVoxelPaintMaterial_MaterialCollectionChannel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Channel;
    
    VOXEL_API FVoxelPaintMaterial_MaterialCollectionChannel();
};

