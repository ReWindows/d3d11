#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CAPICaps {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAPICaps@@QEAA@W4D3D10_FEATURE_LEVEL1@@I@Z
    CAPICaps(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapsFromFormat@CAPICaps@@QEBAIW4DXGI_FORMAT@@@Z
    unsigned int CapsFromFormat(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumFormat@CAPICaps@@SA?AW4DXGI_FORMAT@@I@Z
    static int EnumFormat(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StructOffsetFromFormat@CAPICaps@@SA_KW4DXGI_FORMAT@@@Z
    static uint64_t StructOffsetFromFormat(int);
};
