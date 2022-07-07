#include "VoxelSphereTool.h"

UVoxelSphereTool::UVoxelSphereTool() {
    this->bSculpt = true;
    this->bEnableIndexInterval = false;
    this->bPaint = false;
    this->PaintStrength = 0.50f;
    this->FalloffType = EVoxelFalloff::Smooth;
    this->Falloff = 0.50f;
}

