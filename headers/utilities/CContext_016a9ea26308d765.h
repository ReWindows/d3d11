#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
namespace NDXGI {
class CContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContext@NDXGI@@QEAA@PEAVCDevice@1@AEBU_D3DKMT_CREATECONTEXT@@W4D3DWDDM2_0DDI_CONTEXTTYPE_FLAG@@@Z
    CContext(WindissectOpaque *, _D3DKMT_CREATECONTEXT const &, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContext@NDXGI@@QEAA@XZ
    CContext();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContext@NDXGI@@QEAA@PEAVCDevice@1@AEBU_D3DKMT_CREATECONTEXTVIRTUAL@@W4D3DWDDM2_0DDI_CONTEXTTYPE_FLAG@@@Z
    CContext(WindissectOpaque *, _D3DKMT_CREATECONTEXTVIRTUAL const &, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContext@NDXGI@@QEAA@$$QEAV01@@Z
    CContext(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryEngineType@CContext@NDXGI@@QEAAXXZ
    void QueryEngineType();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContext@NDXGI@@QEAA@XZ
    ~CContext();
};
} // namespace NDXGI
