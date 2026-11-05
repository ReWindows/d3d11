#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CUnorderedAccessView {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUnorderedAccessView@@QEAA@AEBUTConstructorArgs@0@@Z
    CUnorderedAccessView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CUnorderedAccessView@@UEAAXPEAUD3D11_UNORDERED_ACCESS_VIEW_DESC@@@Z
    virtual void GetDesc(D3D11_UNORDERED_ACCESS_VIEW_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CUnorderedAccessView@@UEAAXPEAUD3D11_UNORDERED_ACCESS_VIEW_DESC1@@@Z
    virtual void GetDesc1(D3D11_UNORDERED_ACCESS_VIEW_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppendOrCounterBuffer@CUnorderedAccessView@@QEBA_NXZ
    bool IsAppendOrCounterBuffer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CUnorderedAccessView@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUnorderedAccessView@@QEAA@XZ
    ~CUnorderedAccessView();
};
