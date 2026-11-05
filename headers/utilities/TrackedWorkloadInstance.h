#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class TrackedWorkloadInstance {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComplete@TrackedWorkloadInstance@@QEAA_NXZ
    bool IsComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stamp@TrackedWorkloadInstance@@QEAAXPEAVCContext@@W4TrackedWorkloadEndpointType@@I_KPEBUD3D11_TRACKED_WORKLOAD_DEADLINE@@@Z
    void Stamp(CContext *, int, unsigned int, uint64_t, D3D11_TRACKED_WORKLOAD_DEADLINE const *);
};
