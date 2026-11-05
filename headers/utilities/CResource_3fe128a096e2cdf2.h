#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 66 member(s).
namespace NDXGI {
class CResource {
public:
    class CCompositionBufferInfo;
    class CGdiInterop;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireSync@CResource@NDXGI@@UEAAJ_KK@Z
    virtual long AcquireSync(uint64_t, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResource@NDXGI@@QEAA@AEBUTConstructorArgs@01@@Z
    CResource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSharedResourceAccess@CResource@NDXGI@@UEAAJI@Z
    virtual long CheckSharedResourceAccess(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandle@CResource@NDXGI@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandle(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandleInternal@CResource@NDXGI@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandleInternal(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSubresourceSurface@CResource@NDXGI@@UEAAJIPEAPEAUIDXGISurface2@@@Z
    virtual long CreateSubresourceSurface(unsigned int, IDXGISurface2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDIHandle@CResource@NDXGI@@QEBA_KXZ
    uint64_t DDIHandle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWRundown@CResource@NDXGI@@QEBAX_K@Z
    void ETWRundown(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWrite@CResource@NDXGI@@QEBAX_KPEBU_EVENT_DESCRIPTOR@@_N@Z
    void ETWWrite(uint64_t, _EVENT_DESCRIPTOR const *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CResource@NDXGI@@QEAAXAEBUTConstructorArgs@12@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CResource@NDXGI@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDC@CResource@NDXGI@@UEAAJHPEAPEAUHDC__@@@Z
    virtual long GetDC(int, HDC__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCCore@CResource@NDXGI@@QEAAJIHPEAPEAUHDC__@@@Z
    long GetDCCore(unsigned int, int, HDC__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CResource@NDXGI@@UEAAJPEAUDXGI_SURFACE_DESC@@@Z
    virtual long GetDesc(DXGI_SURFACE_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CResource@NDXGI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDevice(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDxgiDesc@CResource@NDXGI@@QEAAXPEAUDXGI_SURFACE_DESC@@PEAI1@Z
    void GetDxgiDesc(DXGI_SURFACE_DESC *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvictionPriority@CResource@NDXGI@@UEAAJPEAI@Z
    virtual long GetEvictionPriority(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKernelResourceHandle@CResource@NDXGI@@UEAAJPEAI@Z
    virtual long GetKernelResourceHandle(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CResource@NDXGI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CResource@NDXGI@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CResource@NDXGI@@UEAAJAEBU_GUID@@PEAPEAXPEAI@Z
    virtual long GetResource(_GUID const &, void * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandle@CResource@NDXGI@@UEAAJPEAPEAX@Z
    virtual long GetSharedHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandleInternal@CResource@NDXGI@@UEAAJPEAPEAX@Z
    virtual long GetSharedHandleInternal(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubsurfaceDesc@CResource@NDXGI@@QEAAXIPEAUDXGI_SURFACE_DESC@@@Z
    void GetSubsurfaceDesc(unsigned int, DXGI_SURFACE_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsage@CResource@NDXGI@@UEAAJPEAI@Z
    virtual long GetUsage(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDCOutstanding@CResource@NDXGI@@QEAA_NXZ
    bool IsDCOutstanding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCBeginLayerDestruction@CResource@NDXGI@@QEAAXXZ
    void LUCBeginLayerDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCCompleteLayerConstruction@CResource@NDXGI@@QEAAJXZ
    long LUCCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CResource@NDXGI@@UEAAJPEAUDXGI_MAPPED_RECT@@I@Z
    virtual long Map(DXGI_MAPPED_RECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapHelper@CResource@NDXGI@@QEAAXIIPEAUDXGI_MAPPED_RECT@@@Z
    void MapHelper(unsigned int, unsigned int, DXGI_MAPPED_RECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIKeyedMutex@CResource@NDXGI@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIKeyedMutex(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QISurface@CResource@NDXGI@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QISurface(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDC@CResource@NDXGI@@UEAAJPEAUtagRECT@@@Z
    virtual long ReleaseDC(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCCore@CResource@NDXGI@@QEAAJIPEAUtagRECT@@@Z
    long ReleaseDCCore(unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSync@CResource@NDXGI@@UEAAJ_K@Z
    virtual long ReleaseSync(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEvictionPriority@CResource@NDXGI@@UEAAJI@Z
    virtual long SetEvictionPriority(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CResource@NDXGI@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CResource@NDXGI@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedHandleInternal@CResource@NDXGI@@UEAAJPEAX@Z
    virtual long SetSharedHandleInternal(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChainInternal@CResource@NDXGI@@QEAAJPEAUIDXGISwapChainInternal@@@Z
    long SetSwapChainInternal(IDXGISwapChainInternal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionalPrimaryResource@CResource@NDXGI@@QEAAXXZ
    void SetTransitionalPrimaryResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CResource@NDXGI@@UEAAJXZ
    virtual long Unmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapHelper@CResource@NDXGI@@QEAAXI@Z
    void UnmapHelper(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapHelper@CResource@NDXGI@@QEAAXXZ
    void UnmapHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMapParameters@CResource@NDXGI@@QEAAXI@Z
    void ValidateMapParameters(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntries@CResource@NDXGI@@SAPEBU_ATL_INTMAP_ENTRY@ATL@@XZ
    static WindissectOpaque const * _GetEntries();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResource@NDXGI@@UEAA@XZ
    virtual ~CResource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsDeviceBitmapGdiInterop@CResource@NDXGI@@MEBA_NXZ
    virtual bool SupportsDeviceBitmapGdiInterop() const;
};
} // namespace NDXGI
