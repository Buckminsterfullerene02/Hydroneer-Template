#pragma once
#include "CoreMinimal.h"
#include "VoxelLandscapeMaterialCollectionPermutation.generated.h"

USTRUCT(BlueprintType)
struct FVoxelLandscapeMaterialCollectionPermutation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Names[6];
    
    VOXEL_API FVoxelLandscapeMaterialCollectionPermutation();
};

