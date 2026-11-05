#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
namespace CD3D11ShaderCacheSession {
class CLS {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDIHandle@CLS@CD3D11ShaderCacheSession@@QEBA?AUD3DWDDM2_2DDI_HCACHESESSION@@XZ
    D3DWDDM2_2DDI_HCACHESESSION DDIHandle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CLS@CD3D11ShaderCacheSession@@QEAAXPEAVCContext@@PEBUTConstructorArgs@2@@Z
    void FinalConstruct(CContext *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CLS@CD3D11ShaderCacheSession@@QEAAXPEAVCContext@@@Z
    void FinalRelease(CContext *);
};
} // namespace CD3D11ShaderCacheSession
