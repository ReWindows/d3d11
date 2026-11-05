#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 245 member(s).
namespace NDXGI {
class CDevice {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AcquireBuffer@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@I@Z
    virtual long AcquireBuffer(IDXGIResource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireResource@CDevice@NDXGI@@UEAAXPEAUIDXGIResource@@@Z
    virtual void AcquireResource(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireSyncToken@CDevice@NDXGI@@QEAAPEAXAEBUSyncPacket@2@@Z
    void * AcquireSyncToken(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Adapter@CDevice@NDXGI@@QEBAPEAVCUMDAdapter@2@XZ
    WindissectOpaque * Adapter() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRestrictedResource@CDevice@NDXGI@@UEAAXPEAVCKMResource@2@@Z
    virtual void AddRestrictedResource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Blt@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@PEBUtagRECT@@1I01PEBUSUBRESOURCE_BLT_MAP@@_KII@Z
    virtual long Blt(IDXGIResource *, tagRECT const *, tagRECT const *, unsigned int, IDXGIResource *, tagRECT const *, SUBRESOURCE_BLT_MAP const *, uint64_t, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDevice@NDXGI@@QEAA@AEBUTConstructorArgs@01@@Z
    CDevice(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPrivateDeviceSize@CDevice@NDXGI@@QEAA_KI@Z
    uint64_t CalcPrivateDeviceSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelFlipManagerPresent@CDevice@NDXGI@@QEAAJU_LUID@@_K1@Z
    long CancelFlipManagerPresent(_LUID, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCompositionColorSpaceSupport@CDevice@NDXGI@@UEAAXW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@01PEAH@Z
    virtual void CheckCompositionColorSpaceSupport(int, int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckContextType@CDevice@NDXGI@@QEAA_NW4D3DWDDM2_0DDI_CONTEXTTYPE_FLAG@@@Z
    bool CheckContextType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDirectFlipSupport@CDevice@NDXGI@@UEAAJIPEAUIDXGIResource@@0PEAH@Z
    virtual long CheckDirectFlipSupport(unsigned int, IDXGIResource *, IDXGIResource *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiPlaneOverlayColorSpaceSupport@CDevice@NDXGI@@UEAAXIW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@PEAH@Z
    virtual void CheckMultiPlaneOverlayColorSpaceSupport(unsigned int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@IPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEAH2PEAX@Z
    virtual long CheckMultiplaneOverlaySupport(IDXGIResource *, unsigned int, DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO const *, int *, int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CDevice@NDXGI@@UEAAJIIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSharedResourceAccess@CDevice@NDXGI@@UEAAJII@Z
    virtual long CheckSharedResourceAccess(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureSharedResource@CDevice@NDXGI@@UEAAJHPEAXHI@Z
    virtual long ConfigureSharedResource(int, void *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContext2@CDevice@NDXGI@@QEAAJPEAUD3DWDDM2_0DDICB_CREATECONTEXT@@@Z
    long CreateContext2(D3DWDDM2_0DDICB_CREATECONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContextVirtual2@CDevice@NDXGI@@QEAAJPEAUD3DWDDM2_0DDICB_CREATECONTEXTVIRTUAL@@@Z
    long CreateContextVirtual2(D3DWDDM2_0DDICB_CREATECONTEXTVIRTUAL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDriverInstance@CDevice@NDXGI@@UEAAJPEAX000_N1W4D3D_FEATURE_LEVEL@@IPEAP6AJUD3D10DDI_HDEVICE@@I_K040@Z@Z
    virtual long CreateDriverInstance(void *, void *, void *, void *, bool, bool, int, unsigned int, long ( * *)(D3D10DDI_HDEVICE, unsigned int, uint64_t, void *, uint64_t, void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFence@CDevice@NDXGI@@UEAAJ_KIPEAPEAUIDXGIFenceInternal@@@Z
    virtual long CreateFence(uint64_t, unsigned int, IDXGIFenceInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFenceImpl@CDevice@NDXGI@@UEAAJ_KIPEAPEAXPEAPEA_K@Z
    virtual long CreateFenceImpl(uint64_t, unsigned int, void * *, uint64_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayeredChild@CDevice@NDXGI@@QEAAJIPEBX_KPEAUID3D11LayeredUseCounted@@AEBU_GUID@@PEAPEAX@Z
    long CreateLayeredChild(unsigned int, void const *, uint64_t, ID3D11LayeredUseCounted *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CDevice@NDXGI@@UEAAJPEBUDXGI_SURFACE_DESC@@IIPEBUDXGI_SHARED_RESOURCE@@PEAPEAUIDXGISurface@@@Z
    virtual long CreateSurface(DXGI_SURFACE_DESC const *, unsigned int, unsigned int, DXGI_SHARED_RESOURCE const *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceInternal@CDevice@NDXGI@@UEAAJPEAUIDXGISwapChainInternal@@PEAUIUseCounted2@@PEAXPEBUDXGI_SURFACE_DESC@@IIII2PEAPEAUIDXGIResource@@@Z
    virtual long CreateSurfaceInternal(IDXGISwapChainInternal *, IUseCounted2*, void *, DXGI_SURFACE_DESC const *, unsigned int, unsigned int, unsigned int, unsigned int, void *, IDXGIResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DXGIAcquireSync@CDevice@NDXGI@@QEAAJPEAUIDXGIResourceInternal@@PEAVCKMResource@2@_KK@Z
    long DXGIAcquireSync(IDXGIResourceInternal *, WindissectOpaque *, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DXGIReleaseSync@CDevice@NDXGI@@QEAAJPEAUIDXGIResourceInternal@@PEAVCKMResource@2@_K@Z
    long DXGIReleaseSync(IDXGIResourceInternal *, WindissectOpaque *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyAllocation@CDevice@NDXGI@@UEAAJPEAUNONSXS_DESTROYALLOCATION@@@Z
    virtual long DestroyAllocation(NONSXS_DESTROYALLOCATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDriverInstance@CDevice@NDXGI@@UEAAXXZ
    virtual void DestroyDriverInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySyncObject@CDevice@NDXGI@@QEAAJI@Z
    long DestroySyncObject(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySyncObject@CDevice@NDXGI@@UEAAJPEAX@Z
    virtual long DestroySyncObject(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyTrackedFence@CDevice@NDXGI@@QEAAXPEAUD3D11_TRACKED_FENCE@@@Z
    void DestroyTrackedFence(D3D11_TRACKED_FENCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceCompletedHWNDFullscreenTransition@CDevice@NDXGI@@UEAAXXZ
    virtual void DeviceCompletedHWNDFullscreenTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceStatus@CDevice@NDXGI@@QEAAJ_N@Z
    long DeviceStatus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverInternalError@CDevice@NDXGI@@QEAAXJ@Z
    void DriverInternalError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsDecodeMultiplaneOverlay@CDevice@NDXGI@@UEAAHXZ
    virtual int DriverSupportsDecodeMultiplaneOverlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsIndependentFlip@CDevice@NDXGI@@UEAAHXZ
    virtual int DriverSupportsIndependentFlip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsKernelOverlayCaps@CDevice@NDXGI@@QEAA_NXZ
    bool DriverSupportsKernelOverlayCaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsOverlays@CDevice@NDXGI@@UEAAHXZ
    virtual int DriverSupportsOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWRundown@CDevice@NDXGI@@QEAAX_K@Z
    void ETWRundown(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWrite@CDevice@NDXGI@@QEBAX_KPEBU_EVENT_DESCRIPTOR@@1@Z
    void ETWWrite(uint64_t, _EVENT_DESCRIPTOR const *, _EVENT_DESCRIPTOR const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWriteRenderCB@CDevice@NDXGI@@QEBAJIPEBU_D3DDDICB_RENDER@@@Z
    long ETWWriteRenderCB(unsigned int, _D3DDDICB_RENDER const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWriteRotateResources@CDevice@NDXGI@@QEAAXPEAUIDXGIResource@@PEBQEAU3@I@Z
    void ETWWriteRotateResources(IDXGIResource *, IDXGIResource * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWriteSubmitCommandCB@CDevice@NDXGI@@QEBAJIPEBU_D3DDDICB_SUBMITCOMMAND@@@Z
    long ETWWriteSubmitCommandCB(unsigned int, _D3DDDICB_SUBMITCOMMAND const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmulateEnqueueSetEvent@CDevice@NDXGI@@SAJPEAX@Z
    static long EmulateEnqueueSetEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePresentInterrupt@CDevice@NDXGI@@QEAAJU_LUID@@_K@Z
    long EnablePresentInterrupt(_LUID, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableVariableRefreshForProcess@CDevice@NDXGI@@QEAAJXZ
    long EnableVariableRefreshForProcess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueSetEvent@CDevice@NDXGI@@UEAAJPEAX@Z
    virtual long EnqueueSetEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChildDevice@CDevice@NDXGI@@UEAAJPEAUIDXGIAdapter@@W4DXGI_INTERNAL_CHILD_DEVICE_TYPE@@@Z
    virtual long EnsureChildDevice(IDXGIAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChildDevice@CDevice@NDXGI@@QEAAJPEAUIDXGIAdapter@@AEAV?$CComPtr@VCDevice@NDXGI@@@ATL@@PEBD@Z
    long EnsureChildDevice(IDXGIAdapter *, WindissectOpaque &, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Escape@CDevice@NDXGI@@QEAAJW4_D3DKMT_ESCAPETYPE@@PEAXIU_D3DDDI_ESCAPEFLAGS@@PEAVCContext@2@@Z
    long Escape(int, void *, unsigned int, _D3DDDI_ESCAPEFLAGS, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractIfBundledResource@CDevice@NDXGI@@QEAAJAEAPEAXAEAVSafeHANDLE@@AEA_N@Z
    long ExtractIfBundledResource(void * &, SafeHANDLE &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CDevice@NDXGI@@QEAAXAEBUTConstructorArgs@12@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CDevice@NDXGI@@UEAAHI@Z
    virtual int Flush(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CDevice@NDXGI@@QEAAHIW4D3DWDDM2_0DDI_CONTEXTTYPE_FLAG@@@Z
    int Flush(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAndEnqueueSetEvent@CDevice@NDXGI@@QEAAJW4D3DWDDM2_0DDI_CONTEXTTYPE_FLAG@@PEAXI@Z
    long FlushAndEnqueueSetEvent(int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCompletedPresents@CDevice@NDXGI@@QEAAJU_LUID@@PEAX@Z
    long FlushCompletedPresents(_LUID, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDeletion@CDevice@NDXGI@@UEAAXPEAUIDXGIResource@@PEBQEAU3@IW4DXGI_INTERNAL_FLUSH_DELETION_REASON@@@Z
    virtual void FlushDeletion(IDXGIResource *, IDXGIResource * const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeSyncToken@CDevice@NDXGI@@QEAAXPEAX@Z
    void FreeSyncToken(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapter@CDevice@NDXGI@@UEAAJPEAPEAUIDXGIAdapter@@@Z
    virtual long GetAdapter(IDXGIAdapter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaps@CDevice@NDXGI@@UEAA?AUDXGI_INTERNAL_DEVICE_CAPS@@XZ
    virtual DXGI_INTERNAL_DEVICE_CAPS GetCaps();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildDevice@CDevice@NDXGI@@UEAAPEAUIDXGIDeviceInternal3@@W4DXGI_INTERNAL_CHILD_DEVICE_TYPE@@@Z
    virtual IDXGIDeviceInternal3* GetChildDevice(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClockCalibrationAndFrequency@CDevice@NDXGI@@QEAAJW4DXGK_ENGINE_TYPE@@PEA_K11@Z
    long GetClockCalibrationAndFrequency(int, uint64_t *, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProtection@CDevice@NDXGI@@UEAA?AUDXGI_INTERNAL_CONTENT_PROTECTION@@XZ
    virtual DXGI_INTERNAL_CONTENT_PROTECTION GetContentProtection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextResolver@CDevice@NDXGI@@UEAAJPEAPEAX@Z
    virtual long GetContextResolver(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCommandQueue@CDevice@NDXGI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrentCommandQueue(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@PEAUDXGI_SURFACE_DESC@@PEAI@Z
    virtual long GetDesc(IDXGIResource *, DXGI_SURFACE_DESC *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceRemovedReason@CDevice@NDXGI@@UEAAJXZ
    virtual long GetDeviceRemovedReason();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlipExSemaphoreHandle@CDevice@NDXGI@@UEAAPEAXXZ
    virtual void * GetFlipExSemaphoreHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGPUThreadPriority@CDevice@NDXGI@@UEAAJPEAH@Z
    virtual long GetGPUThreadPriority(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGammaCaps@CDevice@NDXGI@@UEAAJPEAUDXGI_GAMMA_CONTROL_CAPABILITIES@@@Z
    virtual long GetGammaCaps(DXGI_GAMMA_CONTROL_CAPABILITIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareProtectionCaps@CDevice@NDXGI@@UEAAXPEAH0@Z
    virtual void GetHardwareProtectionCaps(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInProcessGPUPriority@CDevice@NDXGI@@UEAAJPEAH@Z
    virtual long GetInProcessGPUPriority(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalMultiplaneOverlayCaps@CDevice@NDXGI@@QEAAJIPEAUDXGI_INTERNAL_MULTIPLANE_OVERLAY_CAPS@@PEAH@Z
    long GetInternalMultiplaneOverlayCaps(unsigned int, DXGI_INTERNAL_MULTIPLANE_OVERLAY_CAPS *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKernelDeviceExecutionState@CDevice@NDXGI@@UEBA?AW4_D3DKMT_DEVICEEXECUTION_STATE@@XZ
    virtual int GetKernelDeviceExecutionState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayeredChildSize@CDevice@NDXGI@@QEAA_KIPEBX_K@Z
    uint64_t GetLayeredChildSize(unsigned int, void const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumFrameLatency@CDevice@NDXGI@@UEAAJPEAI@Z
    virtual long GetMaximumFrameLatency(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CDevice@NDXGI@@UEAAJIPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@PEAH@Z
    virtual long GetMultiplaneOverlayCaps(unsigned int, DXGI_MULTIPLANE_OVERLAY_CAPS *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayGroupCaps@CDevice@NDXGI@@UEAAJIIPEAUDXGI_INTERNAL_MULTIPLANE_OVERLAY_GROUP_CAPS@@@Z
    virtual long GetMultiplaneOverlayGroupCaps(unsigned int, unsigned int, DXGI_INTERNAL_MULTIPLANE_OVERLAY_GROUP_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDevice@NDXGI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentHistoryTokenForVistaBlt@CDevice@NDXGI@@QEAAHAEA_K@Z
    int GetPresentHistoryTokenForVistaBlt(uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CDevice@NDXGI@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceParent@CDevice@NDXGI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetResourceParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictedSharedResourceProcess@CDevice@NDXGI@@UEAAPEAXI@Z
    virtual void * GetRestrictedSharedResourceProcess(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictedSharedResourceProcessCount@CDevice@NDXGI@@UEAAIXZ
    virtual unsigned int GetRestrictedSharedResourceProcessCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedResourceCreationArgs@CDevice@NDXGI@@QEAAPEAUSD3D11SharedResourceCreationArgs@@XZ
    SD3D11SharedResourceCreationArgs * GetSharedResourceCreationArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncPacketFromToken@CDevice@NDXGI@@QEAA?AUSyncPacket@2@PEAX@Z
    WindissectOpaque GetSyncPacketFromToken(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTexDescsForCreateSurface@CDevice@NDXGI@@QEAAXPEAUD3D11_TEXTURE2D_DESC1@@AEA_NPEBUDXGI_SURFACE_DESC@@AEAIII_N@Z
    void GetTexDescsForCreateSurface(D3D11_TEXTURE2D_DESC1*, bool &, DXGI_SURFACE_DESC const *, unsigned int &, unsigned int, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBadDriverVersionDisabledForHWProtection@CDevice@NDXGI@@UEAAHXZ
    virtual int IsBadDriverVersionDisabledForHWProtection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaximumFrameLatencyReached@CDevice@NDXGI@@UEAAHI@Z
    virtual int IsMaximumFrameLatencyReached(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidScanoutFormat@CDevice@NDXGI@@UEAAJW4DXGI_FORMAT@@@Z
    virtual long IsValidScanoutFormat(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXBOX@CDevice@NDXGI@@UEAAHXZ
    virtual int IsXBOX();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LLOBeginLayerDestruction@CDevice@NDXGI@@QEAAXXZ
    void LLOBeginLayerDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LLOCompleteLayerConstruction@CDevice@NDXGI@@QEAAJXZ
    long LLOCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDroppedAPICallIfEnabled@CDevice@NDXGI@@UEAAXW4DXGI_INTERNAL_MARKER_OP@@@Z
    virtual void LogDroppedAPICallIfEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MPO3DDIsEnabled@CDevice@NDXGI@@QEAA_NXZ
    bool MPO3DDIsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@IPEAUDXGI_MAPPED_RECT@@I@Z
    virtual long Map(IDXGIResource *, unsigned int, DXGI_MAPPED_RECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDeviceAsError@CDevice@NDXGI@@UEAAXXZ
    virtual void MarkDeviceAsError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NTStatusToHResult@CDevice@NDXGI@@QEAAJJ@Z
    long NTStatusToHResult(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResources@CDevice@NDXGI@@UEAAJIPEBQEAUIDXGIResource@@W4_DXGI_OFFER_RESOURCE_PRIORITY@@@Z
    virtual long OfferResources(unsigned int, IDXGIResource * const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResources1@CDevice@NDXGI@@UEAAJIPEBQEAUIDXGIResource@@W4_DXGI_OFFER_RESOURCE_PRIORITY@@I@Z
    virtual long OfferResources1(unsigned int, IDXGIResource * const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResourcesImpl@CDevice@NDXGI@@QEAAJIPEBQEAUIDXGIResource@@W4_DXGI_OFFER_RESOURCE_PRIORITY@@IEH@Z
    long OfferResourcesImpl(unsigned int, IDXGIResource * const *, int, unsigned int, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFence@CDevice@NDXGI@@UEAAJPEAXPEAPEAUIDXGIFenceInternal@@@Z
    virtual long OpenFence(void *, IDXGIFenceInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFenceImpl@CDevice@NDXGI@@UEAAJPEAXAEAPEAXAEAPEA_KAEA_N@Z
    virtual long OpenFenceImpl(void *, void * &, uint64_t * &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenNtHandleFromName@CDevice@NDXGI@@QEAAJPEAU_D3DKMT_OPENNTHANDLEFROMNAME@@@Z
    long OpenNtHandleFromName(_D3DKMT_OPENNTHANDLEFROMNAME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenResource@CDevice@NDXGI@@UEAAJ_NPEAX@Z
    virtual long OpenResource(bool, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@CDevice@NDXGI@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource1@CDevice@NDXGI@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource1(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PanelFitterEnabled@CDevice@NDXGI@@QEAA_NXZ
    bool PanelFitterEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinResources@CDevice@NDXGI@@UEAAJPEBQEAUIDXGIResource@@I@Z
    virtual long PinResources(IDXGIResource * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDevice@NDXGI@@UEAAJPEBUDXGI_PRESENTSURFACE@@IPEAUIDXGIResource@@PEAXIIPEAI@Z
    virtual long Present(DXGI_PRESENTSURFACE const *, unsigned int, IDXGIResource *, void *, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCompositionBuffers@CDevice@NDXGI@@QEAAJPEAXPEBQEAUIUnknown@@I@Z
    long PresentCompositionBuffers(void *, IUnknown * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentFlipManagerToken@CDevice@NDXGI@@QEAAJPEAX_K1IIPEBQEAUIUnknown@@I@Z
    long PresentFlipManagerToken(void *, uint64_t, uint64_t, unsigned int, unsigned int, IUnknown * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentImpl@CDevice@NDXGI@@QEAAJPEBUDXGI_PRESENTSURFACE@@IPEAUIDXGIResource@@PEAXIIPEAI@Z
    long PresentImpl(DXGI_PRESENTSURFACE const *, unsigned int, IDXGIResource *, void *, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlay@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@IPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAX@Z
    virtual long PresentMultiplaneOverlay(IDXGIResource *, unsigned int, _DXGI_PRESENT_MULTIPLANE_OVERLAY const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResourceInfo@CDevice@NDXGI@@UEAAJ_NPEAXPEAUNONSXS_QUERYRESOURCEINFO@@AEA_N@Z
    virtual long QueryResourceInfo(bool, void *, NONSXS_QUERYRESOURCEINFO *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResourceResidency@CDevice@NDXGI@@UEAAJPEBQEAUIUnknown@@PEAW4DXGI_RESIDENCY@@I@Z
    virtual long QueryResourceResidency(IUnknown * const *, int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryScanoutCaps@CDevice@NDXGI@@QEAAJIPEAI@Z
    long QueryScanoutCaps(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryScanoutCaps@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@IIIPEAW4DXGI_INTERNAL_SCANOUT_FLAGS@@@Z
    virtual long QueryScanoutCaps(IDXGIResource *, unsigned int, unsigned int, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadbackMonitoredResources@CDevice@NDXGI@@QEAAXXZ
    void ReadbackMonitoredResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResources@CDevice@NDXGI@@UEAAJIPEBQEAUIDXGIResource@@PEAH@Z
    virtual long ReclaimResources(unsigned int, IDXGIResource * const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResources1@CDevice@NDXGI@@UEAAJIPEBQEAUIDXGIResource@@PEAW4_DXGI_RECLAIM_RESOURCE_RESULTS@@@Z
    virtual long ReclaimResources1(unsigned int, IDXGIResource * const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResourcesImpl@CDevice@NDXGI@@QEAAJIPEBQEAUIDXGIResource@@PEAW4_DXGI_RECLAIM_RESOURCE_RESULTS@@EH@Z
    long ReclaimResourcesImpl(unsigned int, IDXGIResource * const *, int *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResource@CDevice@NDXGI@@UEAAXPEAUIDXGIResource@@@Z
    virtual void ReleaseResource(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDevice@CDevice@NDXGI@@UEAAXJ@Z
    virtual void RemoveDevice(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRestrictedResource@CDevice@NDXGI@@UEAAXPEAVCKMResource@2@@Z
    virtual void RemoveRestrictedResource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSharedResource@CDevice@NDXGI@@UEAAXPEAUIDXGIResource@@@Z
    virtual void ResolveSharedResource(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSharedResourceImpl@CDevice@NDXGI@@QEAAXPEAVCResource@2@@Z
    void ResolveSharedResourceImpl(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveShaderComment@CDevice@NDXGI@@QEAAJUD3D10DDI_HSHADER@@PEAGPEA_K@Z
    long RetrieveShaderComment(D3D10DDI_HSHADER, unsigned short *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotateResourceIdentities@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@PEBQEAU3@I@Z
    virtual long RotateResourceIdentities(IDXGIResource *, IDXGIResource * const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentProtection@CDevice@NDXGI@@QEAAJI@Z
    long SetContentProtection(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayMode@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@@Z
    virtual long SetDisplayMode(IDXGIResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventOnCompletion@CDevice@NDXGI@@UEAAJPEAX_K0@Z
    virtual long SetEventOnCompletion(void *, uint64_t, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGPUThreadPriority@CDevice@NDXGI@@UEAAJH@Z
    virtual long SetGPUThreadPriority(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareProtection@CDevice@NDXGI@@UEAAJPEAUIDXGIResource@@H@Z
    virtual long SetHardwareProtection(IDXGIResource *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInProcessGPUPriority@CDevice@NDXGI@@UEAAJH@Z
    virtual long SetInProcessGPUPriority(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMarkerIfRenderInstrumentationEnabled@CDevice@NDXGI@@UEAAXW4DXGI_INTERNAL_MARKER_OP@@@Z
    virtual void SetMarkerIfRenderInstrumentationEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximumFrameLatency@CDevice@NDXGI@@UEAAJI@Z
    virtual long SetMaximumFrameLatency(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentPostSignal@CDevice@NDXGI@@UEAAXPEAUIDXGIFenceInternal@@_KH@Z
    virtual void SetPresentPostSignal(IDXGIFenceInternal *, uint64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CDevice@NDXGI@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CDevice@NDXGI@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestrictedSharedResourceProcess@CDevice@NDXGI@@UEAAJPEAXH@Z
    virtual long SetRestrictedSharedResourceProcess(void *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedResourceCreationArgs@CDevice@NDXGI@@UEAAJPEAX@Z
    virtual long SetSharedResourceCreationArgs(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionalPrimaryResource@CDevice@NDXGI@@UEAAXPEAUIDXGIResource@@@Z
    virtual void SetTransitionalPrimaryResource(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareFence@CDevice@NDXGI@@UEAAJPEAXPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long ShareFence(void *, _SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareObjects@CDevice@NDXGI@@QEAAJIPEBIPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z
    long ShareObjects(unsigned int, unsigned int const *, _OBJECT_ATTRIBUTES *, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalFence@CDevice@NDXGI@@QEAAJPEAUIDXGIFenceInternal@@_K@Z
    long SignalFence(IDXGIFenceInternal *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalFence@CDevice@NDXGI@@UEAAJPEAXH_KIPEBQEAVCContext@2@@Z
    virtual long SignalFence(void *, int, uint64_t, unsigned int, WindissectOpaque * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalGPUSyncObject@CDevice@NDXGI@@UEAAJPEAUIDXGIResourceInternal@@PEAVCKMResource@2@_KPEAT_D3D11_KEYED_MUTEX_PRIVATE_DATA@@@Z
    virtual long SignalGPUSyncObject(IDXGIResourceInternal *, WindissectOpaque *, uint64_t, _D3D11_KEYED_MUTEX_PRIVATE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuccessfulOpenResource@CDevice@NDXGI@@UEAAXPEAX@Z
    virtual void SuccessfulOpenResource(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncSharedResourceCleanup@CDevice@NDXGI@@UEAAXXZ
    virtual void SyncSharedResourceCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncSharedResourceCreationPreamble@CDevice@NDXGI@@UEAAXXZ
    virtual void SyncSharedResourceCreationPreamble();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateDwordAccess@CDevice@NDXGI@@QEBAKK@Z
    unsigned long TranslateDwordAccess(unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@CDevice@NDXGI@@UEAAXXZ
    virtual void Trim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimNotificationCallback@CDevice@NDXGI@@SAXPEAU_D3DKMT_TRIMNOTIFICATION@@@Z
    static void TrimNotificationCallback(_D3DKMT_TRIMNOTIFICATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimRuntimeMemory@CDevice@NDXGI@@QEAAXXZ
    void TrimRuntimeMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CDevice@NDXGI@@UEAAXPEAUIDXGIResource@@I@Z
    virtual void Unmap(IDXGIResource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinResources@CDevice@NDXGI@@UEAAJPEBQEAUIDXGIResource@@I@Z
    virtual long UnpinResources(IDXGIResource * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateGetDisplaySurfaceDataDest@CDevice@NDXGI@@UEAAJPEAUIDXGIDebugProducer@@W4DXGI_GETDISPLAYSURFACEDATA_VERSION@@PEAUIDXGIResource@@@Z
    virtual long ValidateGetDisplaySurfaceDataDest(IDXGIDebugProducer *, int, IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFence@CDevice@NDXGI@@UEAAJPEAUIDXGIFenceInternal@@_KI@Z
    virtual long WaitForFence(IDXGIFenceInternal *, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFenceImpl@CDevice@NDXGI@@UEAAJPEAXH_N_KIPEBQEAVCContext@2@@Z
    virtual long WaitForFenceImpl(void *, int, bool, uint64_t, unsigned int, WindissectOpaque * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFenceImpl@CDevice@NDXGI@@QEAAJI_K_NIPEBQEAVCHwQueue@2@@Z
    long WaitForFenceImpl(unsigned int, uint64_t, bool, unsigned int, WindissectOpaque * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForGPUSyncObject@CDevice@NDXGI@@UEAAJPEAUIDXGIResourceInternal@@PEAVCKMResource@2@_KKPEAT_D3D11_KEYED_MUTEX_PRIVATE_DATA@@@Z
    virtual long WaitForGPUSyncObject(IDXGIResourceInternal *, WindissectOpaque *, uint64_t, unsigned long, _D3D11_KEYED_MUTEX_PRIVATE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntries@CDevice@NDXGI@@SAPEBU_ATL_INTMAP_ENTRY@ATL@@XZ
    static WindissectOpaque const * _GetEntries();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevice@NDXGI@@UEAA@XZ
    virtual ~CDevice();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireResourceCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SYNCTOKEN@@@Z
    static long AcquireResourceCB(void *, _D3DDDICB_SYNCTOKEN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPresentLimitSemaphore@CDevice@NDXGI@@IEAAXI@Z
    void AdjustPresentLimitSemaphore(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_ALLOCATE@@@Z
    static long AllocateCB(void *, _D3DDDICB_ALLOCATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertPresentArgToPresentMPO3@CDevice@NDXGI@@KAXPEBU_D3DKMT_PRESENT@@PEBUDDisplayPrivateData@12@IPEAU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@@Z
    static void ConvertPresentArgToPresentMPO3(_D3DKMT_PRESENT const *, WindissectOpaque const *, unsigned int, _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToDDI@CDevice@NDXGI@@KAXPEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAUDXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z
    static void ConvertToDDI(DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const *, DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToDDI@CDevice@NDXGI@@KAXPEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAUDXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1@@W4_D3D_DRIVER_DDI_VERSION@@@Z
    static void ConvertToDDI(DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const *, DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContextCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_CREATECONTEXT@@@Z
    static long CreateContextCB(void *, _D3DDDICB_CREATECONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContextVirtualCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_CREATECONTEXTVIRTUAL@@@Z
    static long CreateContextVirtualCB(void *, _D3DDDICB_CREATECONTEXTVIRTUAL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHwQueueCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_CREATEHWQUEUE@@@Z
    static long CreateHwQueueCB(void *, _D3DDDICB_CREATEHWQUEUE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverlayCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_CREATEOVERLAY@@@Z
    static long CreateOverlayCB(void *, _D3DDDICB_CREATEOVERLAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePagingQueueCB@CDevice@NDXGI@@KAJPEAXPEAUD3DDDICB_CREATEPAGINGQUEUE@@@Z
    static long CreatePagingQueueCB(void *, D3DDDICB_CREATEPAGINGQUEUE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSynchronizationObject2CB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_CREATESYNCHRONIZATIONOBJECT2@@@Z
    static long CreateSynchronizationObject2CB(void *, _D3DDDICB_CREATESYNCHRONIZATIONOBJECT2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSynchronizationObjectCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_CREATESYNCHRONIZATIONOBJECT@@@Z
    static long CreateSynchronizationObjectCB(void *, _D3DDDICB_CREATESYNCHRONIZATIONOBJECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deallocate2CB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_DEALLOCATE2@@@Z
    static long Deallocate2CB(void *, _D3DDDICB_DEALLOCATE2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeallocateCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_DEALLOCATE@@@Z
    static long DeallocateCB(void *, _D3DDDICB_DEALLOCATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyContextCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_DESTROYCONTEXT@@@Z
    static long DestroyContextCB(void *, _D3DDDICB_DESTROYCONTEXT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyHwQueueCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_DESTROYHWQUEUE@@@Z
    static long DestroyHwQueueCB(void *, _D3DDDICB_DESTROYHWQUEUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyOverlayCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_DESTROYOVERLAY@@@Z
    static long DestroyOverlayCB(void *, _D3DDDICB_DESTROYOVERLAY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPagingQueueCB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDI_DESTROYPAGINGQUEUE@@@Z
    static long DestroyPagingQueueCB(void *, D3DDDI_DESTROYPAGINGQUEUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySynchronizationObjectCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_DESTROYSYNCHRONIZATIONOBJECT@@@Z
    static long DestroySynchronizationObjectCB(void *, _D3DDDICB_DESTROYSYNCHRONIZATIONOBJECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EscapeCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_ESCAPE@@@Z
    static long EscapeCB(void *, _D3DDDICB_ESCAPE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvictCB@CDevice@NDXGI@@KAJPEAXPEAUD3DDDICB_EVICT@@@Z
    static long EvictCB(void *, D3DDDICB_EVICT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlipOverlayCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_FLIPOVERLAY@@@Z
    static long FlipOverlayCB(void *, _D3DDDICB_FLIPOVERLAY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeGpuVirtualAddressCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_FREEGPUVIRTUALADDRESS@@@Z
    static long FreeGpuVirtualAddressCB(void *, _D3DDDICB_FREEGPUVIRTUALADDRESS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumFrameLatencyImpl@CDevice@NDXGI@@MEAAJPEAI@Z
    virtual long GetMaximumFrameLatencyImpl(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonOpaquePlaneCount@CDevice@NDXGI@@IEBAIPEAUIDXGIResource@@@Z
    unsigned int GetNonOpaquePlaneCount(IDXGIResource *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourcePresentPrivateDriverDataCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z
    static long GetResourcePresentPrivateDriverDataCB(void *, _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMPOSyncIntervalOverride@CDevice@NDXGI@@KAJPEAUID3D11Device@@PEA_N1PEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAUDXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO@@@Z
    static long HandleMPOSyncIntervalOverride(ID3D11Device *, bool *, bool *, _D3DKMT_MULTIPLANE_OVERLAY3*, DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleMPOSyncIntervalOverride@CDevice@NDXGI@@KAJPEAUID3D11Device@@PEA_N1PEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAUDXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO_PREWDDM2_2@@@Z
    static long HandleMPOSyncIntervalOverride(ID3D11Device *, bool *, bool *, _D3DKMT_MULTIPLANE_OVERLAY3*, DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO_PREWDDM2_2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCacheCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_INVALIDATECACHE@@@Z
    static long InvalidateCacheCB(void *, _D3DDDICB_INVALIDATECACHE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock2CB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_LOCK2@@@Z
    static long Lock2CB(void *, _D3DDDICB_LOCK2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_LOCK@@@Z
    static long LockCB(void *, _D3DDDICB_LOCK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogUMDMarkerCB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDICB_LOGUMDMARKER@@@Z
    static long LogUMDMarkerCB(void *, D3DDDICB_LOGUMDMARKER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeResidentCB@CDevice@NDXGI@@KAJPEAXPEAUD3DDDI_MAKERESIDENT@@@Z
    static long MakeResidentCB(void *, D3DDDI_MAKERESIDENT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapGpuVirtualAddressCB@CDevice@NDXGI@@KAJPEAXPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z
    static long MapGpuVirtualAddressCB(void *, D3DDDI_MAPGPUVIRTUALADDRESS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferAllocations2CB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDICB_OFFERALLOCATIONS2@@@Z
    static long OfferAllocations2CB(void *, D3DDDICB_OFFERALLOCATIONS2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferAllocationsCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_OFFERALLOCATIONS@@@Z
    static long OfferAllocationsCB(void *, _D3DDDICB_OFFERALLOCATIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCB@CDevice@NDXGI@@KAJPEAXPEAUDXGIDDICB_PRESENT@@@Z
    static long PresentCB(void *, DXGIDDICB_PRESENT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCB_PreWDDM2@CDevice@NDXGI@@KAJPEAXPEAUDXGIDDICB_PRESENT_PREWDDM2@@@Z
    static long PresentCB_PreWDDM2(void *, DXGIDDICB_PRESENT_PREWDDM2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCB_PreWDDM2_2@CDevice@NDXGI@@KAJPEAXPEAUDXGIDDICB_PRESENT_PREWDDM2_2@@@Z
    static long PresentCB_PreWDDM2_2(void *, DXGIDDICB_PRESENT_PREWDDM2_2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlay1CB@CDevice@NDXGI@@KAJPEAXPEBUDXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1@@@Z
    static long PresentMultiplaneOverlay1CB(void *, DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlay1CB_PreWDDM2_2@CDevice@NDXGI@@KAJPEAXPEBUDXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1_PREWDDM2_2@@@Z
    static long PresentMultiplaneOverlay1CB_PreWDDM2_2(void *, DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1_PREWDDM2_2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlayCB@CDevice@NDXGI@@KAJPEAXPEBUDXGIDDICB_PRESENT_MULTIPLANE_OVERLAY@@@Z
    static long PresentMultiplaneOverlayCB(void *, DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResidencyCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_QUERYRESIDENCY@@@Z
    static long QueryResidencyCB(void *, _D3DDDICB_QUERYRESIDENCY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimAllocations2CB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_RECLAIMALLOCATIONS2@@@Z
    static long ReclaimAllocations2CB(void *, _D3DDDICB_RECLAIMALLOCATIONS2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimAllocations3CB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_RECLAIMALLOCATIONS3@@@Z
    static long ReclaimAllocations3CB(void *, _D3DDDICB_RECLAIMALLOCATIONS3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimAllocationsCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_RECLAIMALLOCATIONS@@@Z
    static long ReclaimAllocationsCB(void *, _D3DDDICB_RECLAIMALLOCATIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimAllocationsCBImpl@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_RECLAIMALLOCATIONS3@@@Z
    static long ReclaimAllocationsCBImpl(void *, _D3DDDICB_RECLAIMALLOCATIONS3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResourceCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SYNCTOKEN@@@Z
    static long ReleaseResourceCB(void *, _D3DDDICB_SYNCTOKEN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_RENDER@@@Z
    static long RenderCB(void *, _D3DDDICB_RENDER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveGpuVirtualAddressCB@CDevice@NDXGI@@KAJPEAXPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z
    static long ReserveGpuVirtualAddressCB(void *, D3DDDI_RESERVEGPUVIRTUALADDRESS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDXGIContext@CDevice@NDXGI@@KAJPEAXPEAPEAX@Z
    static long ResolveDXGIContext(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayModeCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_SETDISPLAYMODE@@@Z
    static long SetDisplayModeCB(void *, _D3DDDICB_SETDISPLAYMODE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayPrivateDriverFormatCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SETDISPLAYPRIVATEDRIVERFORMAT@@@Z
    static long SetDisplayPrivateDriverFormatCB(void *, _D3DDDICB_SETDISPLAYPRIVATEDRIVERFORMAT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximumFrameLatencyImpl@CDevice@NDXGI@@MEAAJI@Z
    virtual long SetMaximumFrameLatencyImpl(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPriorityCB@CDevice@NDXGI@@KAJPEAXPEAU_D3DDDICB_SETPRIORITY@@@Z
    static long SetPriorityCB(void *, _D3DDDICB_SETPRIORITY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalSynchronizationObject2CB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SIGNALSYNCHRONIZATIONOBJECT2@@@Z
    static long SignalSynchronizationObject2CB(void *, _D3DDDICB_SIGNALSYNCHRONIZATIONOBJECT2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalSynchronizationObjectCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SIGNALSYNCHRONIZATIONOBJECT@@@Z
    static long SignalSynchronizationObjectCB(void *, _D3DDDICB_SIGNALSYNCHRONIZATIONOBJECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalSynchronizationObjectFromCpuCB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDICB_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@@Z
    static long SignalSynchronizationObjectFromCpuCB(void *, D3DDDICB_SIGNALSYNCHRONIZATIONOBJECTFROMCPU const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalSynchronizationObjectFromGpu2CB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDICB_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@@Z
    static long SignalSynchronizationObjectFromGpu2CB(void *, D3DDDICB_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalSynchronizationObjectFromGpuCB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDICB_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z
    static long SignalSynchronizationObjectFromGpuCB(void *, D3DDDICB_SIGNALSYNCHRONIZATIONOBJECTFROMGPU const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitCommandCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SUBMITCOMMAND@@@Z
    static long SubmitCommandCB(void *, _D3DDDICB_SUBMITCOMMAND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitCommandToHwQueueCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SUBMITCOMMANDTOHWQUEUE@@@Z
    static long SubmitCommandToHwQueueCB(void *, _D3DDDICB_SUBMITCOMMANDTOHWQUEUE const *);
    // Category: Method | Source: PE Export
    // Symbol: ?SubmitHistorySequenceCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SUBMITHISTORYSEQUENCE@@@Z
    static long SubmitHistorySequenceCB(void *, _D3DDDICB_SUBMITHISTORYSEQUENCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitPresentBltToHwQueueCB@CDevice@NDXGI@@KAJPEAXPEAUDXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE@@@Z
    static long SubmitPresentBltToHwQueueCB(void *, DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitPresentToHwQueueCB@CDevice@NDXGI@@KAJPEAXPEAUDXGIDDICB_SUBMITPRESENTTOHWQUEUE@@@Z
    static long SubmitPresentToHwQueueCB(void *, DXGIDDICB_SUBMITPRESENTTOHWQUEUE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitSignalSyncObjectsToHwQueueCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z
    static long SubmitSignalSyncObjectsToHwQueueCB(void *, _D3DDDICB_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitWaitForSyncObjectsToHwQueueCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE@@@Z
    static long SubmitWaitForSyncObjectsToHwQueueCB(void *, _D3DDDICB_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock2CB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_UNLOCK2@@@Z
    static long Unlock2CB(void *, _D3DDDICB_UNLOCK2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_UNLOCK@@@Z
    static long UnlockCB(void *, _D3DDDICB_UNLOCK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllocationPropertyCB@CDevice@NDXGI@@KAJPEAXPEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z
    static long UpdateAllocationPropertyCB(void *, D3DDDI_UPDATEALLOCPROPERTY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGpuVirtualAddressCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_UPDATEGPUVIRTUALADDRESS@@@Z
    static long UpdateGpuVirtualAddressCB(void *, _D3DDDICB_UPDATEGPUVIRTUALADDRESS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverlayCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_UPDATEOVERLAY@@@Z
    static long UpdateOverlayCB(void *, _D3DDDICB_UPDATEOVERLAY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSynchronizationObject2CB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_WAITFORSYNCHRONIZATIONOBJECT2@@@Z
    static long WaitForSynchronizationObject2CB(void *, _D3DDDICB_WAITFORSYNCHRONIZATIONOBJECT2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSynchronizationObjectCB@CDevice@NDXGI@@KAJPEAXPEBU_D3DDDICB_WAITFORSYNCHRONIZATIONOBJECT@@@Z
    static long WaitForSynchronizationObjectCB(void *, _D3DDDICB_WAITFORSYNCHRONIZATIONOBJECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSynchronizationObjectFromCpuCB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDICB_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z
    static long WaitForSynchronizationObjectFromCpuCB(void *, D3DDDICB_WAITFORSYNCHRONIZATIONOBJECTFROMCPU const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSynchronizationObjectFromGpuCB@CDevice@NDXGI@@KAJPEAXPEBUD3DDDICB_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@@Z
    static long WaitForSynchronizationObjectFromGpuCB(void *, D3DDDICB_WAITFORSYNCHRONIZATIONOBJECTFROMGPU const *);
};
} // namespace NDXGI
