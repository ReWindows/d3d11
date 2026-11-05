#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CDepthStencilState {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDepthStencilState@@QEAA@AEBUTConstructorArgs@0@@Z
    CDepthStencilState(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDepthStencilState@@UEAAXPEAUD3D10_DEPTH_STENCIL_DESC@@@Z
    virtual void GetDesc(D3D10_DEPTH_STENCIL_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDepthStencilState@@UEAAXPEAUD3D11_DEPTH_STENCIL_DESC@@@Z
    virtual void GetDesc(D3D11_DEPTH_STENCIL_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CDepthStencilState@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CDepthStencilState@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDepthStencilState@@QEAA@XZ
    ~CDepthStencilState();
};
