#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialNode.h"
#include "VoxelNode_MakeMaterialFromColor.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_MakeMaterialFromColor : public UVoxelMaterialNode {
    GENERATED_BODY()
public:
    UVoxelNode_MakeMaterialFromColor();
};

