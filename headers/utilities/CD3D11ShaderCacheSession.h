#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CD3D11ShaderCacheSession {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3D11ShaderCacheSession@@QEAA@AEBUTConstructorArgs@0@@Z
    CD3D11ShaderCacheSession(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastFrom@CD3D11ShaderCacheSession@@SAPEAV1@PEAUID3D11ShaderCacheSession@@@Z
    static CD3D11ShaderCacheSession * CastFrom(ID3D11ShaderCacheSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindValue@CD3D11ShaderCacheSession@@UEAAJPEBXIPEAXPEAI@Z
    virtual long FindValue(void const *, unsigned int, void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCDestroyStatus@CD3D11ShaderCacheSession@@QEAA?AW4E_LUC_Destroy@@W42@@Z
    int LUCDestroyStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvedMode@CD3D11ShaderCacheSession@@QEBA?AW4D3D11_SHADER_CACHE_MODE@@XZ
    int ResolvedMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreValue@CD3D11ShaderCacheSession@@UEAAJPEBXI0I@Z
    virtual long StoreValue(void const *, unsigned int, void const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D11ShaderCacheSession@@QEAA@XZ
    ~CD3D11ShaderCacheSession();
};
