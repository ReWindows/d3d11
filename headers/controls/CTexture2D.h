#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CTexture2D {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTexture2D@@QEAA@AEBUTConstructorArgs@0@@Z
    CTexture2D(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CTexture2D@@UEAAXPEAUD3D11_TEXTURE2D_DESC@@@Z
    virtual void GetDesc(D3D11_TEXTURE2D_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CTexture2D@@UEAAXPEAUD3D10_TEXTURE2D_DESC@@@Z
    virtual void GetDesc(D3D10_TEXTURE2D_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CTexture2D@@UEAAXPEAUD3D11_TEXTURE2D_DESC1@@@Z
    virtual void GetDesc1(D3D11_TEXTURE2D_DESC1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CTexture2D@@UEAAJIW4D3D10_MAP@@IPEAUD3D10_MAPPED_TEXTURE2D@@@Z
    virtual long Map(unsigned int, int, unsigned int, D3D10_MAPPED_TEXTURE2D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CTexture2D@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CTexture2D@@UEAAXI@Z
    virtual void Unmap(unsigned int);
};
