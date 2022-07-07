#include "VoxelPhysicsTools.h"

class UObject;
class AVoxelWorld;
class UVoxelPhysicsPartSpawnerResult;
class IVoxelPhysicsPartSpawnerResult;
class UVoxelPhysicsPartSpawner;
class IVoxelPhysicsPartSpawner;

void UVoxelPhysicsTools::ApplyVoxelPhysics(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult>>& Results, AVoxelWorld* World, FVoxelIntBox Bounds, TScriptInterface<IVoxelPhysicsPartSpawner> PartSpawner, int32 MinParts, bool bDebug, bool bHideLatentWarnings) {
}

UVoxelPhysicsTools::UVoxelPhysicsTools() {
}

