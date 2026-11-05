#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 28 member(s).
namespace dxrt11 {
class Direct3DSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Direct3DSurface@dxrt11@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@Direct3DSurface@dxrt11@@UEAAJXZ
    virtual long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Direct3DSurface@dxrt11@@QEAA@PEAUIDXGISurface@@@Z
    Direct3DSurface(IDXGISurface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Direct3DSurface@dxrt11@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterface@Direct3DSurface@dxrt11@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Direct3DSurface@dxrt11@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Direct3DSurface@dxrt11@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Direct3DSurface@dxrt11@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Direct3DSurface@dxrt11@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@Direct3DSurface@dxrt11@@UEAAJPEAUDirect3DSurfaceDescription@Direct3D11@DirectX@Graphics@Windows@@@Z
    virtual long get_Description(::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Direct3DSurface@dxrt11@@UEAA@XZ
    virtual ~Direct3DSurface();
};
} // namespace dxrt11
