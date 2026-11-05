#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CSampler {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSampler@@QEAA@AEBUTConstructorArgs@0@@Z
    CSampler(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CSampler@@UEAAXPEAUD3D10_SAMPLER_DESC@@@Z
    virtual void GetDesc(D3D10_SAMPLER_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CSampler@@UEAAXPEAUD3D11_SAMPLER_DESC@@@Z
    virtual void GetDesc(D3D11_SAMPLER_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CSampler@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromPipeline@CSampler@@QEAAXXZ
    void UnbindFromPipeline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSampler@@QEAA@XZ
    ~CSampler();
};
