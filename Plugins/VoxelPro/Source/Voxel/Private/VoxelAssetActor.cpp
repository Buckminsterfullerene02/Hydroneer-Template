#include "VoxelAssetActor.h"
#include "Components/SceneComponent.h"

AVoxelAssetActor::AVoxelAssetActor() {
    this->Priority = 0;
    this->bOverrideAssetBounds = false;
    this->bImportAsReference = true;
    this->bSubtractiveAsset = false;
    this->MergeMode = EVoxelAssetMergeMode::InnerValuesAndInnerMaterials;
    this->bSpawnNewVoxelWorld = false;
    this->bSimulatePhysics = true;
    this->PreviewLOD = 0;
    this->UpdateType = EVoxelAssetActorPreviewUpdateType::EndOfMove;
    this->bRoundAssetPosition = false;
    this->bRoundAssetRotation = false;
    this->MaxPreviewChunks = 1024;
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

