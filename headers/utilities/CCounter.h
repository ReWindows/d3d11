#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CCounter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CCounter@@QEAAXAEBUTConstructorArgs@1@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CCounter@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CCounter@@UEAAXPEAUD3D10_COUNTER_DESC@@@Z
    virtual void GetDesc(D3D10_COUNTER_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CCounter@@UEAAXPEAUD3D11_COUNTER_DESC@@@Z
    virtual void GetDesc(D3D11_COUNTER_DESC *);
};
