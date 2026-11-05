#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
namespace CClassLinkage {
class CStringHash {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CStringHash@CClassLinkage@@QEAAXPEBDI@Z
    void Add(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CStringHash@CClassLinkage@@QEAAIPEBD@Z
    unsigned int Find(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStringHash@CClassLinkage@@QEAA@XZ
    ~CStringHash();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoGrow@CStringHash@CClassLinkage@@IEAAXI@Z
    void AutoGrow(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HashString@CStringHash@CClassLinkage@@IEAAIPEBD@Z
    unsigned int HashString(char const *);
};
} // namespace CClassLinkage
