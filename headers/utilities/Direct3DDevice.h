#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 28 member(s).
namespace dxrt11 {
class Direct3DDevice {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Direct3DDevice@dxrt11@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@Direct3DDevice@dxrt11@@UEAAJXZ
    virtual long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Direct3DDevice@dxrt11@@QEAA@PEAUIDXGIDevice@@@Z
    Direct3DDevice(IDXGIDevice *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Direct3DDevice@dxrt11@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterface@Direct3DDevice@dxrt11@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Direct3DDevice@dxrt11@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Direct3DDevice@dxrt11@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Direct3DDevice@dxrt11@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Direct3DDevice@dxrt11@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@Direct3DDevice@dxrt11@@UEAAJXZ
    virtual long Trim();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Direct3DDevice@dxrt11@@UEAA@XZ
    virtual ~Direct3DDevice();
};
} // namespace dxrt11
