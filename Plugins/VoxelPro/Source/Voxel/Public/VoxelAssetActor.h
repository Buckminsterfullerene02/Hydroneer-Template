#pragma once
#include "CoreMinimal.h"
#include "VoxelPlaceableItemActor.h"
#include "VoxelTransformableGeneratorPicker.h"
#include "VoxelIntBox.h"
#include "EVoxelAssetActorPreviewUpdateType.h"
#include "EVoxelAssetMergeMode.h"
#include "VoxelAssetActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelAssetActor : public AVoxelPlaceableItemActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelTransformableGeneratorPicker Generator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAssetBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelIntBox AssetBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportAsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtractiveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelAssetMergeMode MergeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnNewVoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewLOD;
    
    UPROPERTY(EditAnywhere)
    EVoxelAssetActorPreviewUpdateType UpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoundAssetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoundAssetRotation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 MaxPreviewChunks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    AVoxelAssetActor();
};

