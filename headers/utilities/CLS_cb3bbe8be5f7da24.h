#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
namespace CRasterizerState {
class CLS {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWithScissorCLS@CLS@CRasterizerState@@QEAAXPEAVCContext@@@Z
    void EnsureWithScissorCLS(CContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CLS@CRasterizerState@@QEAAXPEAVCContext@@PEBUTConstructorArgs@2@@Z
    void FinalConstruct(CContext *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CLS@CRasterizerState@@QEAAXPEAVCContext@@@Z
    void FinalRelease(CContext *);
};
} // namespace CRasterizerState
