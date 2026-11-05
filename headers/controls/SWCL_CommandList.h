#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class SWCL_CommandList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@SWCL_CommandList@@QEBAXPEAVCContext@@@Z
    void Execute(CContext *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Recycle@SWCL_CommandList@@QEAAXPEAUSWDC_Context@@@Z
    void Recycle(SWDC_Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleCreate@SWCL_CommandList@@QEAAXPEAUSWDC_Context@@@Z
    void RecycleCreate(SWDC_Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleDestroy@SWCL_CommandList@@QEAAXXZ
    void RecycleDestroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SWCL_CommandList@@QEAA@XZ
    ~SWCL_CommandList();
};
