#pragma once
#include "CoreMinimal.h"
#include "Components/ModelComponent.h"
#include "VoxelIntBox.h"
#include "VoxelProceduralMeshComponent.generated.h"

class UBodySetup;
class UStaticMeshComponent;
class AVoxelWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelProceduralMeshComponent : public UModelComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetupBeingCooked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    UVoxelProceduralMeshComponent();
    UFUNCTION(BlueprintCallable)
    static void SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld);
    
};

