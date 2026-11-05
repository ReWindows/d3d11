#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 15 member(s).
namespace NOutermost {
class CDeviceChild {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CDeviceChild@NOutermost@@QEAAXAEBUTConstructorArgs@12@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDeviceChild@NOutermost@@QEAAXXZ
    void FinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCBeginLayerDestruction@CDeviceChild@NOutermost@@UEAAXXZ
    virtual void LUCBeginLayerDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCCompleteInitialization@CDeviceChild@NOutermost@@UEAAXXZ
    virtual void LUCCompleteInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCCompleteLayerConstruction@CDeviceChild@NOutermost@@UEAAJXZ
    virtual long LUCCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCDeferDeletion@CDeviceChild@NOutermost@@UEAAHH@Z
    virtual int LUCDeferDeletion(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCDestroyStatus@CDeviceChild@NOutermost@@UEAA?AW4E_LUC_Destroy@@W43@@Z
    virtual int LUCDestroyStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCGetChildType@CDeviceChild@NOutermost@@UEAA?AW4ED3D11DeviceChildType@@XZ
    virtual int LUCGetChildType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCGetInternalIdentity@CDeviceChild@NOutermost@@UEAAJPEAPEAX@Z
    virtual long LUCGetInternalIdentity(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCPrepareForDestruction@CDeviceChild@NOutermost@@UEAAXXZ
    virtual void LUCPrepareForDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCRecycledCreate@CDeviceChild@NOutermost@@UEAAJPEBX_K@Z
    virtual long LUCRecycledCreate(void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCBreakCyclicReferences@CDeviceChild@NOutermost@@UEAAXXZ
    virtual void UCBreakCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCDestroy@CDeviceChild@NOutermost@@UEAAXXZ
    virtual void UCDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCEstablishCyclicReferences@CDeviceChild@NOutermost@@UEAAXXZ
    virtual void UCEstablishCyclicReferences();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceChild@NOutermost@@QEAA@XZ
    ~CDeviceChild();
};
} // namespace NOutermost
