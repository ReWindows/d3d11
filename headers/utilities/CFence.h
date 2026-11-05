#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 8 member(s).
class CFence {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFence@@QEAA@AEBUTConstructorArgs@0@@Z
    CFence(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandle@CFence@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandle(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompletedValue@CFence@@UEAA_KXZ
    virtual uint64_t GetCompletedValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKmtHandle@CFence@@UEAAPEAXXZ
    virtual void * GetKmtHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventOnCompletion@CFence@@UEAAJ_KPEAX@Z
    virtual long SetEventOnCompletion(uint64_t, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVSyncInterruptControlData@CFence@@UEAAJU_LUID@@@Z
    virtual long SetVSyncInterruptControlData(_LUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFence@@QEAA@XZ
    ~CFence();
};
