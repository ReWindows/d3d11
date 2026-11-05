#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class SMarkerData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapacityForBatchedDataAndMatchingQPC@SMarkerData@@QEBA_NAEAT_LARGE_INTEGER@@I@Z
    bool CapacityForBatchedDataAndMatchingQPC(_LARGE_INTEGER &, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForMarkerState@SMarkerData@@QEAA_NAEBUSMarkerState@@@Z
    bool PrepareForMarkerState(SMarkerState const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushBackBatchedData@SMarkerData@@QEAAPEAXW4EMarkerOp@@AEBT_LARGE_INTEGER@@IK@Z
    void * PushBackBatchedData(int, _LARGE_INTEGER const &, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear@SMarkerData@@QEAAXXZ
    void clear();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SMarkerData@@QEAA@XZ
    ~SMarkerData();
};
