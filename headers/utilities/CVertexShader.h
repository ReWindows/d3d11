#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CVertexShader {
public:
    class CLS;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CVertexShader@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CVertexShader@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CVertexShader@@QEAAXXZ
    void UnbindFromPipeline();
};
