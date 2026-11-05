#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 12 member(s).
class FastPathSwizzlerBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePostambleXorChannelAddress@FastPathSwizzlerBase@@QEBAGII@Z
    unsigned short CalculatePostambleXorChannelAddress(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSwizzleChannelAddress@FastPathSwizzlerBase@@QEBAGII@Z
    unsigned short CalculateSwizzleChannelAddress(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateXorChannelAddress@FastPathSwizzlerBase@@QEBAGII@Z
    unsigned short CalculateXorChannelAddress(unsigned int, unsigned int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FastPathSwizzlerBase@@QEAA@XZ
    FastPathSwizzlerBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FastPathSwizzlerBase@@UEAAJAEBUD3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC@@PEBUSwizzleProperties@@QEAI@Z
    virtual long Initialize(D3DWDDM2_2DDI_SWIZZLE_PATTERN_DESC const &, SwizzleProperties const *, unsigned int * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFastPathSwizzler@FastPathSwizzlerBase@@UEBA_NXZ
    virtual bool IsFastPathSwizzler() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBytes@FastPathSwizzlerBase@@QEAAX_NPEAEQEBI22@Z
    void ProcessBytes(bool, unsigned char *, unsigned int const * const, unsigned int const * const, unsigned int const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBytes@FastPathSwizzlerBase@@UEAAXPEAEQEBI11@Z
    virtual void ReadBytes(unsigned char *, unsigned int const * const, unsigned int const * const, unsigned int const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBytes@FastPathSwizzlerBase@@UEAAXPEBEQEBI11@Z
    virtual void WriteBytes(unsigned char const *, unsigned int const * const, unsigned int const * const, unsigned int const * const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FastPathSwizzlerBase@@UEAA@XZ
    virtual ~FastPathSwizzlerBase();
};
