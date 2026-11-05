#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CShaderCacheAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderCacheAdapter@@QEAA@XZ
    CShaderCacheAdapter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileUniqueness@CShaderCacheAdapter@@QEAAJPEAUFileUniqueness@@@Z
    long GetFileUniqueness(FileUniqueness *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileUniquenessValue@CShaderCacheAdapter@@SA_KPEBG@Z
    static uint64_t GetFileUniquenessValue(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderCacheAdapter@@QEAA@XZ
    ~CShaderCacheAdapter();
};
