#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 67 member(s).
namespace NDXGIOn12 {
class CDevice {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireWrappedResources@CDevice@NDXGIOn12@@UEAAXPEBQEAUID3D11Resource@@I@Z
    virtual void AcquireWrappedResources(ID3D11Resource * const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDevice@NDXGIOn12@@QEAA@AEBUTConstructorArgs@0NDXGI@@@Z
    CDevice(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDirectFlipSupport@CDevice@NDXGIOn12@@UEAAJIPEAUIDXGIResource@@0PEAH@Z
    virtual long CheckDirectFlipSupport(unsigned int, IDXGIResource *, IDXGIResource *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CDevice@NDXGIOn12@@UEAAJPEAUIDXGIResource@@IPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEAH2PEAX@Z
    virtual long CheckMultiplaneOverlaySupport(IDXGIResource *, unsigned int, DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO const *, int *, int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CDevice@NDXGIOn12@@UEAAJIIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?ConfigureSharedResource@CDevice@NDXGIOn12@@UEAAJHPEAXHI@Z
    virtual long ConfigureSharedResource(int, void *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDriverInstance@CDevice@NDXGIOn12@@UEAAJPEAX000_N1W4D3D_FEATURE_LEVEL@@IPEAP6AJUD3D10DDI_HDEVICE@@I_K040@Z@Z
    virtual long CreateDriverInstance(void *, void *, void *, void *, bool, bool, int, unsigned int, long ( * *)(D3D10DDI_HDEVICE, unsigned int, uint64_t, void *, uint64_t, void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFenceImpl@CDevice@NDXGIOn12@@UEAAJ_KIPEAPEAXPEAPEA_K@Z
    virtual long CreateFenceImpl(uint64_t, unsigned int, void * *, uint64_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWrappedResource@CDevice@NDXGIOn12@@UEAAJPEAUIUnknown@@PEBUD3D11_RESOURCE_FLAGS@@W4D3D12_RESOURCE_STATES@@2AEBU_GUID@@PEAPEAX@Z
    virtual long CreateWrappedResource(IUnknown *, D3D11_RESOURCE_FLAGS const *, int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeduceSharedProperties@CDevice@NDXGIOn12@@QEAAXAEBUResourceInfo@D3D11On12@@AEAUD3D11_DXGI_SHARED_RESOURCE@@AEAPEAX@Z
    void DeduceSharedProperties(::D3D11On12::ResourceInfo const &, D3D11_DXGI_SHARED_RESOURCE &, void * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeduceSharedProperties@CDevice@NDXGIOn12@@QEAAXAEBUResourceInfo@D3D11On12@@AEAUSD3D11SharedResourceCreationArgs@@@Z
    void DeduceSharedProperties(::D3D11On12::ResourceInfo const &, SD3D11SharedResourceCreationArgs &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeduceSharedProperties@CDevice@NDXGIOn12@@QEAAXPEAUIUnknown@@AEAUD3D11_DXGI_SHARED_RESOURCE@@AEAPEAX@Z
    void DeduceSharedProperties(IUnknown *, D3D11_DXGI_SHARED_RESOURCE &, void * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeduceSharedProperties@CDevice@NDXGIOn12@@QEAAXPEAUIUnknown@@AEAUSD3D11SharedResourceCreationArgs@@@Z
    void DeduceSharedProperties(IUnknown *, SD3D11SharedResourceCreationArgs &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyAllocation@CDevice@NDXGIOn12@@UEAAJPEAUNONSXS_DESTROYALLOCATION@@@Z
    virtual long DestroyAllocation(NONSXS_DESTROYALLOCATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDriverInstance@CDevice@NDXGIOn12@@UEAAXXZ
    virtual void DestroyDriverInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySyncObject@CDevice@NDXGIOn12@@UEAAJPEAX@Z
    virtual long DestroySyncObject(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsOverlays@CDevice@NDXGIOn12@@UEAAHXZ
    virtual int DriverSupportsOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueSetEvent@CDevice@NDXGIOn12@@UEAAJPEAX@Z
    virtual long EnqueueSetEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillSharedDesc@CDevice@NDXGIOn12@@QEAAXAEBUResourceInfo@D3D11On12@@PEBUD3D11_RESOURCE_FLAGS@@PEAUD3D11_DXGI_SHARED_RESOURCE@@@Z
    void FillSharedDesc(::D3D11On12::ResourceInfo const &, D3D11_RESOURCE_FLAGS const *, D3D11_DXGI_SHARED_RESOURCE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUnderlyingResource@CDevice@NDXGIOn12@@UEAAJPEAUID3D11Resource@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrentUnderlyingResource(ID3D11Resource *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3D12Device@CDevice@NDXGIOn12@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetD3D12Device(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGPUThreadPriority@CDevice@NDXGIOn12@@UEAAJPEAH@Z
    virtual long GetGPUThreadPriority(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGammaCaps@CDevice@NDXGIOn12@@UEAAJPEAUDXGI_GAMMA_CONTROL_CAPABILITIES@@@Z
    virtual long GetGammaCaps(DXGI_GAMMA_CONTROL_CAPABILITIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInProcessGPUPriority@CDevice@NDXGIOn12@@UEAAJPEAH@Z
    virtual long GetInProcessGPUPriority(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKernelDeviceExecutionState@CDevice@NDXGIOn12@@UEBA?AW4_D3DKMT_DEVICEEXECUTION_STATE@@XZ
    virtual int GetKernelDeviceExecutionState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumFrameLatencyImpl@CDevice@NDXGIOn12@@UEAAJPEAI@Z
    virtual long GetMaximumFrameLatencyImpl(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CDevice@NDXGIOn12@@UEAAJIPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@PEAH@Z
    virtual long GetMultiplaneOverlayCaps(unsigned int, DXGI_MULTIPLANE_OVERLAY_CAPS *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayGroupCaps@CDevice@NDXGIOn12@@UEAAJIIPEAUDXGI_INTERNAL_MULTIPLANE_OVERLAY_GROUP_CAPS@@@Z
    virtual long GetMultiplaneOverlayGroupCaps(unsigned int, unsigned int, DXGI_INTERNAL_MULTIPLANE_OVERLAY_GROUP_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceFlags@CDevice@NDXGIOn12@@SA?AUD3D11_RESOURCE_FLAGS@@UD3D10DDI_HRESOURCE@@PEA_N@Z
    static D3D11_RESOURCE_FLAGS GetResourceFlags(D3D10DDI_HRESOURCE, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaximumFrameLatencyReached@CDevice@NDXGIOn12@@UEAAHI@Z
    virtual int IsMaximumFrameLatencyReached(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDeviceAsError@CDevice@NDXGIOn12@@UEAAXXZ
    virtual void MarkDeviceAsError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySharedResourceCreation@CDevice@NDXGIOn12@@SA_NPEAXPEAUIUnknown@@@Z
    static bool NotifySharedResourceCreation(void *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResources@CDevice@NDXGIOn12@@UEAAJIPEBQEAUIDXGIResource@@W4_DXGI_OFFER_RESOURCE_PRIORITY@@@Z
    virtual long OfferResources(unsigned int, IDXGIResource * const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFenceImpl@CDevice@NDXGIOn12@@UEAAJPEAXAEAPEAXAEAPEA_KAEA_N@Z
    virtual long OpenFenceImpl(void *, void * &, uint64_t * &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenResource@CDevice@NDXGIOn12@@UEAAJ_NPEAX@Z
    virtual long OpenResource(bool, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinResources@CDevice@NDXGIOn12@@UEAAJPEBQEAUIDXGIResource@@I@Z
    virtual long PinResources(IDXGIResource * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlay@CDevice@NDXGIOn12@@UEAAJPEAUIDXGIResource@@IPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAX@Z
    virtual long PresentMultiplaneOverlay(IDXGIResource *, unsigned int, _DXGI_PRESENT_MULTIPLANE_OVERLAY const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlay1CB@CDevice@NDXGIOn12@@SAJPEAXPEBUDXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1@@@Z
    static long PresentMultiplaneOverlay1CB(void *, DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QI11On12Device@CDevice@NDXGIOn12@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QI11On12Device(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResourceInfo@CDevice@NDXGIOn12@@UEAAJ_NPEAXPEAUNONSXS_QUERYRESOURCEINFO@@AEA_N@Z
    virtual long QueryResourceInfo(bool, void *, NONSXS_QUERYRESOURCEINFO *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResourceResidency@CDevice@NDXGIOn12@@UEAAJPEBQEAUIUnknown@@PEAW4DXGI_RESIDENCY@@I@Z
    virtual long QueryResourceResidency(IUnknown * const *, int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResources@CDevice@NDXGIOn12@@UEAAJIPEBQEAUIDXGIResource@@PEAH@Z
    virtual long ReclaimResources(unsigned int, IDXGIResource * const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWrappedResources@CDevice@NDXGIOn12@@UEAAXPEBQEAUID3D11Resource@@I@Z
    virtual void ReleaseWrappedResources(ID3D11Resource * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDevice@CDevice@NDXGIOn12@@UEAAXJ@Z
    virtual void RemoveDevice(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnUnderlyingResource@CDevice@NDXGIOn12@@UEAAJPEAUID3D11Resource@@IPEA_KPEAPEAUID3D12Fence@@@Z
    virtual long ReturnUnderlyingResource(ID3D11Resource *, unsigned int, uint64_t *, ID3D12Fence * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayMode@CDevice@NDXGIOn12@@UEAAJPEAUIDXGIResource@@@Z
    virtual long SetDisplayMode(IDXGIResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventOnCompletion@CDevice@NDXGIOn12@@UEAAJPEAX_K0@Z
    virtual long SetEventOnCompletion(void *, uint64_t, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGPUThreadPriority@CDevice@NDXGIOn12@@UEAAJH@Z
    virtual long SetGPUThreadPriority(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInProcessGPUPriority@CDevice@NDXGIOn12@@UEAAJH@Z
    virtual long SetInProcessGPUPriority(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximumFrameLatencyImpl@CDevice@NDXGIOn12@@UEAAJI@Z
    virtual long SetMaximumFrameLatencyImpl(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceState@CDevice@NDXGIOn12@@QEAAXPEAVCResource@2@W4D3D12_RESOURCE_STATES@@W4SetStateReason@@@Z
    void SetResourceState(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareFence@CDevice@NDXGIOn12@@UEAAJPEAXPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long ShareFence(void *, _SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharingContractPresent@CDevice@NDXGIOn12@@QEAAXPEAUID3D11On12DDIResource@@@Z
    void SharingContractPresent(ID3D11On12DDIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalFence@CDevice@NDXGIOn12@@UEAAJPEAXH_KIPEBQEAVCContext@NDXGI@@@Z
    virtual long SignalFence(void *, int, uint64_t, unsigned int, WindissectOpaque * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalGPUSyncObject@CDevice@NDXGIOn12@@UEAAJPEAUIDXGIResourceInternal@@PEAVCKMResource@NDXGI@@_KPEAT_D3D11_KEYED_MUTEX_PRIVATE_DATA@@@Z
    virtual long SignalGPUSyncObject(IDXGIResourceInternal *, WindissectOpaque *, uint64_t, _D3D11_KEYED_MUTEX_PRIVATE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuccessfulOpenResource@CDevice@NDXGIOn12@@UEAAXPEAX@Z
    virtual void SuccessfulOpenResource(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncSharedResourceCleanup@CDevice@NDXGIOn12@@UEAAXXZ
    virtual void SyncSharedResourceCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncSharedResourceCreationPreamble@CDevice@NDXGIOn12@@UEAAXXZ
    virtual void SyncSharedResourceCreationPreamble();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinResources@CDevice@NDXGIOn12@@UEAAJPEBQEAUIDXGIResource@@I@Z
    virtual long UnpinResources(IDXGIResource * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwrapUnderlyingResource@CDevice@NDXGIOn12@@UEAAJPEAUID3D11Resource@@PEAUID3D12CommandQueue@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnwrapUnderlyingResource(ID3D11Resource *, ID3D12CommandQueue *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFenceImpl@CDevice@NDXGIOn12@@UEAAJPEAXH_N_KIPEBQEAVCContext@NDXGI@@@Z
    virtual long WaitForFenceImpl(void *, int, bool, uint64_t, unsigned int, WindissectOpaque * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForGPUSyncObject@CDevice@NDXGIOn12@@UEAAJPEAUIDXGIResourceInternal@@PEAVCKMResource@NDXGI@@_KKPEAT_D3D11_KEYED_MUTEX_PRIVATE_DATA@@@Z
    virtual long WaitForGPUSyncObject(IDXGIResourceInternal *, WindissectOpaque *, uint64_t, unsigned long, _D3D11_KEYED_MUTEX_PRIVATE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapUnderlyingResource@CDevice@NDXGIOn12@@QEAAXAEAV?$CComPtr@UIUnknown@@@ATL@@PEBUD3D11_RESOURCE_FLAGS@@W4D3D12_RESOURCE_STATES@@2PEAUID3D11LayeredUseCounted@@AEBU_GUID@@PEAPEAXW4WrapReason@D3D11On12@@@Z
    void WrapUnderlyingResource(WindissectOpaque &, D3D11_RESOURCE_FLAGS const *, int, int, ID3D11LayeredUseCounted *, _GUID const &, void * *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevice@NDXGIOn12@@UEAA@XZ
    virtual ~CDevice();
};
} // namespace NDXGIOn12
