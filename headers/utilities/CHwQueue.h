#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
namespace NDXGI {
class CHwQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDeferredWait@CHwQueue@NDXGI@@QEAAXI_K@Z
    void AddDeferredWait(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDeferredWaiters@CHwQueue@NDXGI@@QEAAXI@Z
    void ClearDeferredWaiters(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredWaiters@CHwQueue@NDXGI@@QEAAJXZ
    long ProcessDeferredWaiters();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHwQueue@NDXGI@@QEAA@XZ
    ~CHwQueue();
};
} // namespace NDXGI
