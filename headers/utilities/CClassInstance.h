#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class CClassInstance {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CClassInstance@@QEAA@AEBUTConstructorArgs@0@@Z
    CClassInstance(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassLinkage@CClassInstance@@UEAAXPEAPEAUID3D11ClassLinkage@@@Z
    virtual void GetClassLinkage(ID3D11ClassLinkage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CClassInstance@@UEAAXPEAUD3D11_CLASS_INSTANCE_DESC@@@Z
    virtual void GetDesc(D3D11_CLASS_INSTANCE_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstanceName@CClassInstance@@UEAAXPEADPEA_K@Z
    virtual void GetInstanceName(char *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeName@CClassInstance@@UEAAXPEADPEA_K@Z
    virtual void GetTypeName(char *, uint64_t *);
};
