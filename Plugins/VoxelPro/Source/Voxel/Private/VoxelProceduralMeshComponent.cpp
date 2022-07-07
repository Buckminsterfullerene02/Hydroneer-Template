#include "VoxelProceduralMeshComponent.h"

class AVoxelWorld;

void UVoxelProceduralMeshComponent::SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen) {
}


bool UVoxelProceduralMeshComponent::AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld) {
    return false;
}

UVoxelProceduralMeshComponent::UVoxelProceduralMeshComponent() {
    this->BodySetup = NULL;
    this->BodySetupBeingCooked = NULL;
    this->StaticMeshComponent = NULL;
}

void UVoxelProceduralMeshComponent::CreateRenderState_Concurrent()
{
    // Make sure cached cull distance is up-to-date if its zero and we have an LD cull distance
    if( CachedMaxDrawDistance == 0.f && LDMaxDrawDistance > 0.f )
    {
        CachedMaxDrawDistance = LDMaxDrawDistance;
    }

    Super::CreateRenderState_Concurrent();

    UpdateBounds();

    // If the primitive isn't hidden and the detail mode setting allows it, add it to the scene.
    if (ShouldComponentAddToScene())
    {
        GetWorld()->Scene->AddPrimitive(this);
    }

    // To prevent processing components twice (since they are also processed in the FLevelTextureManager when the level becomes visible)
    // here we only handles component that are already dynamic and that need an updates.
    if (bHandledByStreamingManagerAsDynamic)
    {
        FStreamingManagerCollection* Collection = IStreamingManager::Get_Concurrent();
        if (Collection)
        {
            Collection->NotifyPrimitiveUpdated_Concurrent(this);
        }
    }
}