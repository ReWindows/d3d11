#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class GuardChangingObjectLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GuardChangingObjectLock@@QEAA@PEAVCDevice@@PEAUID3D11Texture2D@@@Z
    GuardChangingObjectLock(CDevice *, ID3D11Texture2D *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GuardChangingObjectLock@@QEAA@XZ
    ~GuardChangingObjectLock();
};
