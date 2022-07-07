#include "VoxelFoliageActor.h"
#include "Components/StaticMeshComponent.h"
#include "VoxelPhysicsRelevancyComponent.h"

AVoxelFoliageActor::AVoxelFoliageActor() {
    this->bAutomaticallySetMesh = true;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->PhysicsRelevancyComponent = CreateDefaultSubobject<UVoxelPhysicsRelevancyComponent>(TEXT("VoxelPhysicsRelevancyComponent"));
}

