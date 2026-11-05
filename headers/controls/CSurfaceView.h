#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
namespace NDXGI {
class CSurfaceView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CSurfaceView@NDXGI@@UEAAJPEAUDXGI_SURFACE_DESC@@@Z
    virtual long GetDesc(DXGI_SURFACE_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCCompleteLayerConstruction@CSurfaceView@NDXGI@@QEAAJXZ
    long LUCCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CSurfaceView@NDXGI@@UEAAJPEAUDXGI_MAPPED_RECT@@I@Z
    virtual long Map(DXGI_MAPPED_RECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CSurfaceView@NDXGI@@UEAAJXZ
    virtual long Unmap();
};
} // namespace NDXGI
