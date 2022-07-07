#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoxelFoliageActor.generated.h"

class UStaticMeshComponent;
class UVoxelPhysicsRelevancyComponent;

UCLASS(Blueprintable)
class VOXELFOLIAGE_API AVoxelFoliageActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallySetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVoxelPhysicsRelevancyComponent* PhysicsRelevancyComponent;
    
    AVoxelFoliageActor();
};

