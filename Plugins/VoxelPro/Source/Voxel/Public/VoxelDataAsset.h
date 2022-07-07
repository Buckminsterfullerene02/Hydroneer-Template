#pragma once
#include "CoreMinimal.h"
#include "EVoxelDataAssetImportSource.h"
#include "VoxelTransformableGeneratorWithBounds.h"
#include "UObject/NoExportTypes.h"
#include "VoxelDataAssetImportSettings_MagicaVox.h"
#include "VoxelIntBox.h"
#include "VoxelDataAsset.generated.h"

UCLASS(Blueprintable, HideDropdown)
class VOXEL_API UVoxelDataAsset : public UVoxelTransformableGeneratorWithBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtractiveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PositionOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UncompressedSizeInMB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressedSizeInMB;
    
    UPROPERTY(EditAnywhere)
    EVoxelDataAssetImportSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Paths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelDataAssetImportSettings_MagicaVox ImportSettings_MagicaVox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoxelCustomVersion;
    
    UPROPERTY(EditAnywhere)
    uint32 ValueConfigFlag;
    
    UPROPERTY(EditAnywhere)
    uint32 MaterialConfigFlag;
    
public:
    UVoxelDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVoxelIntBox GetBounds() const;
    
};

