#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CTexture3D {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CTexture3D@@UEAAXPEAUD3D11_TEXTURE3D_DESC@@@Z
    virtual void GetDesc(D3D11_TEXTURE3D_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CTexture3D@@UEAAXPEAUD3D10_TEXTURE3D_DESC@@@Z
    virtual void GetDesc(D3D10_TEXTURE3D_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CTexture3D@@UEAAXPEAUD3D11_TEXTURE3D_DESC1@@@Z
    virtual void GetDesc1(D3D11_TEXTURE3D_DESC1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CTexture3D@@UEAAJIW4D3D10_MAP@@IPEAUD3D10_MAPPED_TEXTURE3D@@@Z
    virtual long Map(unsigned int, int, unsigned int, D3D10_MAPPED_TEXTURE3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CTexture3D@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CTexture3D@@UEAAXI@Z
    virtual void Unmap(unsigned int);
};
