#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CGeometryShader {
public:
    class CLS;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CGeometryShader@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CGeometryShader@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CGeometryShader@@QEAAXXZ
    void UnbindFromPipeline();
};
