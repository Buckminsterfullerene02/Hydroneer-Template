#pragma once
#include "CoreMinimal.h"
#include "VoxelToolsBase.h"
#include "Engine/LatentActionManager.h"
#include "ModifiedVoxelMaterial.h"
#include "ModifiedVoxelValue.h"
#include "VoxelSurfaceEditsProcessedVoxels.h"
#include "VoxelIntBox.h"
#include "VoxelPaintMaterial.h"
#include "VoxelSurfaceEditTools.generated.h"

class UObject;
class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelSurfaceEditTools : public UVoxelToolsBase {
    GENERATED_BODY()
public:
    UVoxelSurfaceEditTools();
    UFUNCTION(BlueprintCallable)
    static void PropagateVoxelMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void PropagateVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable)
    static void EditVoxelValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void EditVoxelValues(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable)
    static void EditVoxelMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void EditVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    
};

