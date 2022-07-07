#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_SphereSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SphereSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_SphereSDF();
};

