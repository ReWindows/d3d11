#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
namespace CDDISync {
class CFreeThreadedLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFreeThreadedLock@CDDISync@@QEAA@PEAVCDevice@@@Z
    CFreeThreadedLock(CDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CFreeThreadedLock@CDDISync@@SAXPEAVCDevice@@@Z
    static void Enter(CDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CFreeThreadedLock@CDDISync@@SAXPEAVCDevice@@@Z
    static void Leave(CDevice *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFreeThreadedLock@CDDISync@@QEAA@XZ
    ~CFreeThreadedLock();
};
} // namespace CDDISync
