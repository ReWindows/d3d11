#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class CShaderCacheSessionManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSession@CShaderCacheSessionManager@@QEAA?AVCShaderCacheSession@@AEBUSShaderCacheDesc@@PEAVCShaderCacheAdapter@@PEAUSShaderCacheProperties@@@Z
    CShaderCacheSession GetSession(SShaderCacheDesc const &, CShaderCacheAdapter *, SShaderCacheProperties *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderCacheSessionManager@@QEAA@XZ
    ~CShaderCacheSessionManager();
};
