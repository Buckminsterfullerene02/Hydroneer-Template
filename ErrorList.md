Switch the GameProjectGenerator version to 4.26 & generate solution files. Build project. Run commandlet.

Generate solution files for generated project.

Duplicate MiningEditor.Target.cs in Source/ and rename to MiningGame.Target.cs. Then replace any instances of `Editor` with `Game` i.e. add this code:
```cs
using UnrealBuildTool;

public class MiningGameTarget : TargetRules {
	public MiningGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Mining",
		});
	}
}
```

Add this to the plugins list in Mining.uproject:
```json
{
	"Name": "MobilePatchingUtils",
	"Enabled": false
}
```

In:
- VoxelSettings.h
- SteamCoreWebSettings.h
- SteamCoreSettings.h
- SubstanceSettings.h
- EMSPluginSettings.h
- DLSSOverrideSettings.h
- DLSSSettings.h, add `, config = Engine` to the `UCLASS()` macro.

Comment out/delete the `FConfigureVoxelWorld` type + macro in VoxelPhysicsPartSpawner_VoxelWorlds.h.

In:
- MaterialExpressionBlendMaterialAttributesBarycentric.h
- MaterialPackInput.h
- MaterialExpressionUnpack.h, remove the `BlueprintReadWrite` flags from the macros of the `FExpressionInput` types.

In:
- SteamCoreJson.h/.cpp
- SubstanceGraphInstance.h/.cpp, rename the lowercase `var bool` to `Bool`.

in SubstanceGraphInstance.h/.cpp comment out the `UMaterialInstanceConstant* ConstantCreatedMaterial;` and macro.

In VoxelLandscapeMaterialCollection.h & VoxelCachedMaterialCollection.h, comment out the `TMap<> MaterialCache` and macro.

In VoxelRuntimeActor.h/.cpp, comment out `PhysMaterialOverride;` and macro.

In SteamCoreVoice.h/.cpp, comment out the constructor.

In Mining.Build.cs & SubstanceCore.Build.cs, add `RenderCore` to the modules list.

In VoxelProceduralMeshComponent.h/.cpp, add the `UPrimitiveComponent` interface, i.e. like this:

VoxelProceduralMeshComponent.h:
```c++
#pragma once
#include "CoreMinimal.h"
#include "Components/ModelComponent.h"
#include "VoxelIntBox.h"
#include "VoxelProceduralMeshComponent.generated.h"

class UBodySetup;
class UStaticMeshComponent;
class AVoxelWorld;
class UModelComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelProceduralMeshComponent : public UModelComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetupBeingCooked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld);

//~ Begin UPrimitiveComponent Interface.
	virtual void CreateRenderState_Concurrent(FRegisterComponentContext* Context) override;
	virtual void DestroyRenderState_Concurrent() override;
	virtual bool GetLightMapResolution( int32& Width, int32& Height ) const override;
	virtual int32 GetStaticLightMapResolution() const override;
	virtual void GetLightAndShadowMapMemoryUsage( int32& LightMapMemoryUsage, int32& ShadowMapMemoryUsage ) const override;
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual bool ShouldRecreateProxyOnUpdateTransform() const override;
#if WITH_EDITOR
	virtual void GetStaticLightingInfo(FStaticLightingPrimitiveInfo& OutPrimitiveInfo,const TArray<ULightComponent*>& InRelevantLights,const FLightingBuildOptions& Options) override;
	virtual void AddMapBuildDataGUIDs(TSet<FGuid>& InGUIDs) const override;
#endif
	virtual ELightMapInteractionType GetStaticLightingType() const override	{ return LMIT_Texture;	}
	virtual void GetStreamingRenderAssetInfo(FStreamingTextureLevelContext& LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo>& OutStreamingRenderAssets) const override;
	virtual void GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials = false) const override;
	virtual class UBodySetup* GetBodySetup() override { return ModelBodySetup; };
	virtual int32 GetNumMaterials() const override;
	virtual UMaterialInterface* GetMaterial(int32 MaterialIndex) const override;
	virtual UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const override;
	virtual bool IsPrecomputedLightingValid() const override;
	//~ End UPrimitiveComponent Interface.

	//~ Begin UActorComponent Interface.
	virtual void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) override;
	virtual void PropagateLightingScenarioChange() override;
	//~ End UActorComponent Interface.

	//~ Begin UObject Interface.
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
	virtual bool IsNameStableForNetworking() const override;
#if WITH_EDITOR
	virtual void PostEditUndo() override;
#endif // WITH_EDITOR
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
	//~ End UObject Interface.

	//~ Begin Interface_CollisionDataProvider Interface
	virtual bool GetPhysicsTriMeshData(struct FTriMeshCollisionData* CollisionData, bool InUseAllTriData) override;
	virtual bool ContainsPhysicsTriMeshData(bool InUseAllTriData) const override;
	virtual bool WantsNegXTriMesh() override { return false; }
	//~ End Interface_CollisionDataProvider Interface

	#if WITH_EDITOR
	/**
	 *	Generate the Elements array.
	 *
	 *	@param	bBuildRenderData	If true, build render data after generating the elements.
	 *
	 *	@return	bool				true if successful, false if not.
	 */
	virtual bool GenerateElements(bool bBuildRenderData);
#endif // WITH_EDITOR

    
};
```

VoxelProceduralMeshComponent.cpp:
```c++
#include "VoxelProceduralMeshComponent.h"

class AVoxelWorld;

void UVoxelProceduralMeshComponent::SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen) {
}


bool UVoxelProceduralMeshComponent::AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld) {
    return false;
}

UVoxelProceduralMeshComponent::UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
    this->BodySetup = NULL;
    this->BodySetupBeingCooked = NULL;
    this->StaticMeshComponent = NULL;
}


void UVoxelProceduralMeshComponent::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	/*UVoxelProceduralMeshComponent* This = CastChecked<UVoxelProceduralMeshComponent>(InThis);
	Collector.AddReferencedObject( This->StaticMeshComponent, This );
	AddReferencedObjects( This, Collector );*/
}



void UVoxelProceduralMeshComponent::Serialize(FArchive& Ar)
{
	/*Serialize(Ar);
	
	Ar << StaticMeshComponent;*/
}

void UVoxelProceduralMeshComponent::PostLoad()
{
	/*PostLoad();

	// Fix for old StaticMeshComponent components which weren't created with transactional flag.
	SetFlags( RF_Transactional );

	// BuildRenderData relies on the StaticMeshComponent having been post-loaded, so we ensure this by calling ConditionalPostLoad.
	check(StaticMeshComponent);
	StaticMeshComponent->ConditionalPostLoad();*/
	
}


bool UVoxelProceduralMeshComponent::IsNameStableForNetworking() const
{
	// UVoxelProceduralMeshComponent is always persistent for the duration of a game session, and so can be considered to have a stable name
	return true;
}

void UVoxelProceduralMeshComponent::GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials) const
{
	
}

int32 UVoxelProceduralMeshComponent::GetNumMaterials() const
{
	return 0;
}


UMaterialInterface* UVoxelProceduralMeshComponent::GetMaterial(int32 MaterialIndex) const
{
	UMaterialInterface* Material = nullptr;
	
	return Material;
}

UMaterialInterface* UVoxelProceduralMeshComponent::GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const
{
	UMaterialInterface* Result = nullptr;
	SectionIndex = 0;
	return Result;
}

bool UVoxelProceduralMeshComponent::IsPrecomputedLightingValid() const
{
	return false;
}


void UVoxelProceduralMeshComponent::GetStreamingRenderAssetInfo(FStreamingTextureLevelContext& LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo>& OutStreamingRenderAssets) const
{
	
}

void UVoxelProceduralMeshComponent::CreateRenderState_Concurrent(FRegisterComponentContext* Context)
{

}

void UVoxelProceduralMeshComponent::DestroyRenderState_Concurrent()
{
	
}

FPrimitiveSceneProxy* UVoxelProceduralMeshComponent::CreateSceneProxy()
{
	return NULL;
}

bool UVoxelProceduralMeshComponent::ShouldRecreateProxyOnUpdateTransform() const
{
	return true;
}

FBoxSphereBounds UVoxelProceduralMeshComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	return FBoxSphereBounds(LocalToWorld.GetLocation(), FVector::ZeroVector, 0.f);
}

void UVoxelProceduralMeshComponent::InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly)
{
	
}

void UVoxelProceduralMeshComponent::PropagateLightingScenarioChange()
{
}


bool UVoxelProceduralMeshComponent::GetLightMapResolution( int32& Width, int32& Height ) const
{
	return false;
}


int32 UVoxelProceduralMeshComponent::GetStaticLightMapResolution() const
{
	/*int32 Width;
	int32 Height;
	GetLightMapResolution(Width, Height);

	return FMath::Max<int32>(Width, Height);*/
	return NULL;
}


void UVoxelProceduralMeshComponent::GetLightAndShadowMapMemoryUsage( int32& LightMapMemoryUsage, int32& ShadowMapMemoryUsage ) const
{
	/*return;*/
}

void UVoxelProceduralMeshComponent::GetStaticLightingInfo(FStaticLightingPrimitiveInfo& OutPrimitiveInfo,const TArray<ULightComponent*>& InRelevantLights,const FLightingBuildOptions& Options)
{
	/*check(0);*/
}

void UVoxelProceduralMeshComponent::AddMapBuildDataGUIDs(TSet<FGuid>& InGUIDs) const
{
	
}

#if WITH_EDITOR
void UVoxelProceduralMeshComponent::PostEditUndo()
{
	/*PostEditUndo();*/
}
#endif // WITH_EDITOR

bool UVoxelProceduralMeshComponent::GetPhysicsTriMeshData(struct FTriMeshCollisionData* CollisionData, bool InUseAllTriData)
{
	return false;
}

bool UVoxelProceduralMeshComponent::ContainsPhysicsTriMeshData(bool InUseAllTriData) const
{
	return false;
}

bool UVoxelProceduralMeshComponent::GenerateElements(bool bBuildRenderData)
{
	return false;
}
```