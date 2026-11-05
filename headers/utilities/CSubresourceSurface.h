#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 11 member(s).
namespace NDXGI {
class CSubresourceSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CSubresourceSurface@NDXGI@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDC@CSubresourceSurface@NDXGI@@UEAAJHPEAPEAUHDC__@@@Z
    virtual long GetDC(int, HDC__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CSubresourceSurface@NDXGI@@UEAAJPEAUDXGI_SURFACE_DESC@@@Z
    virtual long GetDesc(DXGI_SURFACE_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CSubresourceSurface@NDXGI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDevice(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CSubresourceSurface@NDXGI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CSubresourceSurface@NDXGI@@UEAAJAEBU_GUID@@PEAPEAXPEAI@Z
    virtual long GetResource(_GUID const &, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSubresourceSurface@NDXGI@@QEAAJPEAVCResource@2@I@Z
    long Init(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CSubresourceSurface@NDXGI@@UEAAJPEAUDXGI_MAPPED_RECT@@I@Z
    virtual long Map(DXGI_MAPPED_RECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDC@CSubresourceSurface@NDXGI@@UEAAJPEAUtagRECT@@@Z
    virtual long ReleaseDC(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CSubresourceSurface@NDXGI@@UEAAJXZ
    virtual long Unmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSubresourceSurface@NDXGI@@QEAA@XZ
    ~CSubresourceSurface();
};
} // namespace NDXGI
