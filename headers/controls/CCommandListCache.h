#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CCommandListCache {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandListCache@@QEAA@AEBUTConstructorArgs@0@@Z
    CCommandListCache(WindissectOpaque const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContextFlags@CCommandListCache@@UEAAIXZ
    virtual unsigned int GetContextFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimList@CCommandListCache@@QEAAXXZ
    void TrimList();
};
