#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class CHullShader {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHullShader@@QEAA@AEBUTConstructorArgs@0@@Z
    CHullShader(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CHullShader@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
};
