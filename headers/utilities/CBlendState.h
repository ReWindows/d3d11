#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 8 member(s).
class CBlendState {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBlendState@@QEAA@AEBUTConstructorArgs@0@@Z
    CBlendState(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CBlendState@@UEAAXPEAUD3D10_BLEND_DESC@@@Z
    virtual void GetDesc(D3D10_BLEND_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CBlendState@@UEAAXPEAUD3D11_BLEND_DESC@@@Z
    virtual void GetDesc(D3D11_BLEND_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CBlendState@@UEAAXPEAUD3D10_BLEND_DESC1@@@Z
    virtual void GetDesc1(D3D10_BLEND_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CBlendState@@UEAAXPEAUD3D11_BLEND_DESC1@@@Z
    virtual void GetDesc1(D3D11_BLEND_DESC1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CBlendState@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CBlendState@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBlendState@@QEAA@XZ
    ~CBlendState();
};
