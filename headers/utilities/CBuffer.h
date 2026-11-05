#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CBuffer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CBuffer@@UEAAXPEAUD3D11_BUFFER_DESC@@@Z
    virtual void GetDesc(D3D11_BUFFER_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CBuffer@@UEAAXPEAUD3D10_BUFFER_DESC@@@Z
    virtual void GetDesc(D3D10_BUFFER_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CBuffer@@UEAAJW4D3D10_MAP@@IPEAPEAX@Z
    virtual long Map(int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CBuffer@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CBuffer@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CBuffer@@UEAAXXZ
    virtual void Unmap();
};
