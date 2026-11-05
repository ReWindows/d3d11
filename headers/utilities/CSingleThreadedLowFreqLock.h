#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 10 member(s).
namespace CDDISync {
class CSingleThreadedLowFreqLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CSingleThreadedLowFreqLock@CDDISync@@SAXPEAVCDevice@@@Z
    static void Enter(CDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CSingleThreadedLowFreqLock@CDDISync@@SAXPEAVCDevice@@@Z
    static void Leave(CDevice *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSingleThreadedLowFreqLock@CDDISync@@QEAA@XZ
    ~CSingleThreadedLowFreqLock();
};
} // namespace CDDISync
