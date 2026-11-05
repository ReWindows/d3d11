#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CCommandList {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandList@@QEAA@AEBUTConstructorArgs@0@@Z
    CCommandList(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWrite@CCommandList@@QEAAX_KPEBU_EVENT_DESCRIPTOR@@@Z
    void ETWWrite(uint64_t, _EVENT_DESCRIPTOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CCommandList@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextFlags@CCommandList@@UEAAIXZ
    virtual unsigned int GetContextFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCBeginLayerDestruction@CCommandList@@QEAAXXZ
    void LUCBeginLayerDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCDeferDeletion@CCommandList@@QEAAHH@Z
    int LUCDeferDeletion(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandList@@QEAA@XZ
    ~CCommandList();
};
