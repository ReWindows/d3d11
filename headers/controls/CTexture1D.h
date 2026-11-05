#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class CTexture1D {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CTexture1D@@UEAAXPEAUD3D11_TEXTURE1D_DESC@@@Z
    virtual void GetDesc(D3D11_TEXTURE1D_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CTexture1D@@UEAAXPEAUD3D10_TEXTURE1D_DESC@@@Z
    virtual void GetDesc(D3D10_TEXTURE1D_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CTexture1D@@UEAAJIW4D3D10_MAP@@IPEAPEAX@Z
    virtual long Map(unsigned int, int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CTexture1D@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CTexture1D@@UEAAXI@Z
    virtual void Unmap(unsigned int);
};
