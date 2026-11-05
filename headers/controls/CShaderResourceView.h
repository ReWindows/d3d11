#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 8 member(s).
class CShaderResourceView {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderResourceView@@QEAA@AEBUTConstructorArgs@0@@Z
    CShaderResourceView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CShaderResourceView@@UEAAXPEAUD3D11_SHADER_RESOURCE_VIEW_DESC@@@Z
    virtual void GetDesc(D3D11_SHADER_RESOURCE_VIEW_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CShaderResourceView@@UEAAXPEAUD3D10_SHADER_RESOURCE_VIEW_DESC@@@Z
    virtual void GetDesc(D3D10_SHADER_RESOURCE_VIEW_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CShaderResourceView@@UEAAXPEAUD3D10_SHADER_RESOURCE_VIEW_DESC1@@@Z
    virtual void GetDesc1(D3D10_SHADER_RESOURCE_VIEW_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CShaderResourceView@@UEAAXPEAUD3D11_SHADER_RESOURCE_VIEW_DESC1@@@Z
    virtual void GetDesc1(D3D11_SHADER_RESOURCE_VIEW_DESC1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CShaderResourceView@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CShaderResourceView@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderResourceView@@QEAA@XZ
    ~CShaderResourceView();
};
