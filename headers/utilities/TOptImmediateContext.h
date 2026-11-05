#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class TOptImmediateContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireDevCtxIfaceNoSync@TOptImmediateContext@@QEAAPEBUID3D11DeviceContext5Vtbl@CIface@@_N@Z
    ::CIface::ID3D11DeviceContext5Vtbl const * AcquireDevCtxIfaceNoSync(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDevCtxIfaceNoSync@TOptImmediateContext@@QEAAXXZ
    void ReleaseDevCtxIfaceNoSync();
};
