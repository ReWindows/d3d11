#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class DDIImmCtxMT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI@DDIImmCtxMT@@QEBAPEBUUDDI_DEVICEFUNCS@@W4EDDI@@@Z
    UDDI_DEVICEFUNCS const * DDI(int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DDIImmCtxMT@@QEAA@PEAVCContext@@W4EErrorBehavior@@@Z
    DDIImmCtxMT(CContext *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DDIImmCtxMT@@QEAA@XZ
    ~DDIImmCtxMT();
};
