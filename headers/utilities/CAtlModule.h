#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
namespace ATL {
class CAtlModule {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGITPtr@CAtlModule@ATL@@UEAAJPEAPEAUIGlobalInterfaceTable@@@Z
    virtual long GetGITPtr(IGlobalInterfaceTable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockCount@CAtlModule@ATL@@UEAAJXZ
    virtual long GetLockCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CAtlModule@ATL@@UEAAJXZ
    virtual long Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Term@CAtlModule@ATL@@QEAAXXZ
    void Term();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CAtlModule@ATL@@UEAAJXZ
    virtual long Unlock();
};
} // namespace ATL
