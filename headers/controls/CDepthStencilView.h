#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CDepthStencilView {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDepthStencilView@@QEAA@AEBUTConstructorArgs@0@@Z
    CDepthStencilView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDepthStencilView@@UEAAXPEAUD3D11_DEPTH_STENCIL_VIEW_DESC@@@Z
    virtual void GetDesc(D3D11_DEPTH_STENCIL_VIEW_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDepthStencilView@@UEAAXPEAUD3D10_DEPTH_STENCIL_VIEW_DESC@@@Z
    virtual void GetDesc(D3D10_DEPTH_STENCIL_VIEW_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HazardExists@CDepthStencilView@@QEAA_NPEAVCShaderResourceView@@@Z
    bool HazardExists(CShaderResourceView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CDepthStencilView@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CDepthStencilView@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDepthStencilView@@QEAA@XZ
    ~CDepthStencilView();
};
