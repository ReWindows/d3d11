#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CDXBCParser {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlob@CDXBCParser@@QEAAPEBXI@Z
    void const * GetBlob(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlobSize@CDXBCParser@@QEAAII@Z
    unsigned int GetBlobSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadDXBC@CDXBCParser@@QEAAJPEBXI_NP6AXPEBEIPEAE@Z@Z
    long ReadDXBC(void const *, unsigned int, bool, void ( *)(unsigned char const *, unsigned int, unsigned char *));
};
