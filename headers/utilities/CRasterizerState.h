#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 10 member(s).
class CRasterizerState {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRasterizerState@@QEAA@AEBUTConstructorArgs@0@@Z
    CRasterizerState(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CRasterizerState@@UEAAXPEAUD3D10_RASTERIZER_DESC@@@Z
    virtual void GetDesc(D3D10_RASTERIZER_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CRasterizerState@@UEAAXPEAUD3D11_RASTERIZER_DESC@@@Z
    virtual void GetDesc(D3D11_RASTERIZER_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CRasterizerState@@UEAAXPEAUD3D11_RASTERIZER_DESC1@@@Z
    virtual void GetDesc1(D3D11_RASTERIZER_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc2@CRasterizerState@@UEAAXPEAUD3D11_RASTERIZER_DESC2@@@Z
    virtual void GetDesc2(D3D11_RASTERIZER_DESC2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCDestroyStatus@CRasterizerState@@QEAA?AW4E_LUC_Destroy@@W42@@Z
    int LUCDestroyStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CRasterizerState@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CRasterizerState@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRasterizerState@@QEAA@XZ
    ~CRasterizerState();
};
