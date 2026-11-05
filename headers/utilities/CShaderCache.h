#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CShaderCache {
public:
    class Deleter;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderCache@@QEAA@AEBUFileUniqueness@@AEBUSessionUniqueness@@AEBUSShaderCacheDesc@@PEBG@Z
    CShaderCache(FileUniqueness const &, SessionUniqueness const &, SShaderCacheDesc const &, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderCache@@QEAA@AEBUSShaderCacheDriverIdentity@@AEBUSShaderCacheApplicationIdentity@@AEBUSessionUniqueness@@AEBUSShaderCacheDesc@@PEBGPEAUSShaderCacheProperties@@@Z
    CShaderCache(SShaderCacheDriverIdentity const &, SShaderCacheApplicationIdentity const &, SessionUniqueness const &, SShaderCacheDesc const &, unsigned short const *, SShaderCacheProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CShaderCache@@QEAAJAEBUSShaderCacheKey@@PEBUSShaderCacheHash@@AEAVCShaderCacheValue@@@Z
    long Find(SShaderCacheKey const &, SShaderCacheHash const *, CShaderCacheValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CShaderCache@@QEBA?AUSShaderCacheDesc@@XZ
    SShaderCacheDesc GetDesc() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Store@CShaderCache@@QEAAJAEBUSShaderCacheKey@@PEBXIPEBUSShaderCacheHash@@@Z
    long Store(SShaderCacheKey const &, void const *, unsigned int, SShaderCacheHash const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderCache@@QEAA@XZ
    ~CShaderCache();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderCache@@AEAA@AEBUSessionUniqueness@@AEBUSShaderCacheDesc@@PEBG@Z
    CShaderCache(SessionUniqueness const &, SShaderCacheDesc const &, unsigned short const *);
};
