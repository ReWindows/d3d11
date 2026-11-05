#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 8 member(s).
class SwizzlePatternProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndPreprocessSwizzlePattern@SwizzlePatternProcessor@@SAJAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@IPEAUSwizzleProperties@@AEAU2@@Z
    static long ValidateAndPreprocessSwizzlePattern(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, unsigned int, SwizzleProperties *, D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndGetXorTableShiftsAndMasks@SwizzlePatternProcessor@@CA_NPEAPEBUD3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY@@IIIPEAI1@Z
    static bool CheckAndGetXorTableShiftsAndMasks(D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY const * *, unsigned int, unsigned int, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndSetCacheLineProperties@SwizzlePatternProcessor@@CA_NAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@PEAUSwizzleProperties@@@Z
    static bool CheckAndSetCacheLineProperties(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, SwizzleProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndSetXorProperties@SwizzlePatternProcessor@@CA_NAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@PEAUSwizzleProperties@@@Z
    static bool CheckAndSetXorProperties(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, SwizzleProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckXorsValid@SwizzlePatternProcessor@@CAJAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@I@Z
    static long CheckXorsValid(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeSwizzleTrailingXBits@SwizzlePatternProcessor@@CAXAEAUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@PEAUSwizzleProperties@@@Z
    static void NormalizeSwizzleTrailingXBits(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC &, SwizzleProperties *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChunkProperties@SwizzlePatternProcessor@@CAXAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@PEAUSwizzleProperties@@@Z
    static void SetChunkProperties(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, SwizzleProperties *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwizzleBlockProperties@SwizzlePatternProcessor@@CAJAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@PEAUSwizzleProperties@@@Z
    static long SetSwizzleBlockProperties(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, SwizzleProperties *);
};
