#pragma once
#include "CoreMinimal.h"
#include "VoxelPureNode.h"
#include "VoxelNode_HSVToRGB.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_HSVToRGB : public UVoxelPureNode {
    GENERATED_BODY()
public:
    UVoxelNode_HSVToRGB();
};

