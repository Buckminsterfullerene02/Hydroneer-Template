#include "VoxelCubicLibrary.h"

class AVoxelWorld;

void UVoxelCubicLibrary::SetCubicVoxelValue(AVoxelWorld* World, FIntVector Position, bool bValue) {
}

bool UVoxelCubicLibrary::GetCubicVoxelValue(AVoxelWorld* World, FIntVector Position) {
    return false;
}

FIntVector UVoxelCubicLibrary::GetCubicVoxelPositionFromHit(AVoxelWorld* World, FVector HitPosition, FVector HitNormal, bool bSelectVoxelOutside) {
    return FIntVector{};
}

UVoxelCubicLibrary::UVoxelCubicLibrary() {
}

