#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class CDomainShader {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDomainShader@@QEAA@AEBUTConstructorArgs@0@@Z
    CDomainShader(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CDomainShader@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
};
