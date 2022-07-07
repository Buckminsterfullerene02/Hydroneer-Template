#pragma once
#include "CoreMinimal.h"
#include "VoxelPureNode.h"
#include "VoxelNode_RGBToHSV.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_RGBToHSV : public UVoxelPureNode {
    GENERATED_BODY()
public:
    UVoxelNode_RGBToHSV();
};

