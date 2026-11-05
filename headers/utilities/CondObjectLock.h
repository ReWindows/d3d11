#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
namespace CDevice {
class CondObjectLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CondObjectLock@CDevice@@QEAA@PEAV1@@Z
    CondObjectLock(CDevice *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CondObjectLock@CDevice@@QEAA@PEAVCContext@@@Z
    CondObjectLock(CContext *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CondObjectLock@CDevice@@QEAA@XZ
    ~CondObjectLock();
};
} // namespace CDevice
