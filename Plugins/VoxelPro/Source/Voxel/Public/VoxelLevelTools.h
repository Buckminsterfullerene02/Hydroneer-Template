#pragma once
#include "CoreMinimal.h"
#include "VoxelToolsBase.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "ModifiedVoxelValue.h"
#include "VoxelIntBox.h"
#include "VoxelLevelTools.generated.h"

class UObject;
class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelLevelTools : public UVoxelToolsBase {
    GENERATED_BODY()
public:
    UVoxelLevelTools();
    UFUNCTION(BlueprintCallable)
    static void LevelAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void Level(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
};

