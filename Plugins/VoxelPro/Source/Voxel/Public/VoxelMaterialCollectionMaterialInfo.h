#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialCollectionMaterialInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelMaterialCollectionMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Index;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameOverride;
    
    FVoxelMaterialCollectionMaterialInfo();
};

