#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CD3D11ShaderCacheSessionImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3D11ShaderCacheSessionImpl@@QEAA@PEBUD3D11_SHADER_CACHE_SESSION_DESC@@PEAVCShaderCacheAdapter@@@Z
    CD3D11ShaderCacheSessionImpl(D3D11_SHADER_CACHE_SESSION_DESC const *, CShaderCacheAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastFrom@CD3D11ShaderCacheSessionImpl@@SAPEAV1@UD3DWDDM2_2DDI_HRTCACHESESSION@@@Z
    static CD3D11ShaderCacheSessionImpl * CastFrom(D3DWDDM2_2DDI_HRTCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindValue@CD3D11ShaderCacheSessionImpl@@QEAAJPEBXIPEBEPEAXPEAI@Z
    long FindValue(void const *, unsigned int, unsigned char const *, void *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CD3D11ShaderCacheSessionImpl@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvedMode@CD3D11ShaderCacheSessionImpl@@QEBA?AW4D3D11_SHADER_CACHE_MODE@@XZ
    int ResolvedMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreValue@CD3D11ShaderCacheSessionImpl@@QEAAJPEBXI0IPEBE@Z
    long StoreValue(void const *, unsigned int, void const *, unsigned int, unsigned char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D11ShaderCacheSessionImpl@@QEAA@XZ
    ~CD3D11ShaderCacheSessionImpl();
};
