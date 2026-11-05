#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
namespace NDXGIOn12 {
class CResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandleInternal@CResource@NDXGIOn12@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandleInternal(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReleaseReason@CResource@NDXGIOn12@@UEAA?AW4D3D11ON12_RELEASE_REASON@@XZ
    virtual int GetReleaseReason();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCCompleteLayerConstruction@CResource@NDXGIOn12@@QEAAJXZ
    long LUCCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostConstruction@CResource@NDXGIOn12@@QEAAXW4D3D12_RESOURCE_STATES@@0@Z
    void PostConstruction(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReleaseReason@CResource@NDXGIOn12@@UEAAXW4D3D11ON12_RELEASE_REASON@@@Z
    virtual void SetReleaseReason(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsDeviceBitmapGdiInterop@CResource@NDXGIOn12@@UEBA_NXZ
    virtual bool SupportsDeviceBitmapGdiInterop() const;
};
} // namespace NDXGIOn12
