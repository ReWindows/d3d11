#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class SwizzlerCommon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SwizzlerCommon@@UEAAJAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@PEBUSwizzleProperties@@QEAI@Z
    virtual long Initialize(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, SwizzleProperties const *, unsigned int * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMappedSubresource@SwizzlerCommon@@UEAAXAEBUD3D11_MAPPED_SUBRESOURCE@@@Z
    virtual void SetMappedSubresource(D3D11_MAPPED_SUBRESOURCE const &);
};
