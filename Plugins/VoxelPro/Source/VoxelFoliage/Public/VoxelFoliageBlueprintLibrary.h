#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "VoxelIntBox.h"
#include "EVoxelSpawnerActorSpawnType.h"
#include "VoxelFoliageSave.h"
#include "VoxelInstancedMeshKey.h"
#include "UObject/NoExportTypes.h"
#include "VoxelFoliageBlueprintLibrary.generated.h"

class AVoxelWorld;
class AVoxelFoliageActor;
class UVoxelHierarchicalInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class VOXELFOLIAGE_API UVoxelFoliageBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelFoliageBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SpawnVoxelSpawnerActorsInArea(TArray<AVoxelFoliageActor*>& OutActors, AVoxelWorld* World, FVoxelIntBox Bounds, EVoxelSpawnerActorSpawnType SpawnType);
    
    UFUNCTION(BlueprintCallable)
    static AVoxelFoliageActor* SpawnVoxelSpawnerActorByInstanceIndex(AVoxelWorld* World, UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void LoadFromSpawnersSave(AVoxelWorld* World, const FVoxelFoliageSave& Save);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelFoliageSave GetSpawnersSave(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void AddInstances(AVoxelWorld* World, const TArray<FTransform>& Transforms, const TArray<float>& CustomData, FVoxelInstancedMeshKey MeshKey, FVector FloatingDetectionOffset);
    
};

