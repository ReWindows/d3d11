#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class SmallBlendStateDesc {
public:
    class SmallRTBlendDesc;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SmallBlendStateDesc@@QEAA@AEBUD3D11_BLEND_DESC1@@@Z
    SmallBlendStateDesc(D3D11_BLEND_DESC1const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?hash@SmallBlendStateDesc@@QEBA_KXZ
    uint64_t hash() const;
};
