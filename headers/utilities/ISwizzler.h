#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class ISwizzler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ISwizzler@@SAJAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@IQEAI_NPEAPEAV1@@Z
    static long Create(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, unsigned int, unsigned int * const, bool, ISwizzler * *);
};
