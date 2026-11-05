#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CShaderCacheSessionManagerImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSession@CShaderCacheSessionManagerImpl@@QEAA?AVCShaderCacheSession@@AEBUSShaderCacheDesc@@PEAVCShaderCacheAdapter@@PEAUSShaderCacheProperties@@@Z
    CShaderCacheSession GetSession(SShaderCacheDesc const &, CShaderCacheAdapter *, SShaderCacheProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@CShaderCacheSessionManagerImpl@@QEAAXXZ
    void Trim();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderCacheSessionManagerImpl@@QEAA@XZ
    ~CShaderCacheSessionManagerImpl();
};
