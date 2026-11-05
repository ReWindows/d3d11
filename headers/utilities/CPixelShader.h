#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class CPixelShader {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPixelShader@@QEAA@AEBUTConstructorArgs@0@@Z
    CPixelShader(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CPixelShader@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CPixelShader@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CPixelShader@@QEAAXXZ
    void UnbindFromPipeline();
};
