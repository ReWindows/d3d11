#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CRenderTargetView {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderTargetView@@QEAA@AEBUTConstructorArgs@0@@Z
    CRenderTargetView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CRenderTargetView@@UEAAXPEAUD3D11_RENDER_TARGET_VIEW_DESC@@@Z
    virtual void GetDesc(D3D11_RENDER_TARGET_VIEW_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CRenderTargetView@@UEAAXPEAUD3D10_RENDER_TARGET_VIEW_DESC@@@Z
    virtual void GetDesc(D3D10_RENDER_TARGET_VIEW_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CRenderTargetView@@UEAAXPEAUD3D11_RENDER_TARGET_VIEW_DESC1@@@Z
    virtual void GetDesc1(D3D11_RENDER_TARGET_VIEW_DESC1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CRenderTargetView@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CRenderTargetView@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTargetView@@QEAA@XZ
    ~CRenderTargetView();
};
