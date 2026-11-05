#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class CCLSAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CCLSAllocator@@QEAA?AUID@1@_K@Z
    WindissectOpaque Allocate(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CCLSAllocator@@QEAAXUID@1@@Z
    void Free(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@CCLSAllocator@@QEAAXXZ
    void Trim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?swap@CCLSAllocator@@QEAAXAEAV1@@Z
    void swap(CCLSAllocator &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCLSAllocator@@QEAA@XZ
    ~CCLSAllocator();
};
