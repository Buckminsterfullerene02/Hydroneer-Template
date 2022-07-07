#pragma once
#include "CoreMinimal.h"
#include "VoxelProjectionHit.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelLineTraceParameters.h"
#include "VoxelSurfaceEditsVoxels.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EVoxelProjectionShape.h"
#include "VoxelProjectionTools.generated.h"

class AActor;
class UObject;
class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelProjectionTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelProjectionTools();
    UFUNCTION(BlueprintPure)
    static FVoxelLineTraceParameters MakeVoxelLineTraceParameters(TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIntVector> GetHitsPositions(const TArray<FVoxelProjectionHit>& Hits);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetHitsAveragePosition(const TArray<FVoxelProjectionHit>& Hits);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetHitsAverageNormal(const TArray<FVoxelProjectionHit>& Hits);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindProjectionVoxelsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelProjectionHit>& Hits, AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector Position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindProjectionVoxels(TArray<FVoxelProjectionHit>& Hits, AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector Position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHitsWithExactValues(AVoxelWorld* World, const TArray<FVoxelProjectionHit>& Hits);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHits(const TArray<FVoxelProjectionHit>& Hits);
    
};

