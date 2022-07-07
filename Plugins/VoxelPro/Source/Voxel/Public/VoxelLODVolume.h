#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "VoxelLODVolume.generated.h"

class UVoxelVolumeInvokerComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelLODVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVoxelVolumeInvokerComponent* InvokerComponent;
    
    AVoxelLODVolume();
};

