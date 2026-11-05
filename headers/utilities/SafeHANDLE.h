#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class SafeHANDLE {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@SafeHANDLE@@QEAAXXZ
    void Close();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SafeHANDLE@@QEAA@XZ
    ~SafeHANDLE();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@SafeHANDLE@@AEAAXPEAX@Z
    void Copy(void *);
};
