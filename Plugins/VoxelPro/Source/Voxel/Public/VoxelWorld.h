#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VoxelRuntimeActor.h"
#include "VoxelCompressedWorldSave.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoxelWorldCreateInfo.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoxelIntBox.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelWorldCoordinatesRounding.h"
#include "VoxelGeneratorInit.h"
#include "VoxelWorld.generated.h"

class UVoxelGenerator;
class UVoxelWorldRootComponent;
class UVoxelLineBatchComponent;
class UVoxelWorldSaveObject;
class UStaticMesh;
class UStaticMeshComponent;
class UObject;
class UVoxelMultiplayerInterface;
class UVoxelGeneratorCache;
class UVoxelPlaceableItemActorHelper;
class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API AVoxelWorld : public AVoxelRuntimeActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWorldLoaded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWorldDestroyed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMaxFoliageInstancesReached);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGenerateWorld);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateWorld OnGenerateWorld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldLoaded OnWorldLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldDestroyed OnWorldDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaxFoliageInstancesReached OnMaxFoliageInstancesReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVoxelWorldRootComponent* WorldRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVoxelLineBatchComponent* LineBatchComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelWorldSaveObject* SaveObject;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveFilePath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallySaveToFile;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppendDateToSavePath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecomputeNormalsBeforeBaking;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BakedMeshTemplate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStaticMeshComponent> BakedMeshComponentTemplate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath BakedDataPath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFoliageInEditor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyRefreshMaterials;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyRefreshFoliage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EditorOnly_NewScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfThreads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SpawnerConfig;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Seeds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVoxelMultiplayerInterface* MultiplayerInterfaceInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVoxelGeneratorCache* GeneratorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVoxelPlaceableItemActorHelper* PlaceableItemActorHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToggled;
    
public:
    AVoxelWorld();
    UFUNCTION(BlueprintCallable)
    void SetWorldSize(int32 NewWorldSizeInVoxel);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderOctreeDepth(int32 NewDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderOctreeChunkSize(int32 NewChunkSize);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratorObject(UVoxelGenerator* NewGenerator);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratorClass(TSubclassOf<UVoxelGenerator> NewGeneratorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    static void LogCompressedSaveSize(AVoxelWorld* VoxelWorld, FVoxelCompressedWorldSave Save);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_LocalToGlobalFloat(const FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox K2_LocalToGlobalBounds(const FVoxelIntBox& Bounds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_LocalToGlobal(const FIntVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_GlobalToLocalFloat(const FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVoxelIntBox K2_GlobalToLocalBounds(const FBox& Bounds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector K2_GlobalToLocal(FVector Position, EVoxelWorldCoordinatesRounding Rounding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIntVector> GetNeighboringPositions(const FVector& GlobalPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelMultiplayerInterface* GetMultiplayerInterfaceInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVoxelGeneratorInit GetGeneratorInit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelGeneratorCache* GetGeneratorCache() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyWorld();
    
    UFUNCTION(BlueprintCallable)
    void CreateWorld(FVoxelWorldCreateInfo Info);
    
    UFUNCTION(BlueprintCallable)
    UVoxelMultiplayerInterface* CreateMultiplayerInterfaceInstance();
    
};

