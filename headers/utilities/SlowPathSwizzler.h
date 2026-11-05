#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class SlowPathSwizzler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFastPathSwizzler@SlowPathSwizzler@@UEBA_NXZ
    virtual bool IsFastPathSwizzler() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBytes@SlowPathSwizzler@@UEAAXPEAEQEBI11@Z
    virtual void ReadBytes(unsigned char *, unsigned int const * const, unsigned int const * const, unsigned int const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBytes@SlowPathSwizzler@@UEAAXPEBEQEBI11@Z
    virtual void WriteBytes(unsigned char const *, unsigned int const * const, unsigned int const * const, unsigned int const * const);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOffset@SlowPathSwizzler@@IEBAIQEAI@Z
    unsigned int CalculateOffset(unsigned int * const) const;
};
