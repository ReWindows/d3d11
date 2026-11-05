#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class ClearGuardImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClearGuardImpl@@QEAA@PEAVCDevice@@@Z
    ClearGuardImpl(CDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRenderTargetViewRect@ClearGuardImpl@@QEAAXPEAVCContext@@UD3D10DDI_HRENDERTARGETVIEW@@QEAMPEBUtagRECT@@@Z
    void ClearRenderTargetViewRect(CContext *, D3D10DDI_HRENDERTARGETVIEW, float * const, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCLS@ClearGuardImpl@@QEAA_NPEAVCContext@@@Z
    bool EnsureCLS(CContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyState@ClearGuardImpl@@QEAAXPEAVCContext@@UD3D10DDI_HRENDERTARGETVIEW@@PEBUtagRECT@@@Z
    void ModifyState(CContext *, D3D10DDI_HRENDERTARGETVIEW, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendState@ClearGuardImpl@@QEAAXPEAVCContext@@AEBUSPipelineState@@@Z
    void SendState(CContext *, SPipelineState const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClearGuardImpl@@QEAA@XZ
    ~ClearGuardImpl();
};
