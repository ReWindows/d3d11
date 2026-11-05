#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2826 member(s).
class CContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonCommandList@CContext@@QEAAXXZ
    void AbandonCommandList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireDevCtxIfaceNoSync@CContext@@QEAAPEBUID3D11DeviceContext5Vtbl@CIface@@_N@Z
    ::CIface::ID3D11DeviceContext5Vtbl const * AcquireDevCtxIfaceNoSync(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireResource@CContext@@QEAA_NPEAUCLS@?$CResource@UID3D11Resource@@@@I@Z
    bool AcquireResource(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireResourceWithGuard@CContext@@QEAAPEBUtagRECT@@PEAUCLS@?$CResource@UID3D11Resource@@@@@Z
    tagRECT const * AcquireResourceWithGuard(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireResourceWithMaskAndGuard@CContext@@QEAAPEBUtagRECT@@PEAUCLS@?$CResource@UID3D11Resource@@@@IPEA_N@Z
    tagRECT const * AcquireResourceWithMaskAndGuard(WindissectOpaque *, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDefaultsCLS@CContext@@QEAAXXZ
    void AllocateDefaultsCLS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginEvent@CContext@@UEAAHPEBG@Z
    virtual int BeginEvent(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrackedWorkload@CContext@@UEAAXPEAUID3D11TrackedWorkload@@@Z
    virtual void BeginTrackedWorkload(ID3D11TrackedWorkload *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContext@@QEAA@AEBUTConstructorArgs@0@@Z
    CContext(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCryptoSessionStatus@CContext@@UEAAJPEAUID3D11CryptoSession@@PEAW4D3D11_CRYPTO_SESSION_STATUS@@@Z
    virtual long CheckCryptoSessionStatus(ID3D11CryptoSession *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteContextRemoval@CContext@@QEAAX_N@Z
    void CompleteContextRemoval(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDeviceRemoval@CContext@@QEAAJ_N0@Z
    long CompleteDeviceRemoval(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureAuthenticatedChannel@CContext@@UEAAJPEAUID3D11AuthenticatedChannel@@IPEBXPEAUD3D11_AUTHENTICATED_CONFIGURE_OUTPUT@@@Z
    virtual long ConfigureAuthenticatedChannel(ID3D11AuthenticatedChannel *, unsigned int, void const *, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreResourceAcquireSync@CContext@@UEAAXPEAUIDXGIResourceInternal@@PEAT_D3D11_KEYED_MUTEX_PRIVATE_DATA@@@Z
    virtual void CoreResourceAcquireSync(IDXGIResourceInternal *, _D3D11_KEYED_MUTEX_PRIVATE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreResourceReleaseSync@CContext@@UEAAXPEAUIDXGIResourceInternal@@PEAT_D3D11_KEYED_MUTEX_PRIVATE_DATA@@@Z
    virtual void CoreResourceReleaseSync(IDXGIResourceInternal *, _D3D11_KEYED_MUTEX_PRIVATE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_AbandonCommandList_DR@CContext@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_AbandonCommandList_DR(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_AssignDebugBinary_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADER@@IPEBX@Z
    static void DDI_AssignDebugBinary_DR(D3D10DDI_HDEVICE, D3D10DDI_HSHADER, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CSSetUnorderedAccessViews_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D11DDI_HUNORDEREDACCESSVIEW@@PEBI@Z
    static void DDI_CSSetUnorderedAccessViews_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D11DDI_HUNORDEREDACCESSVIEW const *, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcDeferredContextHandleSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAX@Z
    static uint64_t DDI_CalcDeferredContextHandleSize_DR(D3D10DDI_HDEVICE, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateAuthenticatedChannelSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL@@@Z
    static uint64_t DDI_CalcPrivateAuthenticatedChannelSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateBlendStateSize11_1_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1_DDI_BLEND_DESC@@@Z
    static uint64_t DDI_CalcPrivateBlendStateSize11_1_DR(D3D10DDI_HDEVICE, D3D11_1_DDI_BLEND_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateBlendStateSize1_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10_1_DDI_BLEND_DESC@@@Z
    static uint64_t DDI_CalcPrivateBlendStateSize1_DR(D3D10DDI_HDEVICE, D3D10_1_DDI_BLEND_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateBlendStateSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_BLEND_DESC@@@Z
    static uint64_t DDI_CalcPrivateBlendStateSize_DR(D3D10DDI_HDEVICE, D3D10_DDI_BLEND_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateCommandListSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATECOMMANDLIST@@@Z
    static uint64_t DDI_CalcPrivateCommandListSize_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATECOMMANDLIST const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateCryptoSessionSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATECRYPTOSESSION@@@Z
    static uint64_t DDI_CalcPrivateCryptoSessionSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATECRYPTOSESSION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateDeferredContextSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CALCPRIVATEDEFERREDCONTEXTSIZE@@@Z
    static uint64_t DDI_CalcPrivateDeferredContextSize_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CALCPRIVATEDEFERREDCONTEXTSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateDepthStencilStateSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_DEPTH_STENCIL_DESC@@@Z
    static uint64_t DDI_CalcPrivateDepthStencilStateSize_DR(D3D10DDI_HDEVICE, D3D10_DDI_DEPTH_STENCIL_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateDepthStencilViewSize11_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEDEPTHSTENCILVIEW@@@Z
    static uint64_t DDI_CalcPrivateDepthStencilViewSize11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEDEPTHSTENCILVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateDepthStencilViewSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEDEPTHSTENCILVIEW@@@Z
    static uint64_t DDI_CalcPrivateDepthStencilViewSize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEDEPTHSTENCILVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateElementLayoutSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEELEMENTLAYOUT@@@Z
    static uint64_t DDI_CalcPrivateElementLayoutSize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEELEMENTLAYOUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateGeometryShaderWithStreamOutputSize11_1_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static uint64_t DDI_CalcPrivateGeometryShaderWithStreamOutputSize11_1_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateGeometryShaderWithStreamOutputSize11_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static uint64_t DDI_CalcPrivateGeometryShaderWithStreamOutputSize11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateGeometryShaderWithStreamOutputSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static uint64_t DDI_CalcPrivateGeometryShaderWithStreamOutputSize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateOpenedResourceSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_OPENRESOURCE@@@Z
    static uint64_t DDI_CalcPrivateOpenedResourceSize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_OPENRESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateQuerySizeWDDM2_0_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATEQUERY@@@Z
    static uint64_t DDI_CalcPrivateQuerySizeWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATEQUERY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateQuerySize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEQUERY@@@Z
    static uint64_t DDI_CalcPrivateQuerySize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEQUERY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateRasterizerStateSize11_1_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1_DDI_RASTERIZER_DESC@@@Z
    static uint64_t DDI_CalcPrivateRasterizerStateSize11_1_DR(D3D10DDI_HDEVICE, D3D11_1_DDI_RASTERIZER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateRasterizerStateSizeWDDM2_0_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDI_RASTERIZER_DESC@@@Z
    static uint64_t DDI_CalcPrivateRasterizerStateSizeWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDI_RASTERIZER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateRasterizerStateSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_RASTERIZER_DESC@@@Z
    static uint64_t DDI_CalcPrivateRasterizerStateSize_DR(D3D10DDI_HDEVICE, D3D10_DDI_RASTERIZER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateRenderTargetViewSizeWDDM2_0_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW@@@Z
    static uint64_t DDI_CalcPrivateRenderTargetViewSizeWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateRenderTargetViewSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATERENDERTARGETVIEW@@@Z
    static uint64_t DDI_CalcPrivateRenderTargetViewSize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATERENDERTARGETVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateResourceSize11_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATERESOURCE@@@Z
    static uint64_t DDI_CalcPrivateResourceSize11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATERESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateResourceSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATERESOURCE@@@Z
    static uint64_t DDI_CalcPrivateResourceSize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATERESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateSamplerSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_SAMPLER_DESC@@@Z
    static uint64_t DDI_CalcPrivateSamplerSize_DR(D3D10DDI_HDEVICE, D3D10_DDI_SAMPLER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateShaderCacheSessionSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@@Z
    static uint64_t DDI_CalcPrivateShaderCacheSessionSize_DR(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateShaderResourceViewSize11_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATESHADERRESOURCEVIEW@@@Z
    static uint64_t DDI_CalcPrivateShaderResourceViewSize11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATESHADERRESOURCEVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateShaderResourceViewSize1_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10_1DDIARG_CREATESHADERRESOURCEVIEW@@@Z
    static uint64_t DDI_CalcPrivateShaderResourceViewSize1_DR(D3D10DDI_HDEVICE, D3D10_1DDIARG_CREATESHADERRESOURCEVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateShaderResourceViewSizeWDDM2_0_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW@@@Z
    static uint64_t DDI_CalcPrivateShaderResourceViewSizeWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateShaderResourceViewSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATESHADERRESOURCEVIEW@@@Z
    static uint64_t DDI_CalcPrivateShaderResourceViewSize_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATESHADERRESOURCEVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateShaderSize11_1_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBIPEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static uint64_t DDI_CalcPrivateShaderSize11_1_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateShaderSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBIPEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static uint64_t DDI_CalcPrivateShaderSize_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateTessellationShaderSize11_1_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBIPEBUD3D11_1DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static uint64_t DDI_CalcPrivateTessellationShaderSize11_1_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateTessellationShaderSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBIPEBUD3D11DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static uint64_t DDI_CalcPrivateTessellationShaderSize_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D11DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateUnorderedAccessViewSizeWDDM2_0_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW@@@Z
    static uint64_t DDI_CalcPrivateUnorderedAccessViewSizeWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateUnorderedAccessViewSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEUNORDEREDACCESSVIEW@@@Z
    static uint64_t DDI_CalcPrivateUnorderedAccessViewSize_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEUNORDEREDACCESSVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateVideoDecoderOutputViewSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW@@@Z
    static uint64_t DDI_CalcPrivateVideoDecoderOutputViewSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateVideoDecoderSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEODECODER@@@Z
    static uint64_t DDI_CalcPrivateVideoDecoderSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEODECODER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateVideoProcessorEnumSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSORENUM@@@Z
    static uint64_t DDI_CalcPrivateVideoProcessorEnumSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSORENUM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateVideoProcessorInputViewSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW@@@Z
    static uint64_t DDI_CalcPrivateVideoProcessorInputViewSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateVideoProcessorOutputViewSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW@@@Z
    static uint64_t DDI_CalcPrivateVideoProcessorOutputViewSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateVideoProcessorSize_DR@CContext@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSOR@@@Z
    static uint64_t DDI_CalcPrivateVideoProcessorSize_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckCounterInfo_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3D10DDI_COUNTER_INFO@@@Z
    static void DDI_CheckCounterInfo_DR(D3D10DDI_HDEVICE, D3D10DDI_COUNTER_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckCounter_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3D10DDI_QUERY@@PEAW4D3D10DDI_COUNTER_TYPE@@PEAIPEAD34343@Z
    static void DDI_CheckCounter_DR(D3D10DDI_HDEVICE, int, int *, unsigned int *, char *, unsigned int *, char *, unsigned int *, char *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckCryptoSessionStatus_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@PEAW4D3DWDDM2_0DDI_CRYPTO_SESSION_STATUS@@@Z
    static void DDI_CheckCryptoSessionStatus_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckDeferredContextHandleSizes_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAIPEAUD3D11DDI_HANDLESIZE@@@Z
    static void DDI_CheckDeferredContextHandleSizes_DR(D3D10DDI_HDEVICE, unsigned int *, D3D11DDI_HANDLESIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckDirectFlipSupport_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@1IPEAH@Z
    static void DDI_CheckDirectFlipSupport_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_HRESOURCE, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckFormatSupport_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4DXGI_FORMAT@@PEAI@Z
    static void DDI_CheckFormatSupport_DR(D3D10DDI_HDEVICE, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckMultisampleQualityLevelsWDDM1_3_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4DXGI_FORMAT@@IIPEAI@Z
    static void DDI_CheckMultisampleQualityLevelsWDDM1_3_DR(D3D10DDI_HDEVICE, int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckMultisampleQualityLevels_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4DXGI_FORMAT@@IPEAI@Z
    static void DDI_CheckMultisampleQualityLevels_DR(D3D10DDI_HDEVICE, int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckVideoDecoderFormat_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBU_GUID@@W4DXGI_FORMAT@@PEAH@Z
    static void DDI_CheckVideoDecoderFormat_DR(D3D10DDI_HDEVICE, _GUID const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckVideoProcessorFormatConversion_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@PEAUD3DWDDM2_0DDI_CHECK_VIDEO_PROCESSOR_FORMAT_CONVERSION@@@Z
    static void DDI_CheckVideoProcessorFormatConversion_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, D3DWDDM2_0DDI_CHECK_VIDEO_PROCESSOR_FORMAT_CONVERSION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckVideoProcessorFormat_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@W4DXGI_FORMAT@@PEAI@Z
    static void DDI_CheckVideoProcessorFormat_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearDepthStencilView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILVIEW@@IME@Z
    static void DDI_ClearDepthStencilView_DR(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILVIEW, unsigned int, float, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearRenderTargetView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRENDERTARGETVIEW@@QEAM@Z
    static void DDI_ClearRenderTargetView_DR(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW, float * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearUnorderedAccessViewFloat_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HUNORDEREDACCESSVIEW@@QEBM@Z
    static void DDI_ClearUnorderedAccessViewFloat_DR(D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW, float const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearUnorderedAccessViewUint_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HUNORDEREDACCESSVIEW@@QEBI@Z
    static void DDI_ClearUnorderedAccessViewUint_DR(D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW, unsigned int const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAXQEBMPEBUtagRECT@@I@Z
    static void DDI_ClearView_DR(D3D10DDI_HDEVICE, int, void *, float const * const, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CommandListExecute_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_CommandListExecute_DR(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ConfigureAuthenticatedChannel_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HAUTHCHANNEL@@IPEBXPEAUD3D11_1DDI_AUTHENTICATED_CONFIGURE_OUTPUT@@@Z
    static long DDI_ConfigureAuthenticatedChannel_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HAUTHCHANNEL, unsigned int, void const *, D3D11_1DDI_AUTHENTICATED_CONFIGURE_OUTPUT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CopyStructureCount_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IUD3D11DDI_HUNORDEREDACCESSVIEW@@@Z
    static void DDI_CopyStructureCount_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D11DDI_HUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CopyTileMappings_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@12PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@I@Z
    static void DDI_CopyTileMappings_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CopyTiles_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@1_KI@Z
    static void DDI_CopyTiles_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, D3D10DDI_HRESOURCE, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateAuthenticatedChannel_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEAUD3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL@@UD3D11_1DDI_HAUTHCHANNEL@@UD3D11_1DDI_HRTAUTHCHANNEL@@@Z
    static long DDI_CreateAuthenticatedChannel_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL *, D3D11_1DDI_HAUTHCHANNEL, D3D11_1DDI_HRTAUTHCHANNEL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateBlendState11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1_DDI_BLEND_DESC@@UD3D10DDI_HBLENDSTATE@@UD3D10DDI_HRTBLENDSTATE@@@Z
    static void DDI_CreateBlendState11_1_DR(D3D10DDI_HDEVICE, D3D11_1_DDI_BLEND_DESC const *, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateBlendState1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_1_DDI_BLEND_DESC@@UD3D10DDI_HBLENDSTATE@@UD3D10DDI_HRTBLENDSTATE@@@Z
    static void DDI_CreateBlendState1_DR(D3D10DDI_HDEVICE, D3D10_1_DDI_BLEND_DESC const *, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateBlendState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_BLEND_DESC@@UD3D10DDI_HBLENDSTATE@@UD3D10DDI_HRTBLENDSTATE@@@Z
    static void DDI_CreateBlendState_DR(D3D10DDI_HDEVICE, D3D10_DDI_BLEND_DESC const *, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateCommandList_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATECOMMANDLIST@@UD3D11DDI_HCOMMANDLIST@@UD3D11DDI_HRTCOMMANDLIST@@@Z
    static void DDI_CreateCommandList_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATECOMMANDLIST const *, D3D11DDI_HCOMMANDLIST, D3D11DDI_HRTCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateComputeShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@@Z
    static void DDI_CreateComputeShader_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateCryptoSession_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATECRYPTOSESSION@@UD3D11_1DDI_HCRYPTOSESSION@@UD3D11_1DDI_HRTCRYPTOSESSION@@@Z
    static long DDI_CreateCryptoSession_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATECRYPTOSESSION const *, D3D11_1DDI_HCRYPTOSESSION, D3D11_1DDI_HRTCRYPTOSESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDeferredContext_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEDEFERREDCONTEXT@@@Z
    static void DDI_CreateDeferredContext_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEDEFERREDCONTEXT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDepthStencilState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_DEPTH_STENCIL_DESC@@UD3D10DDI_HDEPTHSTENCILSTATE@@UD3D10DDI_HRTDEPTHSTENCILSTATE@@@Z
    static void DDI_CreateDepthStencilState_DR(D3D10DDI_HDEVICE, D3D10_DDI_DEPTH_STENCIL_DESC const *, D3D10DDI_HDEPTHSTENCILSTATE, D3D10DDI_HRTDEPTHSTENCILSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDepthStencilView11_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEDEPTHSTENCILVIEW@@UD3D10DDI_HDEPTHSTENCILVIEW@@UD3D10DDI_HRTDEPTHSTENCILVIEW@@@Z
    static void DDI_CreateDepthStencilView11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEDEPTHSTENCILVIEW const *, D3D10DDI_HDEPTHSTENCILVIEW, D3D10DDI_HRTDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDepthStencilView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEDEPTHSTENCILVIEW@@UD3D10DDI_HDEPTHSTENCILVIEW@@UD3D10DDI_HRTDEPTHSTENCILVIEW@@@Z
    static void DDI_CreateDepthStencilView_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEDEPTHSTENCILVIEW const *, D3D10DDI_HDEPTHSTENCILVIEW, D3D10DDI_HRTDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDomainShader11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateDomainShader11_1_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDomainShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateDomainShader_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateElementLayout_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEELEMENTLAYOUT@@UD3D10DDI_HELEMENTLAYOUT@@UD3D10DDI_HRTELEMENTLAYOUT@@@Z
    static void DDI_CreateElementLayout_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEELEMENTLAYOUT const *, D3D10DDI_HELEMENTLAYOUT, D3D10DDI_HRTELEMENTLAYOUT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShader11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShader11_1_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShaderWithStreamOutput11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@UD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShaderWithStreamOutput11_1_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShaderWithStreamOutput11_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@UD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShaderWithStreamOutput11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShaderWithStreamOutput_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@UD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShaderWithStreamOutput_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShader_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateHullShader11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateHullShader11_1_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateHullShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateHullShader_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreatePixelShader11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreatePixelShader11_1_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreatePixelShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreatePixelShader_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateQueryWDDM2_0_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATEQUERY@@UD3D10DDI_HQUERY@@UD3D10DDI_HRTQUERY@@@Z
    static void DDI_CreateQueryWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATEQUERY const *, D3D10DDI_HQUERY, D3D10DDI_HRTQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateQuery_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEQUERY@@UD3D10DDI_HQUERY@@UD3D10DDI_HRTQUERY@@@Z
    static void DDI_CreateQuery_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEQUERY const *, D3D10DDI_HQUERY, D3D10DDI_HRTQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRasterizerState11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1_DDI_RASTERIZER_DESC@@UD3D10DDI_HRASTERIZERSTATE@@UD3D10DDI_HRTRASTERIZERSTATE@@@Z
    static void DDI_CreateRasterizerState11_1_DR(D3D10DDI_HDEVICE, D3D11_1_DDI_RASTERIZER_DESC const *, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRasterizerStateWDDM2_0_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDI_RASTERIZER_DESC@@UD3D10DDI_HRASTERIZERSTATE@@UD3D10DDI_HRTRASTERIZERSTATE@@@Z
    static void DDI_CreateRasterizerStateWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDI_RASTERIZER_DESC const *, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRasterizerState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_RASTERIZER_DESC@@UD3D10DDI_HRASTERIZERSTATE@@UD3D10DDI_HRTRASTERIZERSTATE@@@Z
    static void DDI_CreateRasterizerState_DR(D3D10DDI_HDEVICE, D3D10_DDI_RASTERIZER_DESC const *, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRenderTargetViewWDDM2_0_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW@@UD3D10DDI_HRENDERTARGETVIEW@@UD3D10DDI_HRTRENDERTARGETVIEW@@@Z
    static void DDI_CreateRenderTargetViewWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW const *, D3D10DDI_HRENDERTARGETVIEW, D3D10DDI_HRTRENDERTARGETVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRenderTargetView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATERENDERTARGETVIEW@@UD3D10DDI_HRENDERTARGETVIEW@@UD3D10DDI_HRTRENDERTARGETVIEW@@@Z
    static void DDI_CreateRenderTargetView_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATERENDERTARGETVIEW const *, D3D10DDI_HRENDERTARGETVIEW, D3D10DDI_HRTRENDERTARGETVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateResource11_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATERESOURCE@@UD3D10DDI_HRESOURCE@@UD3D10DDI_HRTRESOURCE@@@Z
    static void DDI_CreateResource11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATERESOURCE const *, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateResource_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATERESOURCE@@UD3D10DDI_HRESOURCE@@UD3D10DDI_HRTRESOURCE@@@Z
    static void DDI_CreateResource_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATERESOURCE const *, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateSampler_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_SAMPLER_DESC@@UD3D10DDI_HSAMPLER@@UD3D10DDI_HRTSAMPLER@@@Z
    static void DDI_CreateSampler_DR(D3D10DDI_HDEVICE, D3D10_DDI_SAMPLER_DESC const *, D3D10DDI_HSAMPLER, D3D10DDI_HRTSAMPLER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderCacheSession_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3DWDDM2_2DDI_HCACHESESSION@@UD3DWDDM2_2DDI_HRTCACHESESSION@@@Z
    static void DDI_CreateShaderCacheSession_DR(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_HCACHESESSION, D3DWDDM2_2DDI_HRTCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceView11_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceView11_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceView1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_1DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceView1_DR(D3D10DDI_HDEVICE, D3D10_1DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceViewWDDM2_0_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceViewWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceView_DR(D3D10DDI_HDEVICE, D3D10DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateUnorderedAccessViewWDDM2_0_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW@@UD3D11DDI_HUNORDEREDACCESSVIEW@@UD3D11DDI_HRTUNORDEREDACCESSVIEW@@@Z
    static void DDI_CreateUnorderedAccessViewWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW const *, D3D11DDI_HUNORDEREDACCESSVIEW, D3D11DDI_HRTUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateUnorderedAccessView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEUNORDEREDACCESSVIEW@@UD3D11DDI_HUNORDEREDACCESSVIEW@@UD3D11DDI_HRTUNORDEREDACCESSVIEW@@@Z
    static void DDI_CreateUnorderedAccessView_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEUNORDEREDACCESSVIEW const *, D3D11DDI_HUNORDEREDACCESSVIEW, D3D11DDI_HRTUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVertexShader11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateVertexShader11_1_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVertexShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateVertexShader_DR(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVideoDecoderOutputView_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW@@UD3D11_1DDI_HVIDEODECODEROUTPUTVIEW@@UD3D11_1DDI_HRTVIDEODECODEROUTPUTVIEW@@@Z
    static long DDI_CreateVideoDecoderOutputView_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW const *, D3D11_1DDI_HVIDEODECODEROUTPUTVIEW, D3D11_1DDI_HRTVIDEODECODEROUTPUTVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVideoDecoder_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEODECODER@@UD3D11_1DDI_HDECODE@@UD3D11_1DDI_HRTDECODE@@@Z
    static long DDI_CreateVideoDecoder_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEODECODER const *, D3D11_1DDI_HDECODE, D3D11_1DDI_HRTDECODE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVideoProcessorEnum_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSORENUM@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@UD3D11_1DDI_HRTVIDEOPROCESSORENUM@@@Z
    static long DDI_CreateVideoProcessorEnum_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSORENUM const *, D3D11_1DDI_HVIDEOPROCESSORENUM, D3D11_1DDI_HRTVIDEOPROCESSORENUM);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVideoProcessorInputView_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW@@UD3D11_1DDI_HVIDEOPROCESSORINPUTVIEW@@UD3D11_1DDI_HRTVIDEOPROCESSORINPUTVIEW@@@Z
    static long DDI_CreateVideoProcessorInputView_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW const *, D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW, D3D11_1DDI_HRTVIDEOPROCESSORINPUTVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVideoProcessorOutputView_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW@@UD3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW@@UD3D11_1DDI_HRTVIDEOPROCESSOROUTPUTVIEW@@@Z
    static long DDI_CreateVideoProcessorOutputView_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW const *, D3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW, D3D11_1DDI_HRTVIDEOPROCESSOROUTPUTVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVideoProcessor_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11_1DDIARG_CREATEVIDEOPROCESSOR@@UD3D11_1DDI_HVIDEOPROCESSOR@@UD3D11_1DDI_HRTVIDEOPROCESSOR@@@Z
    static long DDI_CreateVideoProcessor_DR(D3D10DDI_HDEVICE, D3D11_1DDIARG_CREATEVIDEOPROCESSOR const *, D3D11_1DDI_HVIDEOPROCESSOR, D3D11_1DDI_HRTVIDEOPROCESSOR);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CryptoSessionGetHandle_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@PEAPEAX@Z
    static long DDI_CryptoSessionGetHandle_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DecryptionBlt_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@UD3D10DDI_HRESOURCE@@2PEBUD3D11_1DDI_ENCRYPTED_BLOCK_INFO@@IPEBXI4@Z
    static void DDI_DecryptionBlt_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, D3D10DDI_HRESOURCE, D3D10DDI_HRESOURCE, D3D11_1DDI_ENCRYPTED_BLOCK_INFO const *, unsigned int, void const *, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyAuthenticatedChannel_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HAUTHCHANNEL@@@Z
    static void DDI_DestroyAuthenticatedChannel_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HAUTHCHANNEL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyBlendState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HBLENDSTATE@@@Z
    static void DDI_DestroyBlendState_DR(D3D10DDI_HDEVICE, D3D10DDI_HBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyCommandList_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_DestroyCommandList_DR(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyCryptoSession_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@@Z
    static void DDI_DestroyCryptoSession_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyDepthStencilState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILSTATE@@@Z
    static void DDI_DestroyDepthStencilState_DR(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyDepthStencilView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILVIEW@@@Z
    static void DDI_DestroyDepthStencilView_DR(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyDevice_DR@CContext@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_DestroyDevice_DR(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyElementLayout_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HELEMENTLAYOUT@@@Z
    static void DDI_DestroyElementLayout_DR(D3D10DDI_HDEVICE, D3D10DDI_HELEMENTLAYOUT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyQuery_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@@Z
    static void DDI_DestroyQuery_DR(D3D10DDI_HDEVICE, D3D10DDI_HQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyRasterizerState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRASTERIZERSTATE@@@Z
    static void DDI_DestroyRasterizerState_DR(D3D10DDI_HDEVICE, D3D10DDI_HRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyRenderTargetView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRENDERTARGETVIEW@@@Z
    static void DDI_DestroyRenderTargetView_DR(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyResource_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@@Z
    static void DDI_DestroyResource_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroySampler_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSAMPLER@@@Z
    static void DDI_DestroySampler_DR(D3D10DDI_HDEVICE, D3D10DDI_HSAMPLER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyShaderCacheSession_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3DWDDM2_2DDI_HCACHESESSION@@@Z
    static void DDI_DestroyShaderCacheSession_DR(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_HCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyShaderResourceView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADERRESOURCEVIEW@@@Z
    static void DDI_DestroyShaderResourceView_DR(D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADER@@@Z
    static void DDI_DestroyShader_DR(D3D10DDI_HDEVICE, D3D10DDI_HSHADER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyUnorderedAccessView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HUNORDEREDACCESSVIEW@@@Z
    static void DDI_DestroyUnorderedAccessView_DR(D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyVideoDecoderOutputView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEODECODEROUTPUTVIEW@@@Z
    static void DDI_DestroyVideoDecoderOutputView_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEODECODEROUTPUTVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyVideoDecoder_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@@Z
    static void DDI_DestroyVideoDecoder_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyVideoProcessorEnum_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@@Z
    static void DDI_DestroyVideoProcessorEnum_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyVideoProcessorInputView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORINPUTVIEW@@@Z
    static void DDI_DestroyVideoProcessorInputView_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyVideoProcessorOutputView_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW@@@Z
    static void DDI_DestroyVideoProcessorOutputView_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyVideoProcessor_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@@Z
    static void DDI_DestroyVideoProcessor_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Discard_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAXPEBUtagRECT@@I@Z
    static void DDI_Discard_DR(D3D10DDI_HDEVICE, int, void *, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DispatchIndirect_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_DispatchIndirect_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Dispatch_DR@CContext@@SAXUD3D10DDI_HDEVICE@@III@Z
    static void DDI_Dispatch_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawAuto_DR@CContext@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_DrawAuto_DR(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawIndexedInstancedIndirect_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_DrawIndexedInstancedIndirect_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawIndexedInstanced_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIIHI@Z
    static void DDI_DrawIndexedInstanced_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawIndexed_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIH@Z
    static void DDI_DrawIndexed_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawInstancedIndirect_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_DrawInstancedIndirect_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawInstanced_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIII@Z
    static void DDI_DrawInstanced_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Draw_DR@CContext@@SAXUD3D10DDI_HDEVICE@@II@Z
    static void DDI_Draw_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_EncryptionBlt_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@UD3D10DDI_HRESOURCE@@2IPEBX@Z
    static void DDI_EncryptionBlt_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, D3D10DDI_HRESOURCE, D3D10DDI_HRESOURCE, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_FinishSessionKeyRefresh_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@@Z
    static void DDI_FinishSessionKeyRefresh_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Flush11_1_DR@CContext@@SAHUD3D10DDI_HDEVICE@@I@Z
    static int DDI_Flush11_1_DR(D3D10DDI_HDEVICE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_FlushWDDM2_0_DR@CContext@@SAHUD3D10DDI_HDEVICE@@II@Z
    static int DDI_FlushWDDM2_0_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Flush_DR@CContext@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_Flush_DR(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GenerateMips_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADERRESOURCEVIEW@@@Z
    static void DDI_GenerateMips_DR(D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetCaptureHandle_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAU_D3D11_1DDI_GETCAPTUREHANDLEDATA@@@Z
    static void DDI_GetCaptureHandle_DR(D3D10DDI_HDEVICE, _D3D11_1DDI_GETCAPTUREHANDLEDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetCertificateSize_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1DDI_CERTIFICATE_INFO@@PEAI@Z
    static void DDI_GetCertificateSize_DR(D3D10DDI_HDEVICE, D3D11_1DDI_CERTIFICATE_INFO const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetCertificate_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1DDI_CERTIFICATE_INFO@@IPEAE@Z
    static void DDI_GetCertificate_DR(D3D10DDI_HDEVICE, D3D11_1DDI_CERTIFICATE_INFO const *, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetContentProtectionCaps_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBU_GUID@@1PEAUD3D11_1DDI_VIDEO_CONTENT_PROTECTION_CAPS@@@Z
    static long DDI_GetContentProtectionCaps_DR(D3D10DDI_HDEVICE, _GUID const *, _GUID const *, D3D11_1DDI_VIDEO_CONTENT_PROTECTION_CAPS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetCryptoKeyExchangeType_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBU_GUID@@1IPEAU3@@Z
    static long DDI_GetCryptoKeyExchangeType_DR(D3D10DDI_HDEVICE, _GUID const *, _GUID const *, unsigned int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetCryptoSessionPrivateDataSize_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBU_GUID@@11PEAI2@Z
    static void DDI_GetCryptoSessionPrivateDataSize_DR(D3D10DDI_HDEVICE, _GUID const *, _GUID const *, _GUID const *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetDataForNewHardwareKey_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@IPEBXPEA_K@Z
    static long DDI_GetDataForNewHardwareKey_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, unsigned int, void const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetEncryptionBltKey_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@IPEAX@Z
    static void DDI_GetEncryptionBltKey_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetMipPacking_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEAI2@Z
    static void DDI_GetMipPacking_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetResourceLayoutM2_2_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEAIPEAW4D3DWDDM2_0DDI_TEXTURE_LAYOUT@@PEAUD3DWDDM2_0DDI_SUBRESOURCE_LAYOUT@@@Z
    static void DDI_GetResourceLayoutM2_2_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int *, int *, D3DWDDM2_0DDI_SUBRESOURCE_LAYOUT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetResourceLayout_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEAIPEAW4D3DWDDM2_0DDI_TEXTURE_LAYOUT@@2PEAUD3DWDDM2_0DDI_SUBRESOURCE_LAYOUT@@@Z
    static void DDI_GetResourceLayout_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int *, int *, unsigned int *, D3DWDDM2_0DDI_SUBRESOURCE_LAYOUT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoDecoderBufferInfo_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1DDI_VIDEO_DECODER_DESC@@IPEAUD3D11_1DDI_VIDEO_DECODER_BUFFER_INFO@@@Z
    static void DDI_GetVideoDecoderBufferInfo_DR(D3D10DDI_HDEVICE, D3D11_1DDI_VIDEO_DECODER_DESC const *, unsigned int, D3D11_1DDI_VIDEO_DECODER_BUFFER_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoDecoderBufferTypeCount_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1DDI_VIDEO_DECODER_DESC@@PEAI@Z
    static void DDI_GetVideoDecoderBufferTypeCount_DR(D3D10DDI_HDEVICE, D3D11_1DDI_VIDEO_DECODER_DESC const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoDecoderConfigCount_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1DDI_VIDEO_DECODER_DESC@@PEAI@Z
    static void DDI_GetVideoDecoderConfigCount_DR(D3D10DDI_HDEVICE, D3D11_1DDI_VIDEO_DECODER_DESC const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoDecoderConfig_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1DDI_VIDEO_DECODER_DESC@@IPEAUD3D11_1DDI_VIDEO_DECODER_CONFIG@@@Z
    static void DDI_GetVideoDecoderConfig_DR(D3D10DDI_HDEVICE, D3D11_1DDI_VIDEO_DECODER_DESC const *, unsigned int, D3D11_1DDI_VIDEO_DECODER_CONFIG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoDecoderProfileCount_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAI@Z
    static void DDI_GetVideoDecoderProfileCount_DR(D3D10DDI_HDEVICE, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoDecoderProfile_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IPEAU_GUID@@@Z
    static void DDI_GetVideoDecoderProfile_DR(D3D10DDI_HDEVICE, unsigned int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoProcessorCaps_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@PEAUD3D11_1DDI_VIDEO_PROCESSOR_CAPS@@@Z
    static void DDI_GetVideoProcessorCaps_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, D3D11_1DDI_VIDEO_PROCESSOR_CAPS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoProcessorCustomRate_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@IIPEAUD3D11_1DDI_VIDEO_PROCESSOR_CUSTOM_RATE@@@Z
    static void DDI_GetVideoProcessorCustomRate_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, unsigned int, unsigned int, D3D11_1DDI_VIDEO_PROCESSOR_CUSTOM_RATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoProcessorFilterRange_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@W4D3D11_1DDI_VIDEO_PROCESSOR_FILTER@@PEAUD3D11_1DDI_VIDEO_PROCESSOR_FILTER_RANGE@@@Z
    static void DDI_GetVideoProcessorFilterRange_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, int, D3D11_1DDI_VIDEO_PROCESSOR_FILTER_RANGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GetVideoProcessorRateConversionCaps_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORENUM@@IPEAUD3D11_1DDI_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS@@@Z
    static void DDI_GetVideoProcessorRateConversionCaps_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, unsigned int, D3D11_1DDI_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetIndexBuffer_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@W4DXGI_FORMAT@@I@Z
    static void DDI_IaSetIndexBuffer_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetIndexBuffer_NoOp@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@W4DXGI_FORMAT@@I@Z
    static void DDI_IaSetIndexBuffer_NoOp(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetInputLayout_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HELEMENTLAYOUT@@@Z
    static void DDI_IaSetInputLayout_DR(D3D10DDI_HDEVICE, D3D10DDI_HELEMENTLAYOUT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetPrimitiveTopology_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3D10_DDI_PRIMITIVE_TOPOLOGY@@@Z
    static void DDI_IaSetPrimitiveTopology_DR(D3D10DDI_HDEVICE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetTopology_NoOp@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3D10_DDI_PRIMITIVE_TOPOLOGY@@@Z
    static void DDI_IaSetTopology_NoOp(D3D10DDI_HDEVICE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetVertexBuffers_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HRESOURCE@@PEBI2@Z
    static void DDI_IaSetVertexBuffers_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HRESOURCE const *, unsigned int const *, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_JpegDecode_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_DECODE_JPEG@@UD3D10DDI_HRESOURCE@@PEBIPEBUD3D10_DDI_BOX@@I2II@Z
    static void DDI_JpegDecode_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_DECODE_JPEG const *, D3D10DDI_HRESOURCE, unsigned int const *, D3D10_DDI_BOX const *, unsigned int, D3D10DDI_HRESOURCE, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_JpegEncode_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_ENCODE_JPEG@@UD3D10DDI_HRESOURCE@@I2I@Z
    static void DDI_JpegEncode_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_ENCODE_JPEG const *, D3D10DDI_HRESOURCE, unsigned int, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_NegotiateAuthenticatedChannelKeyExchange_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HAUTHCHANNEL@@IPEAX@Z
    static long DDI_NegotiateAuthenticatedChannelKeyExchange_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HAUTHCHANNEL, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_NegotiateCryptoSessionKeyExchangeWDDM2_4_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@W4D3DWDDM2_4DDI_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS@@IPEAE@Z
    static long DDI_NegotiateCryptoSessionKeyExchangeWDDM2_4_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_NegotiateCryptoSessionKeyExchange_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@IPEAE@Z
    static long DDI_NegotiateCryptoSessionKeyExchange_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_OpenResource_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_OPENRESOURCE@@UD3D10DDI_HRESOURCE@@UD3D10DDI_HRTRESOURCE@@@Z
    static void DDI_OpenResource_DR(D3D10DDI_HDEVICE, D3D10DDIARG_OPENRESOURCE const *, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_PrepareScanoutTransform_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IIIPEAUtagRECT@@@Z
    static void DDI_PrepareScanoutTransform_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int, unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryAuthenticatedChannel_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HAUTHCHANNEL@@IPEBXIPEAX@Z
    static long DDI_QueryAuthenticatedChannel_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HAUTHCHANNEL, unsigned int, void const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryBegin_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@@Z
    static void DDI_QueryBegin_DR(D3D10DDI_HDEVICE, D3D10DDI_HQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryEnd_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@@Z
    static void DDI_QueryEnd_DR(D3D10DDI_HDEVICE, D3D10DDI_HQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryGetData_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@PEAXII@Z
    static void DDI_QueryGetData_DR(D3D10DDI_HDEVICE, D3D10DDI_HQUERY, void *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryScanoutCaps_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IIIPEAW4D3DWDDM2_6DDI_SCANOUT_FLAGS@@@Z
    static void DDI_QueryScanoutCaps_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryVideoCapabilities_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY@@IPEAX@Z
    static void DDI_QueryVideoCapabilities_DR(D3D10DDI_HDEVICE, int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RecycleCommandList_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_RecycleCommandList_DR(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RecycleCreateCommandList_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATECOMMANDLIST@@UD3D11DDI_HCOMMANDLIST@@UD3D11DDI_HRTCOMMANDLIST@@@Z
    static long DDI_RecycleCreateCommandList_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATECOMMANDLIST const *, D3D11DDI_HCOMMANDLIST, D3D11DDI_HRTCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RecycleCreateDeferredContext_DR@CContext@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEDEFERREDCONTEXT@@@Z
    static long DDI_RecycleCreateDeferredContext_DR(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEDEFERREDCONTEXT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3D11_1DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs11_1_DR(D3D10DDI_HDEVICE, D3D11_1DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs11_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3D11DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs11_DR(D3D10DDI_HDEVICE, D3D11DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3D10_1DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs1_DR(D3D10DDI_HDEVICE, D3D10_1DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM1_3_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM1_3DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM1_3_DR(D3D10DDI_HDEVICE, D3DWDDM1_3DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_0M2_2_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_0M2_2DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_0M2_2_DR(D3D10DDI_HDEVICE, D3DWDDM2_0M2_2DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_0_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_0DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_0_DR(D3D10DDI_HDEVICE, D3DWDDM2_0DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_1DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_1_DR(D3D10DDI_HDEVICE, D3DWDDM2_1DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_2_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_2DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_2_DR(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_6_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_6DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_6_DR(D3D10DDI_HDEVICE, D3DWDDM2_6DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEAUD3D10DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs_DR(D3D10DDI_HDEVICE, D3D10DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResizeTilePool_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@_K@Z
    static void DDI_ResizeTilePool_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceCopyRegion11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IIII1IPEBUD3D10_DDI_BOX@@I@Z
    static void DDI_ResourceCopyRegion11_1_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int, unsigned int, unsigned int, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceCopyRegion_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IIII1IPEBUD3D10_DDI_BOX@@@Z
    static void DDI_ResourceCopyRegion_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int, unsigned int, unsigned int, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceCopy_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@1@Z
    static void DDI_ResourceCopy_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceIsStagingBusy_DR@CContext@@SAHUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@@Z
    static int DDI_ResourceIsStagingBusy_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceMap_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IW4D3D10_DDI_MAP@@IPEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void DDI_ResourceMap_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, int, unsigned int, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceReadAfterWriteHazard_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@@Z
    static void DDI_ResourceReadAfterWriteHazard_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceResolveSubresource_Copy@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I1IW4DXGI_FORMAT@@@Z
    static void DDI_ResourceResolveSubresource_Copy(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10DDI_HRESOURCE, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceResolveSubresource_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I1IW4DXGI_FORMAT@@@Z
    static void DDI_ResourceResolveSubresource_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10DDI_HRESOURCE, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceUnmap_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_ResourceUnmap_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceUpdateSubresourceUP11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXIII@Z
    static void DDI_ResourceUpdateSubresourceUP11_1_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceUpdateSubresourceUP_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXII@Z
    static void DDI_ResourceUpdateSubresourceUP_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SOSetTargets_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HRESOURCE@@PEBI@Z
    static void DDI_SOSetTargets_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HRESOURCE const *, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetBlendState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HBLENDSTATE@@QEBMI@Z
    static void DDI_SetBlendState_DR(D3D10DDI_HDEVICE, D3D10DDI_HBLENDSTATE, float const * const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetConstantBuffers11_1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HRESOURCE@@PEBI2@Z
    static void DDI_SetConstantBuffers11_1_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HRESOURCE const *, unsigned int const *, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetConstantBuffers_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HRESOURCE@@@Z
    static void DDI_SetConstantBuffers_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HRESOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetDepthStencilState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILSTATE@@I@Z
    static void DDI_SetDepthStencilState_DR(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILSTATE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetHardwareProtectionState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@H@Z
    static void DDI_SetHardwareProtectionState_DR(D3D10DDI_HDEVICE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetHardwareProtection_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@H@Z
    static void DDI_SetHardwareProtection_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetInputLayout_NoOp@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HELEMENTLAYOUT@@@Z
    static void DDI_SetInputLayout_NoOp(D3D10DDI_HDEVICE, D3D10DDI_HELEMENTLAYOUT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetMarkerMode_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3DWDDM1_3DDI_MARKER_TYPE@@I@Z
    static void DDI_SetMarkerMode_DR(D3D10DDI_HDEVICE, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetMarker_DR@CContext@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_SetMarker_DR(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetPredication_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@H@Z
    static void DDI_SetPredication_DR(D3D10DDI_HDEVICE, D3D10DDI_HQUERY, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetRasterizerState_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRASTERIZERSTATE@@@Z
    static void DDI_SetRasterizerState_DR(D3D10DDI_HDEVICE, D3D10DDI_HRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetRasterizerState_NoOp@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRASTERIZERSTATE@@@Z
    static void DDI_SetRasterizerState_NoOp(D3D10DDI_HDEVICE, D3D10DDI_HRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetRenderTargets11_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDI_HRENDERTARGETVIEW@@IIUD3D10DDI_HDEPTHSTENCILVIEW@@PEBUD3D11DDI_HUNORDEREDACCESSVIEW@@PEBIIIII@Z
    static void DDI_SetRenderTargets11_DR(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW const *, unsigned int, unsigned int, D3D10DDI_HDEPTHSTENCILVIEW, D3D11DDI_HUNORDEREDACCESSVIEW const *, unsigned int const *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetRenderTargets_DR@CContext@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDI_HRENDERTARGETVIEW@@IIUD3D10DDI_HDEPTHSTENCILVIEW@@@Z
    static void DDI_SetRenderTargets_DR(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW const *, unsigned int, unsigned int, D3D10DDI_HDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetResourceMinLOD_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@M@Z
    static void DDI_SetResourceMinLOD_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetSamplers_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HSAMPLER@@@Z
    static void DDI_SetSamplers_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HSAMPLER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetScissorRects_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUtagRECT@@@Z
    static void DDI_SetScissorRects_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetShaderCacheSession_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3DWDDM2_2DDI_HCACHESESSION@@@Z
    static void DDI_SetShaderCacheSession_DR(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_HCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetShaderResources_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HSHADERRESOURCEVIEW@@@Z
    static void DDI_SetShaderResources_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HSHADERRESOURCEVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetShaderWithIfaces_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADER@@IPEBIPEBUD3D11DDIARG_POINTERDATA@@@Z
    static void DDI_SetShaderWithIfaces_DR(D3D10DDI_HDEVICE, D3D10DDI_HSHADER, unsigned int, unsigned int const *, D3D11DDIARG_POINTERDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetShaderWithIfaces_NoOp@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADER@@IPEBIPEBUD3D11DDIARG_POINTERDATA@@@Z
    static void DDI_SetShaderWithIfaces_NoOp(D3D10DDI_HDEVICE, D3D10DDI_HSHADER, unsigned int, unsigned int const *, D3D11DDIARG_POINTERDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetShader_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADER@@@Z
    static void DDI_SetShader_DR(D3D10DDI_HDEVICE, D3D10DDI_HSHADER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetShader_NoOp@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADER@@@Z
    static void DDI_SetShader_NoOp(D3D10DDI_HDEVICE, D3D10DDI_HSHADER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetTextFilterSize_DR@CContext@@SAXUD3D10DDI_HDEVICE@@II@Z
    static void DDI_SetTextFilterSize_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetViewports_DR@CContext@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10_DDI_VIEWPORT@@@Z
    static void DDI_SetViewports_DR(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10_DDI_VIEWPORT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ShaderResourceViewReadAfterWriteHazard_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRESOURCE@@@Z
    static void DDI_ShaderResourceViewReadAfterWriteHazard_DR(D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_StartSessionKeyRefresh_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HCRYPTOSESSION@@IPEAX@Z
    static void DDI_StartSessionKeyRefresh_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HCRYPTOSESSION, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SyncToken_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEAX@Z
    static void DDI_SyncToken_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_TiledResourceBarrier_DR@CContext@@SAXUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAX12@Z
    static void DDI_TiledResourceBarrier_DR(D3D10DDI_HDEVICE, int, void *, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_UpdateTileMappings_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@1IPEBI44I@Z
    static void DDI_UpdateTileMappings_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, D3D10DDI_HRESOURCE, unsigned int, unsigned int const *, unsigned int const *, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_UpdateTiles_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@PEBXI@Z
    static void DDI_UpdateTiles_DR(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderBeginFrameWDDM2_4_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@PEBUD3DWDDM2_4DDIARG_VIDEODECODERBEGINFRAME@@@Z
    static long DDI_VideoDecoderBeginFrameWDDM2_4_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, D3DWDDM2_4DDIARG_VIDEODECODERBEGINFRAME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderBeginFrame_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@PEBUD3D11_1DDIARG_VIDEODECODERBEGINFRAME@@@Z
    static long DDI_VideoDecoderBeginFrame_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, D3D11_1DDIARG_VIDEODECODERBEGINFRAME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderEnableDownsampling_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@W4D3DDDI_COLOR_SPACE_TYPE@@PEBUD3D11_1DDI_VIDEO_DECODER_DESC@@2I@Z
    static long DDI_VideoDecoderEnableDownsampling_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, int, D3D11_1DDI_VIDEO_DECODER_DESC const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderEndFrame_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@@Z
    static void DDI_VideoDecoderEndFrame_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderExtension_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@PEBUD3D11_1DDIARG_VIDEODECODEREXTENSION@@@Z
    static long DDI_VideoDecoderExtension_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, D3D11_1DDIARG_VIDEODECODEREXTENSION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderGetHandle_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@PEAPEAX@Z
    static long DDI_VideoDecoderGetHandle_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderSubmitBuffers1_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@IPEBUD3DWDDM2_0DDI_VIDEO_DECODER_BUFFER_DESC1@@@Z
    static long DDI_VideoDecoderSubmitBuffers1_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, unsigned int, D3DWDDM2_0DDI_VIDEO_DECODER_BUFFER_DESC1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderSubmitBuffersWDDM2_4_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@IPEBUD3DWDDM2_4DDI_VIDEO_DECODER_BUFFER_DESC@@@Z
    static long DDI_VideoDecoderSubmitBuffersWDDM2_4_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, unsigned int, D3DWDDM2_4DDI_VIDEO_DECODER_BUFFER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderSubmitBuffers_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@IPEBUD3D11_1DDI_VIDEO_DECODER_BUFFER_DESC@@@Z
    static long DDI_VideoDecoderSubmitBuffers_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, unsigned int, D3D11_1DDI_VIDEO_DECODER_BUFFER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoDecoderUpdateDownsampling_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HDECODE@@PEBUD3D11_1DDI_VIDEO_DECODER_DESC@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z
    static long DDI_VideoDecoderUpdateDownsampling_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, D3D11_1DDI_VIDEO_DECODER_DESC const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorBlt_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@UD3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW@@IIPEBUD3D11_1DDI_VIDEO_PROCESSOR_STREAM@@@Z
    static long DDI_VideoProcessorBlt_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, D3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW, unsigned int, unsigned int, D3D11_1DDI_VIDEO_PROCESSOR_STREAM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorGetBehaviorHints_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IIW4DXGI_FORMAT@@IPEBUD3DWDDM2_0DDI_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT@@PEAI@Z
    static long DDI_VideoProcessorGetBehaviorHints_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, unsigned int, int, unsigned int, D3DWDDM2_0DDI_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorGetOutputExtension_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@PEBU_GUID@@IPEAX@Z
    static long DDI_VideoProcessorGetOutputExtension_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorGetStreamExtension_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IPEBU_GUID@@IPEAX@Z
    static long DDI_VideoProcessorGetStreamExtension_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorInputViewReadAfterWriteHazard_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSORINPUTVIEW@@UD3D10DDI_HRESOURCE@@@Z
    static void DDI_VideoProcessorInputViewReadAfterWriteHazard_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputAlphaFillMode_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@W4D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE@@I@Z
    static void DDI_VideoProcessorSetOutputAlphaFillMode_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputBackgroundColor_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@HPEBUD3D11_1DDI_VIDEO_COLOR@@@Z
    static void DDI_VideoProcessorSetOutputBackgroundColor_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int, D3D11_1DDI_VIDEO_COLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputColorSpace1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z
    static void DDI_VideoProcessorSetOutputColorSpace1_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputColorspace_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@PEBUD3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    static void DDI_VideoProcessorSetOutputColorspace_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, D3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputConstriction_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@HUtagSIZE@@@Z
    static void DDI_VideoProcessorSetOutputConstriction_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputExtension_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@PEBU_GUID@@IPEAX@Z
    static long DDI_VideoProcessorSetOutputExtension_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputHDRMetaData_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@W4_D3DDDI_HDR_METADATA_TYPE@@IPEBX@Z
    static void DDI_VideoProcessorSetOutputHDRMetaData_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputShaderUsage_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@H@Z
    static void DDI_VideoProcessorSetOutputShaderUsage_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputStereoMode_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@H@Z
    static void DDI_VideoProcessorSetOutputStereoMode_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetOutputTargetRect_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@HPEBUtagRECT@@@Z
    static void DDI_VideoProcessorSetOutputTargetRect_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamAlpha_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHM@Z
    static void DDI_VideoProcessorSetStreamAlpha_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamAutoProcessingMode_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IH@Z
    static void DDI_VideoProcessorSetStreamAutoProcessingMode_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamColorSpace1_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IW4D3DDDI_COLOR_SPACE_TYPE@@@Z
    static void DDI_VideoProcessorSetStreamColorSpace1_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamColorspace_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IPEBUD3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    static void DDI_VideoProcessorSetStreamColorspace_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, D3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamDestRect_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHPEBUtagRECT@@@Z
    static void DDI_VideoProcessorSetStreamDestRect_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamExtension_DR@CContext@@SAJUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IPEBU_GUID@@IPEAX@Z
    static long DDI_VideoProcessorSetStreamExtension_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamFilter_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IW4D3D11_1DDI_VIDEO_PROCESSOR_FILTER@@HH@Z
    static void DDI_VideoProcessorSetStreamFilter_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamFrameFormat_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IW4D3D11_1DDI_VIDEO_FRAME_FORMAT@@@Z
    static void DDI_VideoProcessorSetStreamFrameFormat_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamHDRMetaData_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IW4_D3DDDI_HDR_METADATA_TYPE@@IPEBX@Z
    static void DDI_VideoProcessorSetStreamHDRMetaData_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamLumaKey_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHMM@Z
    static void DDI_VideoProcessorSetStreamLumaKey_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamMirror_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHHH@Z
    static void DDI_VideoProcessorSetStreamMirror_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamOutputRate_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IW4D3D11_1DDI_VIDEO_PROCESSOR_OUTPUT_RATE@@HPEBUDXGI_RATIONAL@@@Z
    static void DDI_VideoProcessorSetStreamOutputRate_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, int, DXGI_RATIONAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamPalette_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IIPEBI@Z
    static void DDI_VideoProcessorSetStreamPalette_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, unsigned int, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamPixelAspectRatio_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHPEBUDXGI_RATIONAL@@2@Z
    static void DDI_VideoProcessorSetStreamPixelAspectRatio_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, DXGI_RATIONAL const *, DXGI_RATIONAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamRotation_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHW4D3D11_1DDI_VIDEO_PROCESSOR_ROTATION@@@Z
    static void DDI_VideoProcessorSetStreamRotation_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamSourceRect_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHPEBUtagRECT@@@Z
    static void DDI_VideoProcessorSetStreamSourceRect_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_VideoProcessorSetStreamStereoFormat_DR@CContext@@SAXUD3D10DDI_HDEVICE@@UD3D11_1DDI_HVIDEOPROCESSOR@@IHW4D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT@@HHW4D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FLIP_MODE@@H@Z
    static void DDI_VideoProcessorSetStreamStereoFormat_DR(D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, unsigned int, int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeJpeg@CContext@@UEAAXPEBUD3D11_DECODE_JPEG_PARAMETERS@@PEAUID3D11Resource@@PEBIPEBUD3D11_BOX@@IPEAUID3D11Buffer@@II@Z
    virtual void DecodeJpeg(D3D11_DECODE_JPEG_PARAMETERS const *, ID3D11Resource *, unsigned int const *, D3D11_BOX const *, unsigned int, ID3D11Buffer *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecoderBeginFrame@CContext@@UEAAJPEAUID3D11VideoDecoder@@PEAUID3D11VideoDecoderOutputView@@IPEBX@Z
    virtual long DecoderBeginFrame(ID3D11VideoDecoder *, ID3D11VideoDecoderOutputView *, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecoderBeginFrame1@CContext@@UEAAJPEAUID3D11VideoDecoder@@PEAUID3D11VideoDecoderOutputView@@IPEBXIPEBIPEBQEAUID3D11Buffer@@@Z
    virtual long DecoderBeginFrame1(ID3D11VideoDecoder *, ID3D11VideoDecoderOutputView *, unsigned int, void const *, unsigned int, unsigned int const *, ID3D11Buffer * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecoderEnableDownsampling@CContext@@UEAAJPEAUID3D11VideoDecoder@@W4DXGI_COLOR_SPACE_TYPE@@PEBUD3D11_VIDEO_SAMPLE_DESC@@I@Z
    virtual long DecoderEnableDownsampling(ID3D11VideoDecoder *, int, D3D11_VIDEO_SAMPLE_DESC const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecoderEndFrame@CContext@@UEAAJPEAUID3D11VideoDecoder@@@Z
    virtual long DecoderEndFrame(ID3D11VideoDecoder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecoderExtension@CContext@@UEAAJPEAUID3D11VideoDecoder@@PEBUD3D11_VIDEO_DECODER_EXTENSION@@@Z
    virtual long DecoderExtension(ID3D11VideoDecoder *, D3D11_VIDEO_DECODER_EXTENSION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecoderUpdateDownsampling@CContext@@UEAAJPEAUID3D11VideoDecoder@@PEBUD3D11_VIDEO_SAMPLE_DESC@@@Z
    virtual long DecoderUpdateDownsampling(ID3D11VideoDecoder *, D3D11_VIDEO_SAMPLE_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptionBlt@CContext@@UEAAXPEAUID3D11CryptoSession@@PEAUID3D11Texture2D@@1PEAUD3D11_ENCRYPTED_BLOCK_INFO@@IPEBXIPEAX@Z
    virtual void DecryptionBlt(ID3D11CryptoSession *, ID3D11Texture2D *, ID3D11Texture2D *, D3D11_ENCRYPTED_BLOCK_INFO *, unsigned int, void const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCLS@CContext@@QEAAXXZ
    void DeleteCLS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWrite@CContext@@QEAAX_KPEBU_EVENT_DESCRIPTOR@@@Z
    void ETWWrite(uint64_t, _EVENT_DESCRIPTOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWriteNULLCommandList@CContext@@QEAAXXZ
    void ETWWriteNULLCommandList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyOutAPIDefaults@CContext@@QEAAXXZ
    void EmptyOutAPIDefaults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyOutAllAPIAndDDIBindPoints@CContext@@QEAAXXZ
    void EmptyOutAllAPIAndDDIBindPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyOutAllDDIBindPoints@CContext@@QEAAX_N@Z
    void EmptyOutAllDDIBindPoints(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodeJpeg@CContext@@UEAAXPEBUD3D11_ENCODE_JPEG_PARAMETERS@@PEAUID3D11Buffer@@IPEAUID3D11Resource@@I@Z
    virtual void EncodeJpeg(D3D11_ENCODE_JPEG_PARAMETERS const *, ID3D11Buffer *, unsigned int, ID3D11Resource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptionBlt@CContext@@UEAAXPEAUID3D11CryptoSession@@PEAUID3D11Texture2D@@1IPEAX@Z
    virtual void EncryptionBlt(ID3D11CryptoSession *, ID3D11Texture2D *, ID3D11Texture2D *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndEvent@CContext@@UEAAHXZ
    virtual int EndEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTrackedWorkload@CContext@@UEAAXPEAUID3D11TrackedWorkload@@PEBUD3D11_TRACKED_WORKLOAD_DEADLINE@@@Z
    virtual void EndTrackedWorkload(ID3D11TrackedWorkload *, D3D11_TRACKED_WORKLOAD_DEADLINE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CContext@@UEAAXXZ
    virtual void Enter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishSessionKeyRefresh@CContext@@UEAAXPEAUID3D11CryptoSession@@@Z
    virtual void FinishSessionKeyRefresh(ID3D11CryptoSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushMarkerData@CContext@@QEAAXXZ
    void FlushMarkerData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPISequenceNumber@CContext@@UEAA_KXZ
    virtual uint64_t GetAPISequenceNumber();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataForNewHardwareKey@CContext@@UEAAJPEAUID3D11CryptoSession@@IPEBXPEA_K@Z
    virtual long GetDataForNewHardwareKey(ID3D11CryptoSession *, unsigned int, void const *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecoderBuffer@CContext@@UEAAJPEAUID3D11VideoDecoder@@W4D3D11_VIDEO_DECODER_BUFFER_TYPE@@PEAIPEAPEAX@Z
    virtual long GetDecoderBuffer(ID3D11VideoDecoder *, int, unsigned int *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CContext@@UEAAXPEAPEAUID3D11Device@@@Z
    virtual void GetDevice(ID3D11Device * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEncryptionBltKey@CContext@@UEAAJPEAUID3D11CryptoSession@@IPEAX@Z
    virtual long GetEncryptionBltKey(ID3D11CryptoSession *, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultithreadProtected@CContext@@UEAAHXZ
    virtual int GetMultithreadProtected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CContext@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShaderCacheSession@CContext@@UEAAXPEAPEAUID3D11ShaderCacheSession@@@Z
    virtual void GetShaderCacheSession(ID3D11ShaderCacheSession * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CContext@@UEAAHXZ
    virtual int GetStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D11DeviceContext5_AddRef_Thk@CContext@@SAKPEAUID3D11DeviceContext5@@@Z
    static unsigned long ID3D11DeviceContext5_AddRef_Thk(ID3D11DeviceContext5*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D11DeviceContext5_QueryInterface_Thk@CContext@@SAJPEAUID3D11DeviceContext5@@AEBU_GUID@@PEAPEAX@Z
    static long ID3D11DeviceContext5_QueryInterface_Thk(ID3D11DeviceContext5*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D11DeviceContext5_Release_Thk@CContext@@SAKPEAUID3D11DeviceContext5@@@Z
    static unsigned long ID3D11DeviceContext5_Release_Thk(ID3D11DeviceContext5*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefaults@CContext@@QEAAXXZ
    void InitializeDefaults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsD3D10Interface@CContext@@QEBA_NXZ
    bool IsD3D10Interface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFL9ValidationRequired@CContext@@QEBA_NXZ
    bool IsFL9ValidationRequired() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCBeginLayerDestruction@CContext@@QEAAXXZ
    void LUCBeginLayerDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCCompleteLayerConstruction@CContext@@QEAAJXZ
    long LUCCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CContext@@UEAAXXZ
    virtual void Leave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAnnotation@CContext@@QEAAXPEBGH@Z
    void LogAnnotation(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDroppedAPICall@CContext@@QEBAXW4EMarkerOp@@@Z
    void LogDroppedAPICall(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MustPerformedAmortizedOperationsBeforeResourceUpdate@CContext@@QEBA_NXZ
    bool MustPerformedAmortizedOperationsBeforeResourceUpdate() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateAuthenticatedChannelKeyExchange@CContext@@UEAAJPEAUID3D11AuthenticatedChannel@@IPEAX@Z
    virtual long NegotiateAuthenticatedChannelKeyExchange(ID3D11AuthenticatedChannel *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateCryptoSessionKeyExchange@CContext@@UEAAJPEAUID3D11CryptoSession@@IPEAX@Z
    virtual long NegotiateCryptoSessionKeyExchange(ID3D11CryptoSession *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResources@CContext@@UEAAJIPEBQEAUIDXGIResource@@EH@Z
    virtual long OfferResources(unsigned int, IDXGIResource * const *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresent@CContext@@QEAAXXZ
    void OnPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRender@CContext@@QEAAXXZ
    void OnRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformAcquireResource@CContext@@QEAAXXZ
    void PerformAcquireResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformAmortizedRenderOperations@CContext@@QEAAXXZ
    void PerformAmortizedRenderOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedDeviceContextStateSwap@CContext@@QEAAXXZ
    void PerformDelayedDeviceContextStateSwap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformOrPollAcquireResource@CContext@@QEAA_N_N@Z
    bool PerformOrPollAcquireResource(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDriverErrors@CContext@@QEAAJW4EErrorBehavior@@J_N@Z
    long ProcessDriverErrors(int, long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeCommandList@CContext@@QEAAXPEAVCCommandList@@@Z
    void PurgeCommandList(CCommandList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIImageContext@CContext@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIImageContext(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIMultithread@CContext@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIMultithread(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIVideoContext@CContext@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIVideoContext(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAuthenticatedChannel@CContext@@UEAAJPEAUID3D11AuthenticatedChannel@@IPEBXIPEAX@Z
    virtual long QueryAuthenticatedChannel(ID3D11AuthenticatedChannel *, unsigned int, void const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryVideoDDITable@CContext@@QEAAXXZ
    void QueryVideoDDITable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResources@CContext@@UEAAJIPEBQEAUIDXGIResource@@PEAW4_DXGI_RECLAIM_RESOURCE_RESULTS@@@Z
    virtual long ReclaimResources(unsigned int, IDXGIResource * const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleCommandLists@CContext@@QEAAXPEAU_SLIST_ENTRY@@@Z
    void RecycleCommandLists(_SLIST_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleCreateDeferredContext@CContext@@QEAAJPEAUD3D11DDIARG_CREATEDEFERREDCONTEXT@@@Z
    long RecycleCreateDeferredContext(D3D11DDIARG_CREATEDEFERREDCONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDecoderBuffer@CContext@@UEAAJPEAUID3D11VideoDecoder@@W4D3D11_VIDEO_DECODER_BUFFER_TYPE@@@Z
    virtual long ReleaseDecoderBuffer(ID3D11VideoDecoder *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelocateImageFuncs@CContext@@QEAAXXZ
    void RelocateImageFuncs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelocateVideoFuncs@CContext@@QEAAXXZ
    void RelocateVideoFuncs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContext@CContext@@UEAAXJ@Z
    virtual void RemoveContext(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeviceContext@CContext@@UEAAXJ@Z
    virtual void RemoveDeviceContext(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllAmortized11@CContext@@QEAAXXZ
    void SetAllAmortized11();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllAmortizedShared10and11@CContext@@QEAAXXZ
    void SetAllAmortizedShared10and11();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAmortizedAcquireResourceOperations11@CContext@@QEAAXXZ
    void SetAmortizedAcquireResourceOperations11();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAmortizedRenderOperations11@CContext@@QEAAXXZ
    void SetAmortizedRenderOperations11();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExecuteCommandListMarker@CContext@@QEAAXPEAVCCommandList@@_K@Z
    void SetExecuteCommandListMarker(CCommandList *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGuardedScissorRects@CContext@@QEAAXPEBUUDDI_DEVICEFUNCS@@@Z
    void SetGuardedScissorRects(UDDI_DEVICEFUNCS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMarker@CContext@@UEAAXPEBG@Z
    virtual void SetMarker(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMarker@CContext@@QEAAXW4EMarkerOp@@@Z
    void SetMarker(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMarkerMode@CContext@@QEAAXAEBUSMarkerState@@@Z
    void SetMarkerMode(SMarkerState const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultithreadProtected@CContext@@UEAAHH@Z
    virtual int SetMultithreadProtected(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CContext@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CContext@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShaderCacheSession@CContext@@UEAAXPEAUID3D11ShaderCacheSession@@@Z
    virtual void SetShaderCacheSession(ID3D11ShaderCacheSession *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShaderCacheSessionImpl@CContext@@QEAAXPEAUID3D11ShaderCacheSession@@@Z
    void SetShaderCacheSessionImpl(ID3D11ShaderCacheSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSessionKeyRefresh@CContext@@UEAAXPEAUID3D11CryptoSession@@IPEAX@Z
    virtual void StartSessionKeyRefresh(ID3D11CryptoSession *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitDecoderBuffers@CContext@@UEAAJPEAUID3D11VideoDecoder@@IPEBUD3D11_VIDEO_DECODER_BUFFER_DESC@@@Z
    virtual long SubmitDecoderBuffers(ID3D11VideoDecoder *, unsigned int, D3D11_VIDEO_DECODER_BUFFER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitDecoderBuffers1@CContext@@UEAAJPEAUID3D11VideoDecoder@@IPEBUD3D11_VIDEO_DECODER_BUFFER_DESC1@@@Z
    virtual long SubmitDecoderBuffers1(ID3D11VideoDecoder *, unsigned int, D3D11_VIDEO_DECODER_BUFFER_DESC1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitDecoderBuffers2@CContext@@UEAAJPEAUID3D11VideoDecoder@@IPEBUD3D11_VIDEO_DECODER_BUFFER_DESC2@@@Z
    virtual long SubmitDecoderBuffers2(ID3D11VideoDecoder *, unsigned int, D3D11_VIDEO_DECODER_BUFFER_DESC2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsCBOffsets@CContext@@QEBA_NXZ
    bool SupportsCBOffsets() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_Flush1_AppEntered@CContext@@SAXPEAUID3D11DeviceContext5@@W4D3D11_CONTEXT_TYPE@@PEAX@Z
    static void TID3D11DeviceContext_Flush1_AppEntered(ID3D11DeviceContext5*, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_Flush_AppEntered@CContext@@SAXPEAUID3D11DeviceContext5@@@Z
    static void TID3D11DeviceContext_Flush_AppEntered(ID3D11DeviceContext5*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_GetDevice_@CContext@@SAXPEAUID3D11DeviceContext5@@PEAPEAUID3D11Device@@@Z
    static void TID3D11DeviceContext_GetDevice_(ID3D11DeviceContext5*, ID3D11Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_GetPrivateData_@CContext@@SAJPEAUID3D11DeviceContext5@@AEBU_GUID@@PEAIPEAX@Z
    static long TID3D11DeviceContext_GetPrivateData_(ID3D11DeviceContext5*, _GUID const &, unsigned int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_GetType_@CContext@@SA?AW4D3D11_DEVICE_CONTEXT_TYPE@@PEAUID3D11DeviceContext5@@@Z
    static int TID3D11DeviceContext_GetType_(ID3D11DeviceContext5*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_IsAnnotationEnabled_D3D11On12@CContext@@SAHPEAUID3D11DeviceContext5@@@Z
    static int TID3D11DeviceContext_IsAnnotationEnabled_D3D11On12(ID3D11DeviceContext5*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_SetPrivateDataInterface_@CContext@@SAJPEAUID3D11DeviceContext5@@AEBU_GUID@@PEBUIUnknown@@@Z
    static long TID3D11DeviceContext_SetPrivateDataInterface_(ID3D11DeviceContext5*, _GUID const &, IUnknown const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TID3D11DeviceContext_SetPrivateData_@CContext@@SAJPEAUID3D11DeviceContext5@@AEBU_GUID@@IPEBX@Z
    static long TID3D11DeviceContext_SetPrivateData_(ID3D11DeviceContext5*, _GUID const &, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerAcquireResource10@CContext@@QEAAXXZ
    void TriggerAcquireResource10();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerAmortizedRenderOperations11@CContext@@QEAAXXZ
    void TriggerAmortizedRenderOperations11();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimAcquireResource@CContext@@QEAAXXZ
    void TrimAcquireResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMCreateContextVirtual_@CContext@@SAJUD3D10DDI_HRTCORELAYER@@PEAUD3DWDDM2_0DDICB_CREATECONTEXTVIRTUAL@@@Z
    static long UMCreateContextVirtual_(D3D10DDI_HRTCORELAYER, D3DWDDM2_0DDICB_CREATECONTEXTVIRTUAL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMCreateContext_@CContext@@SAJUD3D10DDI_HRTCORELAYER@@PEAUD3DWDDM2_0DDICB_CREATECONTEXT@@@Z
    static long UMCreateContext_(D3D10DDI_HRTCORELAYER, D3DWDDM2_0DDICB_CREATECONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMDisableDeferredStagingResourceDestruction_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMDisableDeferredStagingResourceDestruction_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMPerformAmortizedProcessing_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMPerformAmortizedProcessing_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_ConstBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_ConstBuf_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_ConstBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_ConstBuf_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_SRV_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_SRV_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_SRV_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_SRV_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_Sampler_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_Sampler_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_Sampler_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_Sampler_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_Shader_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryCS_Shader_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_Shader_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryCS_Shader_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_UAV_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_UAV_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryCS_UAV_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryCS_UAV_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_ConstBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryDS_ConstBuf_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_ConstBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryDS_ConstBuf_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_SRV_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryDS_SRV_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_SRV_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryDS_SRV_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_Sampler_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryDS_Sampler_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_Sampler_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryDS_Sampler_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_Shader_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryDS_Shader_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryDS_Shader_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryDS_Shader_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_ConstBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryGS_ConstBuf_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_ConstBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryGS_ConstBuf_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_SRV_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryGS_SRV_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_SRV_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryGS_SRV_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_Sampler_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryGS_Sampler_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_Sampler_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryGS_Sampler_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_Shader_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryGS_Shader_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryGS_Shader_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryGS_Shader_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_ConstBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryHS_ConstBuf_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_ConstBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryHS_ConstBuf_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_SRV_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryHS_SRV_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_SRV_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryHS_SRV_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_Sampler_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryHS_Sampler_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_Sampler_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryHS_Sampler_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_Shader_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryHS_Shader_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryHS_Shader_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryHS_Shader_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryIA_IndexBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryIA_IndexBuf_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryIA_IndexBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryIA_IndexBuf_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryIA_InputLayout_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryIA_InputLayout_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryIA_InputLayout_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryIA_InputLayout_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryIA_PrimitiveTopology_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryIA_PrimitiveTopology_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryIA_VertexBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryIA_VertexBuf_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryIA_VertexBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryIA_VertexBuf_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryOM_BlendState_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryOM_BlendState_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryOM_BlendState_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryOM_BlendState_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryOM_DepthState_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryOM_DepthState_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryOM_DepthState_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryOM_DepthState_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryOM_RenderTargets_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryOM_RenderTargets_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryOM_RenderTargets_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryOM_RenderTargets_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_ConstBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryPS_ConstBuf_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_ConstBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryPS_ConstBuf_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_SRV_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryPS_SRV_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_SRV_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryPS_SRV_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_Sampler_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryPS_Sampler_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_Sampler_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryPS_Sampler_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_Shader_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryPS_Shader_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryPS_Shader_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryPS_Shader_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryRS_RastState_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryRS_RastState_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryRS_RastState_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryRS_RastState_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryRS_Scissor_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryRS_Scissor_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryRS_Viewports_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryRS_Viewports_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQuerySO_Targets_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQuerySO_Targets_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQuerySO_Targets_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQuerySO_Targets_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryScanoutCaps_@CContext@@SAJUD3D10DDI_HRTCORELAYER@@IPEAI@Z
    static long UMQueryScanoutCaps_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_ConstBuf_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryVS_ConstBuf_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_ConstBuf_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryVS_ConstBuf_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_SRV_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryVS_SRV_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_SRV_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryVS_SRV_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_Sampler_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryVS_Sampler_(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_Sampler_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@II@Z
    static void UMQueryVS_Sampler_DR(D3D10DDI_HRTCORELAYER, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_Shader_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryVS_Shader_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQueryVS_Shader_DR@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQueryVS_Shader_DR(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMQuery_TextFilterSize_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@@Z
    static void UMQuery_TextFilterSize_(D3D10DDI_HRTCORELAYER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMSetError_@CContext@@SAXUD3D10DDI_HRTCORELAYER@@J@Z
    static void UMSetError_(D3D10DDI_HRTCORELAYER, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMShaderCacheAddRef_@CContext@@SAXUD3DWDDM2_2DDI_HRTCACHESESSION@@@Z
    static void UMShaderCacheAddRef_(D3DWDDM2_2DDI_HRTCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMShaderCacheGetValue_@CContext@@SAJUD3DWDDM2_2DDI_HRTCACHESESSION@@PEBUD3DWDDM2_2DDI_SHADERCACHE_HASH@@PEBX_KPEAXPEA_K@Z
    static long UMShaderCacheGetValue_(D3DWDDM2_2DDI_HRTCACHESESSION, D3DWDDM2_2DDI_SHADERCACHE_HASH const *, void const *, uint64_t, void *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMShaderCacheRelease_@CContext@@SAXUD3DWDDM2_2DDI_HRTCACHESESSION@@@Z
    static void UMShaderCacheRelease_(D3DWDDM2_2DDI_HRTCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMShaderCacheStoreValue_@CContext@@SAJUD3DWDDM2_2DDI_HRTCACHESESSION@@PEBUD3DWDDM2_2DDI_SHADERCACHE_HASH@@PEBX_K23@Z
    static long UMShaderCacheStoreValue_(D3DWDDM2_2DDI_HRTCACHESESSION, D3DWDDM2_2DDI_SHADERCACHE_HASH const *, void const *, uint64_t, void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetAllAmortized11@CContext@@QEAAXXZ
    void UnsetAllAmortized11();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetAmortizedAcquireResourceOperations11@CContext@@QEAAXXZ
    void UnsetAmortizedAcquireResourceOperations11();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetAmortizedRenderOperations11@CContext@@QEAAXXZ
    void UnsetAmortizedRenderOperations11();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetAmortizedShared10and11@CContext@@QEAAXXZ
    void UnsetAmortizedShared10and11();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetObject@CContext@@UEAAXW4D3D11_OBJECT_BANK@@I@Z
    virtual void UnsetObject(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHistoryBufferStatus@CContext@@QEAA_NXZ
    bool UpdateHistoryBufferStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMarkerModeIfChanged@CContext@@QEAAXXZ
    void UpdateMarkerModeIfChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePipelineForGuardChange@CContext@@QEAAXPEBUUDDI_DEVICEFUNCS@@@Z
    void UpdatePipelineForGuardChange(UDDI_DEVICEFUNCS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateReclaimResources@CContext@@UEAAJIPEBQEAUIDXGIResource@@EH@Z
    virtual long ValidateReclaimResources(unsigned int, IDXGIResource * const *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorBlt@CContext@@UEAAJPEAUID3D11VideoProcessor@@PEAUID3D11VideoProcessorOutputView@@IIPEBUD3D11_VIDEO_PROCESSOR_STREAM@@@Z
    virtual long VideoProcessorBlt(ID3D11VideoProcessor *, ID3D11VideoProcessorOutputView *, unsigned int, unsigned int, D3D11_VIDEO_PROCESSOR_STREAM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetBehaviorHints@CContext@@UEAAJPEAUID3D11VideoProcessor@@IIW4DXGI_FORMAT@@IPEBUD3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT@@PEAI@Z
    virtual long VideoProcessorGetBehaviorHints(ID3D11VideoProcessor *, unsigned int, unsigned int, int, unsigned int, D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputAlphaFillMode@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAW4D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE@@PEAI@Z
    virtual void VideoProcessorGetOutputAlphaFillMode(ID3D11VideoProcessor *, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputBackgroundColor@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAHPEAUD3D11_VIDEO_COLOR@@@Z
    virtual void VideoProcessorGetOutputBackgroundColor(ID3D11VideoProcessor *, int *, D3D11_VIDEO_COLOR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputColorSpace@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void VideoProcessorGetOutputColorSpace(ID3D11VideoProcessor *, D3D11_VIDEO_PROCESSOR_COLOR_SPACE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputColorSpace1@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void VideoProcessorGetOutputColorSpace1(ID3D11VideoProcessor *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputConstriction@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAHPEAUtagSIZE@@@Z
    virtual void VideoProcessorGetOutputConstriction(ID3D11VideoProcessor *, int *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputExtension@CContext@@UEAAJPEAUID3D11VideoProcessor@@PEBU_GUID@@IPEAX@Z
    virtual long VideoProcessorGetOutputExtension(ID3D11VideoProcessor *, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputHDRMetaData@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAW4DXGI_HDR_METADATA_TYPE@@IPEAX@Z
    virtual void VideoProcessorGetOutputHDRMetaData(ID3D11VideoProcessor *, int *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputShaderUsage@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAH@Z
    virtual void VideoProcessorGetOutputShaderUsage(ID3D11VideoProcessor *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputStereoMode@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAH@Z
    virtual void VideoProcessorGetOutputStereoMode(ID3D11VideoProcessor *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetOutputTargetRect@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEAHPEAUtagRECT@@@Z
    virtual void VideoProcessorGetOutputTargetRect(ID3D11VideoProcessor *, int *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamAlpha@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAHPEAM@Z
    virtual void VideoProcessorGetStreamAlpha(ID3D11VideoProcessor *, unsigned int, int *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamAutoProcessingMode@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAH@Z
    virtual void VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoProcessor *, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamColorSpace@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void VideoProcessorGetStreamColorSpace(ID3D11VideoProcessor *, unsigned int, D3D11_VIDEO_PROCESSOR_COLOR_SPACE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamColorSpace1@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void VideoProcessorGetStreamColorSpace1(ID3D11VideoProcessor *, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamDestRect@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAHPEAUtagRECT@@@Z
    virtual void VideoProcessorGetStreamDestRect(ID3D11VideoProcessor *, unsigned int, int *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamExtension@CContext@@UEAAJPEAUID3D11VideoProcessor@@IPEBU_GUID@@IPEAX@Z
    virtual long VideoProcessorGetStreamExtension(ID3D11VideoProcessor *, unsigned int, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamFilter@CContext@@UEAAXPEAUID3D11VideoProcessor@@IW4D3D11_VIDEO_PROCESSOR_FILTER@@PEAH2@Z
    virtual void VideoProcessorGetStreamFilter(ID3D11VideoProcessor *, unsigned int, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamFrameFormat@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAW4D3D11_VIDEO_FRAME_FORMAT@@@Z
    virtual void VideoProcessorGetStreamFrameFormat(ID3D11VideoProcessor *, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamHDRMetaData@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAW4DXGI_HDR_METADATA_TYPE@@IPEAX@Z
    virtual void VideoProcessorGetStreamHDRMetaData(ID3D11VideoProcessor *, unsigned int, int *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamLumaKey@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAHPEAM2@Z
    virtual void VideoProcessorGetStreamLumaKey(ID3D11VideoProcessor *, unsigned int, int *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamMirror@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAH11@Z
    virtual void VideoProcessorGetStreamMirror(ID3D11VideoProcessor *, unsigned int, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamOutputRate@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAW4D3D11_VIDEO_PROCESSOR_OUTPUT_RATE@@PEAHPEAUDXGI_RATIONAL@@@Z
    virtual void VideoProcessorGetStreamOutputRate(ID3D11VideoProcessor *, unsigned int, int *, int *, DXGI_RATIONAL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamPalette@CContext@@UEAAXPEAUID3D11VideoProcessor@@IIPEAI@Z
    virtual void VideoProcessorGetStreamPalette(ID3D11VideoProcessor *, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamPixelAspectRatio@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAHPEAUDXGI_RATIONAL@@2@Z
    virtual void VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoProcessor *, unsigned int, int *, DXGI_RATIONAL *, DXGI_RATIONAL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamRotation@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAHPEAW4D3D11_VIDEO_PROCESSOR_ROTATION@@@Z
    virtual void VideoProcessorGetStreamRotation(ID3D11VideoProcessor *, unsigned int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamSourceRect@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAHPEAUtagRECT@@@Z
    virtual void VideoProcessorGetStreamSourceRect(ID3D11VideoProcessor *, unsigned int, int *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorGetStreamStereoFormat@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEAHPEAW4D3D11_VIDEO_PROCESSOR_STEREO_FORMAT@@11PEAW4D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE@@1@Z
    virtual void VideoProcessorGetStreamStereoFormat(ID3D11VideoProcessor *, unsigned int, int *, int *, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputAlphaFillMode@CContext@@UEAAXPEAUID3D11VideoProcessor@@W4D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE@@I@Z
    virtual void VideoProcessorSetOutputAlphaFillMode(ID3D11VideoProcessor *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputBackgroundColor@CContext@@UEAAXPEAUID3D11VideoProcessor@@HPEBUD3D11_VIDEO_COLOR@@@Z
    virtual void VideoProcessorSetOutputBackgroundColor(ID3D11VideoProcessor *, int, D3D11_VIDEO_COLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputColorSpace@CContext@@UEAAXPEAUID3D11VideoProcessor@@PEBUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void VideoProcessorSetOutputColorSpace(ID3D11VideoProcessor *, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputColorSpace1@CContext@@UEAAXPEAUID3D11VideoProcessor@@W4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void VideoProcessorSetOutputColorSpace1(ID3D11VideoProcessor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputConstriction@CContext@@UEAAXPEAUID3D11VideoProcessor@@HUtagSIZE@@@Z
    virtual void VideoProcessorSetOutputConstriction(ID3D11VideoProcessor *, int, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputExtension@CContext@@UEAAJPEAUID3D11VideoProcessor@@PEBU_GUID@@IPEAX@Z
    virtual long VideoProcessorSetOutputExtension(ID3D11VideoProcessor *, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputHDRMetaData@CContext@@UEAAXPEAUID3D11VideoProcessor@@W4DXGI_HDR_METADATA_TYPE@@IPEBX@Z
    virtual void VideoProcessorSetOutputHDRMetaData(ID3D11VideoProcessor *, int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputShaderUsage@CContext@@UEAAXPEAUID3D11VideoProcessor@@H@Z
    virtual void VideoProcessorSetOutputShaderUsage(ID3D11VideoProcessor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputStereoMode@CContext@@UEAAXPEAUID3D11VideoProcessor@@H@Z
    virtual void VideoProcessorSetOutputStereoMode(ID3D11VideoProcessor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetOutputTargetRect@CContext@@UEAAXPEAUID3D11VideoProcessor@@HPEBUtagRECT@@@Z
    virtual void VideoProcessorSetOutputTargetRect(ID3D11VideoProcessor *, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamAlpha@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHM@Z
    virtual void VideoProcessorSetStreamAlpha(ID3D11VideoProcessor *, unsigned int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamAutoProcessingMode@CContext@@UEAAXPEAUID3D11VideoProcessor@@IH@Z
    virtual void VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoProcessor *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamColorSpace@CContext@@UEAAXPEAUID3D11VideoProcessor@@IPEBUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void VideoProcessorSetStreamColorSpace(ID3D11VideoProcessor *, unsigned int, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamColorSpace1@CContext@@UEAAXPEAUID3D11VideoProcessor@@IW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void VideoProcessorSetStreamColorSpace1(ID3D11VideoProcessor *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamDestRect@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHPEBUtagRECT@@@Z
    virtual void VideoProcessorSetStreamDestRect(ID3D11VideoProcessor *, unsigned int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamExtension@CContext@@UEAAJPEAUID3D11VideoProcessor@@IPEBU_GUID@@IPEAX@Z
    virtual long VideoProcessorSetStreamExtension(ID3D11VideoProcessor *, unsigned int, _GUID const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamFilter@CContext@@UEAAXPEAUID3D11VideoProcessor@@IW4D3D11_VIDEO_PROCESSOR_FILTER@@HH@Z
    virtual void VideoProcessorSetStreamFilter(ID3D11VideoProcessor *, unsigned int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamFrameFormat@CContext@@UEAAXPEAUID3D11VideoProcessor@@IW4D3D11_VIDEO_FRAME_FORMAT@@@Z
    virtual void VideoProcessorSetStreamFrameFormat(ID3D11VideoProcessor *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamHDRMetaData@CContext@@UEAAXPEAUID3D11VideoProcessor@@IW4DXGI_HDR_METADATA_TYPE@@IPEBX@Z
    virtual void VideoProcessorSetStreamHDRMetaData(ID3D11VideoProcessor *, unsigned int, int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamLumaKey@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHMM@Z
    virtual void VideoProcessorSetStreamLumaKey(ID3D11VideoProcessor *, unsigned int, int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamMirror@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHHH@Z
    virtual void VideoProcessorSetStreamMirror(ID3D11VideoProcessor *, unsigned int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamOutputRate@CContext@@UEAAXPEAUID3D11VideoProcessor@@IW4D3D11_VIDEO_PROCESSOR_OUTPUT_RATE@@HPEBUDXGI_RATIONAL@@@Z
    virtual void VideoProcessorSetStreamOutputRate(ID3D11VideoProcessor *, unsigned int, int, int, DXGI_RATIONAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamPalette@CContext@@UEAAXPEAUID3D11VideoProcessor@@IIPEBI@Z
    virtual void VideoProcessorSetStreamPalette(ID3D11VideoProcessor *, unsigned int, unsigned int, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamPixelAspectRatio@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHPEBUDXGI_RATIONAL@@1@Z
    virtual void VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoProcessor *, unsigned int, int, DXGI_RATIONAL const *, DXGI_RATIONAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamRotation@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHW4D3D11_VIDEO_PROCESSOR_ROTATION@@@Z
    virtual void VideoProcessorSetStreamRotation(ID3D11VideoProcessor *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamSourceRect@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHPEBUtagRECT@@@Z
    virtual void VideoProcessorSetStreamSourceRect(ID3D11VideoProcessor *, unsigned int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorSetStreamStereoFormat@CContext@@UEAAXPEAUID3D11VideoProcessor@@IHW4D3D11_VIDEO_PROCESSOR_STEREO_FORMAT@@HHW4D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE@@H@Z
    virtual void VideoProcessorSetStreamStereoFormat(ID3D11VideoProcessor *, unsigned int, int, int, int, int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContext@@QEAA@XZ
    ~CContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoFineGrainedCBOutputHazardCheck@CContext@@IEAA?AUD3D10DDI_HRESOURCE@@PEBUSCBOutputHazardCheckData@1@@Z
    D3D10DDI_HRESOURCE DoFineGrainedCBOutputHazardCheck(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoFineGrainedIBOutputHazardCheck@CContext@@IEAA?AUD3D10DDI_HRESOURCE@@PEBUCLS@CBuffer@@@Z
    D3D10DDI_HRESOURCE DoFineGrainedIBOutputHazardCheck(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoFineGrainedVBOutputHazardCheck@CContext@@IEAA?AUD3D10DDI_HRESOURCE@@PEBUSVBOutputHazardCheckData@1@@Z
    D3D10DDI_HRESOURCE DoFineGrainedVBOutputHazardCheck(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveCSUnacquiredHazards@CContext@@IEAAXPEBQEAUID3D11UnorderedAccessView@@II@Z
    void ResolveCSUnacquiredHazards(ID3D11UnorderedAccessView * const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveOMUnacquiredHazards@CContext@@IEAAXPEBUSResolveOMHazardsData11@1@@Z
    void ResolveOMUnacquiredHazards(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveOMUnacquiredHazards@CContext@@IEAAXPEBQEAUID3D11RenderTargetView@@IPEAUID3D11DepthStencilView@@PEAUD3D10DDI_HRENDERTARGETVIEW@@PEAUD3D10DDI_HDEPTHSTENCILVIEW@@@Z
    void ResolveOMUnacquiredHazards(ID3D11RenderTargetView * const *, unsigned int, ID3D11DepthStencilView *, D3D10DDI_HRENDERTARGETVIEW *, D3D10DDI_HDEPTHSTENCILVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSOUnacquiredHazards@CContext@@IEAAXIPEAUD3D10DDI_HRESOURCE@@@Z
    void ResolveSOUnacquiredHazards(unsigned int, D3D10DDI_HRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFeatureLevelStateImpl@CContext@@IEAAXPEAUSFeatureLevelState@@@Z
    void RestoreFeatureLevelStateImpl(SFeatureLevelState *);
};
