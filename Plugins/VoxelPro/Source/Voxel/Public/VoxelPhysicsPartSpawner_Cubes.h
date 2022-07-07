#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelPhysicsPartSpawner.h"
#include "VoxelPhysicsPartSpawner_Cubes.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsPartSpawner_Cubes : public UObject, public IVoxelPhysicsPartSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CubeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnProbability;
    
    UVoxelPhysicsPartSpawner_Cubes();
    
    // Fix for true pure virtual functions not being implemented
};

