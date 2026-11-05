#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class ClearGuardHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@ClearGuardHelper@@QEAAXPEAVCDevice@@@Z
    void Begin(CDevice *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClearGuardHelper@@QEAA@XZ
    ClearGuardHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRenderTargetViewRect@ClearGuardHelper@@QEAAXPEAVCContext@@UD3D10DDI_HRENDERTARGETVIEW@@QEAMPEBUtagRECT@@@Z
    void ClearRenderTargetViewRect(CContext *, D3D10DDI_HRENDERTARGETVIEW, float * const, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@ClearGuardHelper@@QEAAXXZ
    void End();
};
