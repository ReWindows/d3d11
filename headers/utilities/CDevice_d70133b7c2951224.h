#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 483 member(s).
class CDevice {
public:
    class CondObjectLock;
    class ObjectLock;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireHandleForCapture@CDevice@@UEAAJPEAUID3D11Resource@@IPEAI11@Z
    virtual long AcquireHandleForCapture(ID3D11Resource *, unsigned int, unsigned int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireResource@CDevice@@QEAAXPEAUIDXGIResourceInternal@@@Z
    void AcquireResource(IDXGIResourceInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginGuardRectangleSupport@CDevice@@UEAAJXZ
    virtual long BeginGuardRectangleSupport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDriverSignatures@CDevice@@QEAAXPEBVCSignatureParser@@0PEAUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    void BuildDriverSignatures(CSignatureParser const *, CSignatureParser const *, D3D11_1DDIARG_STAGE_IO_SIGNATURES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDriverSignatures@CDevice@@SAXPEBVCSignatureParser@@0PEAUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void BuildDriverSignatures(CSignatureParser const *, CSignatureParser const *, D3D10DDIARG_STAGE_IO_SIGNATURES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDriverSignatures@CDevice@@QEAAXPEBVCSignatureParser@@00PEAUD3D11_1DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    void BuildDriverSignatures(CSignatureParser const *, CSignatureParser const *, CSignatureParser const *, D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDriverSignatures@CDevice@@SAXPEBVCSignatureParser@@00PEAUD3D11DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void BuildDriverSignatures(CSignatureParser const *, CSignatureParser const *, CSignatureParser const *, D3D11DDIARG_TESSELLATION_IO_SIGNATURES *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDevice@@QEAA@AEBUTConstructorArgs@0@@Z
    CDevice(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPrivateResourceSize@CDevice@@QEAA_KPEBUSD3D11SharedResourceCreationArgs@@AEBVCSafeDDIResource@@@Z
    uint64_t CalcPrivateResourceSize(SD3D11SharedResourceCreationArgs const *, CSafeDDIResource const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelFlipManagerPresent@CDevice@@UEAAJU_LUID@@_K1@Z
    virtual long CancelFlipManagerPresent(_LUID, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCounter@CDevice@@UEAAJPEBUD3D11_COUNTER_DESC@@PEAW4D3D11_COUNTER_TYPE@@PEAIPEAD23232@Z
    virtual long CheckCounter(D3D11_COUNTER_DESC const *, int *, unsigned int *, char *, unsigned int *, char *, unsigned int *, char *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCounterInfo@CDevice@@UEAAXPEAUD3D11_COUNTER_INFO@@@Z
    virtual void CheckCounterInfo(D3D11_COUNTER_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCryptoKeyExchange@CDevice@@UEAAJPEBU_GUID@@0IPEAU2@@Z
    virtual long CheckCryptoKeyExchange(_GUID const *, _GUID const *, unsigned int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFeatureSupport@CDevice@@UEAAJW4D3D11_FEATURE@@PEAXI@Z
    virtual long CheckFeatureSupport(int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFormatSupport@CDevice@@UEAAJW4DXGI_FORMAT@@PEAI@Z
    virtual long CheckFormatSupport(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFormatSupportImpl@CDevice@@UEAAJW4DXGI_FORMAT@@PEAI@Z
    virtual long CheckFormatSupportImpl(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFormatSupportImpl2@CDevice@@UEAAJW4DXGI_FORMAT@@PEAI@Z
    virtual long CheckFormatSupportImpl2(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultisampleQualityLevels@CDevice@@UEAAJW4DXGI_FORMAT@@IPEAI@Z
    virtual long CheckMultisampleQualityLevels(int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultisampleQualityLevels1@CDevice@@UEAAJW4DXGI_FORMAT@@IIPEAI@Z
    virtual long CheckMultisampleQualityLevels1(int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVideoDecoderDownsampling@CDevice@@UEAAJPEBUD3D11_VIDEO_DECODER_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBUD3D11_VIDEO_DECODER_CONFIG@@PEBUDXGI_RATIONAL@@PEBUD3D11_VIDEO_SAMPLE_DESC@@PEAH5@Z
    virtual long CheckVideoDecoderDownsampling(D3D11_VIDEO_DECODER_DESC const *, int, D3D11_VIDEO_DECODER_CONFIG const *, DXGI_RATIONAL const *, D3D11_VIDEO_SAMPLE_DESC const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVideoDecoderFormat@CDevice@@UEAAJPEBU_GUID@@W4DXGI_FORMAT@@PEAH@Z
    virtual long CheckVideoDecoderFormat(_GUID const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSharedResource@CDevice@@QEAAXI@Z
    void CloseSharedResource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConservativeFlushCount@CDevice@@UEAA_KXZ
    virtual uint64_t ConservativeFlushCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConservativeRasterizationTier@CDevice@@QEBA?AW4D3D11_CONSERVATIVE_RASTERIZATION_TIER@@XZ
    int ConservativeRasterizationTier() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAuthenticatedChannel@CDevice@@UEAAJW4D3D11_AUTHENTICATED_CHANNEL_TYPE@@PEAPEAUID3D11AuthenticatedChannel@@@Z
    virtual long CreateAuthenticatedChannel(int, ID3D11AuthenticatedChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlendState@CDevice@@UEAAJPEBUD3D11_BLEND_DESC@@PEAPEAUID3D11BlendState@@@Z
    virtual long CreateBlendState(D3D11_BLEND_DESC const *, ID3D11BlendState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlendState1@CDevice@@UEAAJPEBUD3D11_BLEND_DESC1@@PEAPEAUID3D11BlendState1@@@Z
    virtual long CreateBlendState1(D3D11_BLEND_DESC1const *, ID3D11BlendState1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBuffer@CDevice@@UEAAJPEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z
    virtual long CreateBuffer(D3D11_BUFFER_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Buffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClassLinkage@CDevice@@UEAAJPEAPEAUID3D11ClassLinkage@@@Z
    virtual long CreateClassLinkage(ID3D11ClassLinkage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionBuffer@CDevice@@UEAAJIIW4DXGI_FORMAT@@HIIAEBU_GUID@@PEAPEAX2@Z
    virtual long CreateCompositionBuffer(unsigned int, unsigned int, int, int, unsigned int, unsigned int, _GUID const &, void * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComputeShader@CDevice@@UEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11ComputeShader@@@Z
    virtual long CreateComputeShader(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11ComputeShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCounter@CDevice@@UEAAJPEBUD3D11_COUNTER_DESC@@PEAPEAUID3D11Counter@@@Z
    virtual long CreateCounter(D3D11_COUNTER_DESC const *, ID3D11Counter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCryptoSession@CDevice@@UEAAJPEBU_GUID@@00PEAPEAUID3D11CryptoSession@@@Z
    virtual long CreateCryptoSession(_GUID const *, _GUID const *, _GUID const *, ID3D11CryptoSession * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaults@CDevice@@QEAAXXZ
    void CreateDefaults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeferredContext@CDevice@@UEAAJIPEAPEAUID3D11DeviceContext@@@Z
    virtual long CreateDeferredContext(unsigned int, ID3D11DeviceContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeferredContext1@CDevice@@UEAAJIPEAPEAUID3D11DeviceContext1@@@Z
    virtual long CreateDeferredContext1(unsigned int, ID3D11DeviceContext1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeferredContext2@CDevice@@UEAAJIPEAPEAUID3D11DeviceContext2@@@Z
    virtual long CreateDeferredContext2(unsigned int, ID3D11DeviceContext2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeferredContext3@CDevice@@UEAAJIPEAPEAUID3D11DeviceContext3@@@Z
    virtual long CreateDeferredContext3(unsigned int, ID3D11DeviceContext3* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeferredContextImpl@CDevice@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long CreateDeferredContextImpl(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDepthStencilState@CDevice@@UEAAJPEBUD3D11_DEPTH_STENCIL_DESC@@PEAPEAUID3D11DepthStencilState@@@Z
    virtual long CreateDepthStencilState(D3D11_DEPTH_STENCIL_DESC const *, ID3D11DepthStencilState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDepthStencilView@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_DEPTH_STENCIL_VIEW_DESC@@PEAPEAUID3D11DepthStencilView@@@Z
    virtual long CreateDepthStencilView(ID3D11Resource *, D3D11_DEPTH_STENCIL_VIEW_DESC const *, ID3D11DepthStencilView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeviceContextState@CDevice@@UEAAJIPEBW4D3D_FEATURE_LEVEL@@IIAEBU_GUID@@PEAW42@PEAPEAUID3DDeviceContextState@@@Z
    virtual long CreateDeviceContextState(unsigned int, int const *, unsigned int, unsigned int, _GUID const &, int *, ID3DDeviceContextState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDomainShader@CDevice@@UEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11DomainShader@@@Z
    virtual long CreateDomainShader(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11DomainShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDriverInstance@CDevice@@QEAAJPEAVCContext@@PEAX111IPEAP6AJUD3D10DDI_HDEVICE@@I_K131@Z@Z
    long CreateDriverInstance(CContext *, void *, void *, void *, void *, unsigned int, long ( * *)(D3D10DDI_HDEVICE, unsigned int, uint64_t, void *, uint64_t, void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFence@CDevice@@UEAAJ_KW4D3D11_FENCE_FLAG@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateFence(uint64_t, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryShader@CDevice@@UEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11GeometryShader@@@Z
    virtual long CreateGeometryShader(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11GeometryShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryShaderWithStreamOutput@CDevice@@UEAAJPEBX_KPEBUD3D11_SO_DECLARATION_ENTRY@@IPEBIIIPEAUID3D11ClassLinkage@@PEAPEAUID3D11GeometryShader@@@Z
    virtual long CreateGeometryShaderWithStreamOutput(void const *, uint64_t, D3D11_SO_DECLARATION_ENTRY const *, unsigned int, unsigned int const *, unsigned int, unsigned int, ID3D11ClassLinkage *, ID3D11GeometryShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGuardableTexture2D@CDevice@@UEAAJPEBUD3D11_TEXTURE2D_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z
    virtual long CreateGuardableTexture2D(D3D11_TEXTURE2D_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHullShader@CDevice@@UEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11HullShader@@@Z
    virtual long CreateHullShader(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11HullShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputLayout@CDevice@@UEAAJPEBUD3D11_INPUT_ELEMENT_DESC@@IPEBX_KPEAPEAUID3D11InputLayout@@@Z
    virtual long CreateInputLayout(D3D11_INPUT_ELEMENT_DESC const *, unsigned int, void const *, uint64_t, ID3D11InputLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayeredChild@CDevice@@QEAAJIPEBX_KPEAUID3D11LayeredUseCounted@@AEBU_GUID@@PEAPEAX@Z
    long CreateLayeredChild(unsigned int, void const *, uint64_t, ID3D11LayeredUseCounted *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMultiPlaneOverlay@CDevice@@UEAAJPEBUD3D11_TEXTURE2D_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z
    virtual long CreateMultiPlaneOverlay(D3D11_TEXTURE2D_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePixelShader@CDevice@@UEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z
    virtual long CreatePixelShader(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11PixelShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePredicate@CDevice@@UEAAJPEBUD3D11_QUERY_DESC@@PEAPEAUID3D11Predicate@@@Z
    virtual long CreatePredicate(D3D11_QUERY_DESC const *, ID3D11Predicate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQuery@CDevice@@UEAAJPEBUD3D11_QUERY_DESC@@PEAPEAUID3D11Query@@@Z
    virtual long CreateQuery(D3D11_QUERY_DESC const *, ID3D11Query * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQuery1@CDevice@@UEAAJPEBUD3D11_QUERY_DESC1@@PEAPEAUID3D11Query1@@@Z
    virtual long CreateQuery1(D3D11_QUERY_DESC1const *, ID3D11Query1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRasterizerState@CDevice@@UEAAJPEBUD3D11_RASTERIZER_DESC@@PEAPEAUID3D11RasterizerState@@@Z
    virtual long CreateRasterizerState(D3D11_RASTERIZER_DESC const *, ID3D11RasterizerState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRasterizerState1@CDevice@@UEAAJPEBUD3D11_RASTERIZER_DESC1@@PEAPEAUID3D11RasterizerState1@@@Z
    virtual long CreateRasterizerState1(D3D11_RASTERIZER_DESC1const *, ID3D11RasterizerState1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRasterizerState2@CDevice@@UEAAJPEBUD3D11_RASTERIZER_DESC2@@PEAPEAUID3D11RasterizerState2@@@Z
    virtual long CreateRasterizerState2(D3D11_RASTERIZER_DESC2const *, ID3D11RasterizerState2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetView@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z
    virtual long CreateRenderTargetView(ID3D11Resource *, D3D11_RENDER_TARGET_VIEW_DESC const *, ID3D11RenderTargetView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetView1@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC1@@PEAPEAUID3D11RenderTargetView1@@@Z
    virtual long CreateRenderTargetView1(ID3D11Resource *, D3D11_RENDER_TARGET_VIEW_DESC1const *, ID3D11RenderTargetView1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSamplerState@CDevice@@UEAAJPEBUD3D11_SAMPLER_DESC@@PEAPEAUID3D11SamplerState@@@Z
    virtual long CreateSamplerState(D3D11_SAMPLER_DESC const *, ID3D11SamplerState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderCacheSession@CDevice@@UEAAJPEBUD3D11_SHADER_CACHE_SESSION_DESC@@PEAPEAUID3D11ShaderCacheSession@@@Z
    virtual long CreateShaderCacheSession(D3D11_SHADER_CACHE_SESSION_DESC const *, ID3D11ShaderCacheSession * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderResourceView@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z
    virtual long CreateShaderResourceView(ID3D11Resource *, D3D11_SHADER_RESOURCE_VIEW_DESC const *, ID3D11ShaderResourceView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderResourceView1@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC1@@PEAPEAUID3D11ShaderResourceView1@@@Z
    virtual long CreateShaderResourceView1(ID3D11Resource *, D3D11_SHADER_RESOURCE_VIEW_DESC1const *, ID3D11ShaderResourceView1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandle@CDevice@@UEAAJPEAUIUnknown@@PEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandle(IUnknown *, _SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSynchronizedChannel@CDevice@@UEAAJPEAPEAUID3D11SynchronizedChannel@@@Z
    virtual long CreateSynchronizedChannel(ID3D11SynchronizedChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture1D@CDevice@@UEAAJPEBUD3D11_TEXTURE1D_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture1D@@@Z
    virtual long CreateTexture1D(D3D11_TEXTURE1D_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture1D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture1DInternal@CDevice@@UEAAJPEBUD3D11_TEXTURE1D_DESC@@W4D3D11_TEXTURE_LAYOUT@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture1D@@@Z
    virtual long CreateTexture1DInternal(D3D11_TEXTURE1D_DESC const *, int, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture1D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture2D@CDevice@@UEAAJPEBUD3D11_TEXTURE2D_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z
    virtual long CreateTexture2D(D3D11_TEXTURE2D_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture2D1@CDevice@@UEAAJPEBUD3D11_TEXTURE2D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D1@@@Z
    virtual long CreateTexture2D1(D3D11_TEXTURE2D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture2D1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture2D1Internal@CDevice@@UEAAJPEBUD3D11_TEXTURE2D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D1@@@Z
    virtual long CreateTexture2D1Internal(D3D11_TEXTURE2D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture2D1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture3D@CDevice@@UEAAJPEBUD3D11_TEXTURE3D_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture3D@@@Z
    virtual long CreateTexture3D(D3D11_TEXTURE3D_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture3D1@CDevice@@UEAAJPEBUD3D11_TEXTURE3D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture3D1@@@Z
    virtual long CreateTexture3D1(D3D11_TEXTURE3D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture3D1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture3D1Internal@CDevice@@UEAAJPEBUD3D11_TEXTURE3D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture3D1@@@Z
    virtual long CreateTexture3D1Internal(D3D11_TEXTURE3D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture3D1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTrackedWorkload@CDevice@@UEAAJPEBUD3D11_TRACKED_WORKLOAD_DESC@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateTrackedWorkload(D3D11_TRACKED_WORKLOAD_DESC const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUnorderedAccessView@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_UNORDERED_ACCESS_VIEW_DESC@@PEAPEAUID3D11UnorderedAccessView@@@Z
    virtual long CreateUnorderedAccessView(ID3D11Resource *, D3D11_UNORDERED_ACCESS_VIEW_DESC const *, ID3D11UnorderedAccessView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUnorderedAccessView1@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_UNORDERED_ACCESS_VIEW_DESC1@@PEAPEAUID3D11UnorderedAccessView1@@@Z
    virtual long CreateUnorderedAccessView1(ID3D11Resource *, D3D11_UNORDERED_ACCESS_VIEW_DESC1const *, ID3D11UnorderedAccessView1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVertexShader@CDevice@@UEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11VertexShader@@@Z
    virtual long CreateVertexShader(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11VertexShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVideoDecoder@CDevice@@UEAAJPEBUD3D11_VIDEO_DECODER_DESC@@PEBUD3D11_VIDEO_DECODER_CONFIG@@PEAPEAUID3D11VideoDecoder@@@Z
    virtual long CreateVideoDecoder(D3D11_VIDEO_DECODER_DESC const *, D3D11_VIDEO_DECODER_CONFIG const *, ID3D11VideoDecoder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVideoDecoderOutputView@CDevice@@UEAAJPEAUID3D11Resource@@PEBUD3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC@@PEAPEAUID3D11VideoDecoderOutputView@@@Z
    virtual long CreateVideoDecoderOutputView(ID3D11Resource *, D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC const *, ID3D11VideoDecoderOutputView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVideoProcessor@CDevice@@UEAAJPEAUID3D11VideoProcessorEnumerator@@IPEAPEAUID3D11VideoProcessor@@@Z
    virtual long CreateVideoProcessor(ID3D11VideoProcessorEnumerator *, unsigned int, ID3D11VideoProcessor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVideoProcessorEnumerator@CDevice@@UEAAJPEBUD3D11_VIDEO_PROCESSOR_CONTENT_DESC@@PEAPEAUID3D11VideoProcessorEnumerator@@@Z
    virtual long CreateVideoProcessorEnumerator(D3D11_VIDEO_PROCESSOR_CONTENT_DESC const *, ID3D11VideoProcessorEnumerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVideoProcessorInputView@CDevice@@UEAAJPEAUID3D11Resource@@PEAUID3D11VideoProcessorEnumerator@@PEBUD3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC@@PEAPEAUID3D11VideoProcessorInputView@@@Z
    virtual long CreateVideoProcessorInputView(ID3D11Resource *, ID3D11VideoProcessorEnumerator *, D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC const *, ID3D11VideoProcessorInputView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVideoProcessorOutputView@CDevice@@UEAAJPEAUID3D11Resource@@PEAUID3D11VideoProcessorEnumerator@@PEBUD3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC@@PEAPEAUID3D11VideoProcessorOutputView@@@Z
    virtual long CreateVideoProcessorOutputView(ID3D11Resource *, ID3D11VideoProcessorEnumerator *, D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC const *, ID3D11VideoProcessorOutputView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDIFlags@CDevice@@QEBAIXZ
    unsigned int DDIFlags() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemovedReason@CDevice@@QEBAJ_N@Z
    long DeviceRemovedReason(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverInternalError@CDevice@@QEAAXJ@Z
    void DriverInternalError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverInternalErrorCB@CDevice@@QEAAXJ@Z
    void DriverInternalErrorCB(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsComputeShaderPlusRawAndStructuredBuffersViaShader4x@CDevice@@QEBA_NXZ
    bool DriverSupportsComputeShaderPlusRawAndStructuredBuffersViaShader4x() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsDoublePrecisionFloatShaderOps@CDevice@@QEBA_NXZ
    bool DriverSupportsDoublePrecisionFloatShaderOps() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWRundown@CDevice@@QEAAX_KPEBU_EVENT_DESCRIPTOR@@@Z
    void ETWRundown(uint64_t, _EVENT_DESCRIPTOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWriteResource@CDevice@@QEBAX_KPEBU_EVENT_DESCRIPTOR@@PEAUIDXGIResourceInternal@@PEAUIDXGISurface@@I_N@Z
    void ETWWriteResource(uint64_t, _EVENT_DESCRIPTOR const *, IDXGIResourceInternal *, IDXGISurface *, unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmulateR8WithL8@CDevice@@UEAAJH@Z
    virtual long EmulateR8WithL8(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableVariableRefreshForProcess@CDevice@@UEAAJXZ
    virtual long EnableVariableRefreshForProcess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndGuardRectangleSupport@CDevice@@UEAAXXZ
    virtual void EndGuardRectangleSupport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CDevice@@UEAAXXZ
    virtual void Enter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureLevelCreated@CDevice@@QEAAXW4D3D_FEATURE_LEVEL@@@Z
    void FeatureLevelCreated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillSODecls@CDevice@@SAXQEBUSD3D11LayeredGeometryShaderCreationArgs@@AEBVCSignatureParser@@PEAUD3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@@Z
    static void FillSODecls(SD3D11LayeredGeometryShaderCreationArgs const * const, CSignatureParser const &, D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillSODecls11@CDevice@@SAXQEBUSD3D11LayeredGeometryShaderCreationArgs@@AEBVCSignatureParser5@@PEAUD3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@@Z
    static void FillSODecls11(SD3D11LayeredGeometryShaderCreationArgs const * const, CSignatureParser5const &, D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCompletedPresents@CDevice@@UEAAJU_LUID@@PEAX@Z
    virtual long FlushCompletedPresents(_LUID, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushResourceDeletion@CDevice@@QEAAXPEBQEAUIDXGIResourceInternal@@I_NII11@Z
    void FlushResourceDeletion(IDXGIResourceInternal * const *, unsigned int, bool, unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceAdapterSharedResourceSupport@CDevice@@UEAAXXZ
    virtual void ForceAdapterSharedResourceSupport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceContinuableExceptions@CDevice@@UEAAXH@Z
    virtual void ForceContinuableExceptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterHandle@CDevice@@UEAAIXZ
    virtual unsigned int GetAdapterHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProtectionCaps@CDevice@@UEAAJPEBU_GUID@@0PEAUD3D11_VIDEO_CONTENT_PROTECTION_CAPS@@@Z
    virtual long GetContentProtectionCaps(_GUID const *, _GUID const *, D3D11_VIDEO_CONTENT_PROTECTION_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProtectionCapsInternal@CDevice@@QEAAJPEBU_GUID@@0PEAUD3D11_VIDEO_CONTENT_PROTECTION_CAPS@@PEAI@Z
    long GetContentProtectionCapsInternal(_GUID const *, _GUID const *, D3D11_VIDEO_CONTENT_PROTECTION_CAPS *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreHardwareFeatureLevel@CDevice@@UEAA?AW4D3D_FEATURE_LEVEL@@XZ
    virtual int GetCoreHardwareFeatureLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreationFlags@CDevice@@UEAAIXZ
    virtual unsigned int GetCreationFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCryptoSessionPrivateDataSize@CDevice@@UEAAJPEBU_GUID@@00PEAI1@Z
    virtual long GetCryptoSessionPrivateDataSize(_GUID const *, _GUID const *, _GUID const *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3D10FeatureLevel@CDevice@@QEAA?AW4D3D10_FEATURE_LEVEL1@@XZ
    int GetD3D10FeatureLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3DFeatureLevel@CDevice@@UEAA?AW4D3D_FEATURE_LEVEL@@XZ
    virtual int GetD3DFeatureLevel();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDebugHashFunc@CDevice@@UEAAPEAXXZ
    virtual void * GetDebugHashFunc();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceRemovedReason@CDevice@@UEAAJXZ
    virtual long GetDeviceRemovedReason();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriverDDIVersion@CDevice@@UEAA?AW4_D3D_DRIVER_DDI_VERSION@@XZ
    virtual int GetDriverDDIVersion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExceptionMode@CDevice@@UEAAIXZ
    virtual unsigned int GetExceptionMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGuardRect@CDevice@@UEAAXPEAUID3D11Texture2D@@PEAHPEAUtagRECT@@@Z
    virtual void GetGuardRect(ID3D11Texture2D *, int *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareProtectionTeardownCount@CDevice@@QEAAJPEAI@Z
    long GetHardwareProtectionTeardownCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmediateContext@CDevice@@UEAAXPEAPEAUID3D11DeviceContext@@@Z
    virtual void GetImmediateContext(ID3D11DeviceContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmediateContext1@CDevice@@UEAAXPEAPEAUID3D11DeviceContext1@@@Z
    virtual void GetImmediateContext1(ID3D11DeviceContext1* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmediateContext2@CDevice@@UEAAXPEAPEAUID3D11DeviceContext2@@@Z
    virtual void GetImmediateContext2(ID3D11DeviceContext2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmediateContext3@CDevice@@UEAAXPEAPEAUID3D11DeviceContext3@@@Z
    virtual void GetImmediateContext3(ID3D11DeviceContext3* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayeredChildSize@CDevice@@QEAA_KIPEBX_K@Z
    uint64_t GetLayeredChildSize(unsigned int, void const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultithreadProtected@CDevice@@UEAAHXZ
    virtual int GetMultithreadProtected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartnerCaps@CDevice@@UEAAIXZ
    virtual unsigned int GetPartnerCaps();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CDevice@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceTiling@CDevice@@UEAAXPEAUID3D11Resource@@PEAIPEAUD3D11_PACKED_MIP_DESC@@PEAUD3D11_TILE_SHAPE@@1IPEAUD3D11_SUBRESOURCE_TILING@@@Z
    virtual void GetResourceTiling(ID3D11Resource *, unsigned int *, D3D11_PACKED_MIP_DESC *, D3D11_TILE_SHAPE *, unsigned int *, unsigned int, D3D11_SUBRESOURCE_TILING *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwizzlePatternDesc@CDevice@@UEAAJIPEAUD3D11_SWIZZLE_PATTERN@@@Z
    virtual long GetSwizzlePatternDesc(unsigned int, D3D11_SWIZZLE_PATTERN *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwizzlePatterns@CDevice@@QEAAJIPEAW4D3DWDDM2_0DDI_SWIZZLE_PATTERN@@@Z
    long GetSwizzlePatterns(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextureLayout@CDevice@@UEAAJPEAUID3D11Resource@@IPEAW4D3D11_TEXTURE_LAYOUT@@PEAI@Z
    virtual long GetTextureLayout(ID3D11Resource *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoDecoderCaps@CDevice@@UEAAJPEBU_GUID@@IIPEBUDXGI_RATIONAL@@I0PEAI@Z
    virtual long GetVideoDecoderCaps(_GUID const *, unsigned int, unsigned int, DXGI_RATIONAL const *, unsigned int, _GUID const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoDecoderConfig@CDevice@@UEAAJPEBUD3D11_VIDEO_DECODER_DESC@@IPEAUD3D11_VIDEO_DECODER_CONFIG@@@Z
    virtual long GetVideoDecoderConfig(D3D11_VIDEO_DECODER_DESC const *, unsigned int, D3D11_VIDEO_DECODER_CONFIG *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoDecoderConfigCount@CDevice@@UEAAJPEBUD3D11_VIDEO_DECODER_DESC@@PEAI@Z
    virtual long GetVideoDecoderConfigCount(D3D11_VIDEO_DECODER_DESC const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoDecoderProfile@CDevice@@UEAAJIPEAU_GUID@@@Z
    virtual long GetVideoDecoderProfile(unsigned int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoDecoderProfileCount@CDevice@@UEAAIXZ
    virtual unsigned int GetVideoDecoderProfileCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_AddRef_Thk@CDevice@@SAKPEAUID3D10Device1@@@Z
    static unsigned long ID3D10Device1_AddRef_Thk(ID3D10Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CheckCounterInfo_@CDevice@@SAXPEAUID3D10Device1@@PEAUD3D10_COUNTER_INFO@@@Z
    static void ID3D10Device1_CheckCounterInfo_(ID3D10Device1*, D3D10_COUNTER_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CheckCounter_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_COUNTER_DESC@@PEAW4D3D10_COUNTER_TYPE@@PEAIPEAD34343@Z
    static long ID3D10Device1_CheckCounter_(ID3D10Device1*, D3D10_COUNTER_DESC const *, int *, unsigned int *, char *, unsigned int *, char *, unsigned int *, char *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CheckFormatSupport_@CDevice@@SAJPEAUID3D10Device1@@W4DXGI_FORMAT@@PEAI@Z
    static long ID3D10Device1_CheckFormatSupport_(ID3D10Device1*, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CheckMultisampleQualityLevels_@CDevice@@SAJPEAUID3D10Device1@@W4DXGI_FORMAT@@IPEAI@Z
    static long ID3D10Device1_CheckMultisampleQualityLevels_(ID3D10Device1*, int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateBlendState1_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_BLEND_DESC1@@PEAPEAUID3D10BlendState1@@@Z
    static long ID3D10Device1_CreateBlendState1_(ID3D10Device1*, D3D10_BLEND_DESC1const *, ID3D10BlendState1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateBlendState_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_BLEND_DESC@@PEAPEAUID3D10BlendState@@@Z
    static long ID3D10Device1_CreateBlendState_(ID3D10Device1*, D3D10_BLEND_DESC const *, ID3D10BlendState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateBuffer_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_BUFFER_DESC@@PEBUD3D10_SUBRESOURCE_DATA@@PEAPEAUID3D10Buffer@@@Z
    static long ID3D10Device1_CreateBuffer_(ID3D10Device1*, D3D10_BUFFER_DESC const *, D3D10_SUBRESOURCE_DATA const *, ID3D10Buffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateCounter_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_COUNTER_DESC@@PEAPEAUID3D10Counter@@@Z
    static long ID3D10Device1_CreateCounter_(ID3D10Device1*, D3D10_COUNTER_DESC const *, ID3D10Counter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateDepthStencilState_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_DEPTH_STENCIL_DESC@@PEAPEAUID3D10DepthStencilState@@@Z
    static long ID3D10Device1_CreateDepthStencilState_(ID3D10Device1*, D3D10_DEPTH_STENCIL_DESC const *, ID3D10DepthStencilState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateDepthStencilView_@CDevice@@SAJPEAUID3D10Device1@@PEAUID3D10Resource@@PEBUD3D10_DEPTH_STENCIL_VIEW_DESC@@PEAPEAUID3D10DepthStencilView@@@Z
    static long ID3D10Device1_CreateDepthStencilView_(ID3D10Device1*, ID3D10Resource *, D3D10_DEPTH_STENCIL_VIEW_DESC const *, ID3D10DepthStencilView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateGeometryShaderWithStreamOutput_@CDevice@@SAJPEAUID3D10Device1@@PEBX_KPEBUD3D10_SO_DECLARATION_ENTRY@@IIPEAPEAUID3D10GeometryShader@@@Z
    static long ID3D10Device1_CreateGeometryShaderWithStreamOutput_(ID3D10Device1*, void const *, uint64_t, D3D10_SO_DECLARATION_ENTRY const *, unsigned int, unsigned int, ID3D10GeometryShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateGeometryShader_@CDevice@@SAJPEAUID3D10Device1@@PEBX_KPEAPEAUID3D10GeometryShader@@@Z
    static long ID3D10Device1_CreateGeometryShader_(ID3D10Device1*, void const *, uint64_t, ID3D10GeometryShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateInputLayout_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_INPUT_ELEMENT_DESC@@IPEBX_KPEAPEAUID3D10InputLayout@@@Z
    static long ID3D10Device1_CreateInputLayout_(ID3D10Device1*, D3D10_INPUT_ELEMENT_DESC const *, unsigned int, void const *, uint64_t, ID3D10InputLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreatePixelShader_@CDevice@@SAJPEAUID3D10Device1@@PEBX_KPEAPEAUID3D10PixelShader@@@Z
    static long ID3D10Device1_CreatePixelShader_(ID3D10Device1*, void const *, uint64_t, ID3D10PixelShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreatePredicate_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_QUERY_DESC@@PEAPEAUID3D10Predicate@@@Z
    static long ID3D10Device1_CreatePredicate_(ID3D10Device1*, D3D10_QUERY_DESC const *, ID3D10Predicate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateQuery_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_QUERY_DESC@@PEAPEAUID3D10Query@@@Z
    static long ID3D10Device1_CreateQuery_(ID3D10Device1*, D3D10_QUERY_DESC const *, ID3D10Query * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateRasterizerState_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_RASTERIZER_DESC@@PEAPEAUID3D10RasterizerState@@@Z
    static long ID3D10Device1_CreateRasterizerState_(ID3D10Device1*, D3D10_RASTERIZER_DESC const *, ID3D10RasterizerState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateRenderTargetView_@CDevice@@SAJPEAUID3D10Device1@@PEAUID3D10Resource@@PEBUD3D10_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D10RenderTargetView@@@Z
    static long ID3D10Device1_CreateRenderTargetView_(ID3D10Device1*, ID3D10Resource *, D3D10_RENDER_TARGET_VIEW_DESC const *, ID3D10RenderTargetView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateSamplerState_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_SAMPLER_DESC@@PEAPEAUID3D10SamplerState@@@Z
    static long ID3D10Device1_CreateSamplerState_(ID3D10Device1*, D3D10_SAMPLER_DESC const *, ID3D10SamplerState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateShaderResourceView1_@CDevice@@SAJPEAUID3D10Device1@@PEAUID3D10Resource@@PEBUD3D10_SHADER_RESOURCE_VIEW_DESC1@@PEAPEAUID3D10ShaderResourceView1@@@Z
    static long ID3D10Device1_CreateShaderResourceView1_(ID3D10Device1*, ID3D10Resource *, D3D10_SHADER_RESOURCE_VIEW_DESC1const *, ID3D10ShaderResourceView1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateShaderResourceView_@CDevice@@SAJPEAUID3D10Device1@@PEAUID3D10Resource@@PEBUD3D10_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D10ShaderResourceView@@@Z
    static long ID3D10Device1_CreateShaderResourceView_(ID3D10Device1*, ID3D10Resource *, D3D10_SHADER_RESOURCE_VIEW_DESC const *, ID3D10ShaderResourceView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateTexture1D_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_TEXTURE1D_DESC@@PEBUD3D10_SUBRESOURCE_DATA@@PEAPEAUID3D10Texture1D@@@Z
    static long ID3D10Device1_CreateTexture1D_(ID3D10Device1*, D3D10_TEXTURE1D_DESC const *, D3D10_SUBRESOURCE_DATA const *, ID3D10Texture1D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateTexture2D_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_TEXTURE2D_DESC@@PEBUD3D10_SUBRESOURCE_DATA@@PEAPEAUID3D10Texture2D@@@Z
    static long ID3D10Device1_CreateTexture2D_(ID3D10Device1*, D3D10_TEXTURE2D_DESC const *, D3D10_SUBRESOURCE_DATA const *, ID3D10Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateTexture3D_@CDevice@@SAJPEAUID3D10Device1@@PEBUD3D10_TEXTURE3D_DESC@@PEBUD3D10_SUBRESOURCE_DATA@@PEAPEAUID3D10Texture3D@@@Z
    static long ID3D10Device1_CreateTexture3D_(ID3D10Device1*, D3D10_TEXTURE3D_DESC const *, D3D10_SUBRESOURCE_DATA const *, ID3D10Texture3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_CreateVertexShader_@CDevice@@SAJPEAUID3D10Device1@@PEBX_KPEAPEAUID3D10VertexShader@@@Z
    static long ID3D10Device1_CreateVertexShader_(ID3D10Device1*, void const *, uint64_t, ID3D10VertexShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_Flush_@CDevice@@SAXPEAUID3D10Device1@@@Z
    static void ID3D10Device1_Flush_(ID3D10Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_GetCreationFlags_@CDevice@@SAIPEAUID3D10Device1@@@Z
    static unsigned int ID3D10Device1_GetCreationFlags_(ID3D10Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_GetDeviceRemovedReason_@CDevice@@SAJPEAUID3D10Device1@@@Z
    static long ID3D10Device1_GetDeviceRemovedReason_(ID3D10Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_GetExceptionMode_@CDevice@@SAIPEAUID3D10Device1@@@Z
    static unsigned int ID3D10Device1_GetExceptionMode_(ID3D10Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_GetFeatureLevel_@CDevice@@SA?AW4D3D10_FEATURE_LEVEL1@@PEAUID3D10Device1@@@Z
    static int ID3D10Device1_GetFeatureLevel_(ID3D10Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_GetPrivateData_@CDevice@@SAJPEAUID3D10Device1@@AEBU_GUID@@PEAIPEAX@Z
    static long ID3D10Device1_GetPrivateData_(ID3D10Device1*, _GUID const &, unsigned int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_GetTextFilterSize_@CDevice@@SAXPEAUID3D10Device1@@PEAI1@Z
    static void ID3D10Device1_GetTextFilterSize_(ID3D10Device1*, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_OpenSharedResource_@CDevice@@SAJPEAUID3D10Device1@@PEAXAEBU_GUID@@PEAPEAX@Z
    static long ID3D10Device1_OpenSharedResource_(ID3D10Device1*, void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_QueryInterface_Thk@CDevice@@SAJPEAUID3D10Device1@@AEBU_GUID@@PEAPEAX@Z
    static long ID3D10Device1_QueryInterface_Thk(ID3D10Device1*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_Release_Thk@CDevice@@SAKPEAUID3D10Device1@@@Z
    static unsigned long ID3D10Device1_Release_Thk(ID3D10Device1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_SetExceptionMode_@CDevice@@SAJPEAUID3D10Device1@@I@Z
    static long ID3D10Device1_SetExceptionMode_(ID3D10Device1*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_SetPrivateDataInterface_@CDevice@@SAJPEAUID3D10Device1@@AEBU_GUID@@PEBUIUnknown@@@Z
    static long ID3D10Device1_SetPrivateDataInterface_(ID3D10Device1*, _GUID const &, IUnknown const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_SetPrivateData_@CDevice@@SAJPEAUID3D10Device1@@AEBU_GUID@@IPEBX@Z
    static long ID3D10Device1_SetPrivateData_(ID3D10Device1*, _GUID const &, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ID3D10Device1_SetTextFilterSize_@CDevice@@SAXPEAUID3D10Device1@@II@Z
    static void ID3D10Device1_SetTextFilterSize_(ID3D10Device1*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementConservativeFlushCount@CDevice@@QEAAXXZ
    void IncrementConservativeFlushCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSharedResource2DCreationParams@CDevice@@QEAAJPEBUD3D11_TEXTURE2D_DESC1@@IPEAX@Z
    long InitSharedResource2DCreationParams(D3D11_TEXTURE2D_DESC1const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is10Level9Active@CDevice@@UEAAHXZ
    virtual int Is10Level9Active();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBadHwDrmDeviceIdOrDriver@CDevice@@QEAAHXZ
    int IsBadHwDrmDeviceIdOrDriver();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsD3DDDIVersionOrLater@CDevice@@QEBA_NW4EDDIVersion@@I@Z
    bool IsD3DDDIVersionOrLater(int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDDIWDDM2_0BuildVersion0@CDevice@@QEAA_NXZ
    bool IsDDIWDDM2_0BuildVersion0();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDDIWDDM2_0BuildVersion5OrEarlier@CDevice@@QEAA_NXZ
    bool IsDDIWDDM2_0BuildVersion5OrEarlier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDDIWDDM2_0BuildVersion9OrLater@CDevice@@QEAA_NXZ
    bool IsDDIWDDM2_0BuildVersion9OrLater();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExplicitReferenceDriver@CDevice@@QEBA_NXZ
    bool IsExplicitReferenceDriver() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LLOBeginLayerDestruction@CDevice@@QEAAXXZ
    void LLOBeginLayerDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LLOCompleteLayerConstruction@CDevice@@QEAAJXZ
    long LLOCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CDevice@@UEAAXXZ
    virtual void Leave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapInternal@CDevice@@UEAAJPEAUID3D11Resource@@IIIPEAUD3D11_MAPPED_SUBRESOURCE@@PEAI22@Z
    virtual long MapInternal(ID3D11Resource *, unsigned int, unsigned int, unsigned int, D3D11_MAPPED_SUBRESOURCE *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultisampleRTVWithForcedSampleCountOneHWFL@CDevice@@QEBA_NXZ
    bool MultisampleRTVWithForcedSampleCountOneHWFL() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateCryptoSessionKeyExchangeMT@CDevice@@UEAAJPEAUID3D11CryptoSession@@W4D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS@@IPEAX@Z
    virtual long NegotiateCryptoSessionKeyExchangeMT(ID3D11CryptoSession *, int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResourcesInternal@CDevice@@UEAAJIPEBQEAUIDXGIResource@@W4_DXGI_OFFER_RESOURCE_PRIORITY@@I@Z
    virtual long OfferResourcesInternal(unsigned int, IDXGIResource * const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresent@CDevice@@QEAAXXZ
    void OnPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRender@CDevice@@QEAAX_N@Z
    void OnRender(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedFence@CDevice@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedFence(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@CDevice@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource1@CDevice@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource1(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceByName@CDevice@@UEAAJPEBGKAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResourceByName(unsigned short const *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceInternalImpl@CDevice@@QEAAJAEAUD3D11_DXGI_SHARED_RESOURCE@@AEAUSD3D11SharedResourceCreationArgs@@HAEBU_GUID@@PEAPEAX_N4PEAUID3D11LayeredUseCounted@@@Z
    long OpenSharedResourceInternalImpl(D3D11_DXGI_SHARED_RESOURCE &, SD3D11SharedResourceCreationArgs &, int, _GUID const &, void * *, bool, bool, ID3D11LayeredUseCounted *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceInternal_Worker@CDevice@@QEAAJPEAXHAEBU_GUID@@PEAPEAX_N3@Z
    long OpenSharedResourceInternal_Worker(void *, int, _GUID const &, void * *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSynchronizedChannel@CDevice@@UEAAJPEAXPEAPEAUID3D11SynchronizedChannel@@@Z
    virtual long OpenSynchronizedChannel(void *, ID3D11SynchronizedChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PSSpecifiedStencilRefSupported@CDevice@@QEBA_NXZ
    bool PSSpecifiedStencilRefSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PhysicalAdapterCount@CDevice@@QEBAIXZ
    unsigned int PhysicalAdapterCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCompositionBuffers@CDevice@@UEAAJPEAXPEBQEAUIUnknown@@I@Z
    virtual long PresentCompositionBuffers(void *, IUnknown * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentFlipManagerToken@CDevice@@UEAAJPEAX_K1IIPEBQEAUIUnknown@@I@Z
    virtual long PresentFlipManagerToken(void *, uint64_t, uint64_t, unsigned int, unsigned int, IUnknown * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CDevice@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIDeviceMobileCore@CDevice@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIDeviceMobileCore(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIDeviceTrackedWorkload@CDevice@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIDeviceTrackedWorkload(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIMultithread@CDevice@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIMultithread(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIVideoCapture@CDevice@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIVideoCapture(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIVideoDevice@CDevice@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIVideoDevice(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIWarpExtension@CDevice@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIWarpExtension(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ROVsSupported@CDevice@@QEBA_NXZ
    bool ROVsSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadFromSubresource@CDevice@@UEAAXPEAXIIPEAUID3D11Resource@@IPEBUD3D11_BOX@@@Z
    virtual void ReadFromSubresource(void *, unsigned int, unsigned int, ID3D11Resource *, unsigned int, D3D11_BOX const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResourcesInternal@CDevice@@UEAAJIPEBQEAUIDXGIResource@@PEAW4_DXGI_RECLAIM_RESOURCE_RESULTS@@@Z
    virtual long ReclaimResourcesInternal(unsigned int, IDXGIResource * const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendVideoDecoderDownsampleParameters@CDevice@@UEAAJPEBUD3D11_VIDEO_DECODER_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBUD3D11_VIDEO_DECODER_CONFIG@@PEBUDXGI_RATIONAL@@PEAUD3D11_VIDEO_SAMPLE_DESC@@@Z
    virtual long RecommendVideoDecoderDownsampleParameters(D3D11_VIDEO_DECODER_DESC const *, int, D3D11_VIDEO_DECODER_CONFIG const *, DXGI_RATIONAL const *, D3D11_VIDEO_SAMPLE_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecoverHardwareContentProtectionTeardown@CDevice@@QEAAXXZ
    void RecoverHardwareContentProtectionTeardown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDeviceRemovedEvent@CDevice@@UEAAJPEAXPEAK@Z
    virtual long RegisterDeviceRemovedEvent(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResource@CDevice@@QEAAXPEAUIDXGIResourceInternal@@@Z
    void ReleaseResource(IDXGIResourceInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDevice@CDevice@@UEAAXJ@Z
    virtual void RemoveDevice(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportRetailValidationError@CDevice@@UEAAXW4D3D11_MESSAGE_ID@@_K@Z
    virtual void ReportRetailValidationError(int, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllAmortized10@CDevice@@QEAAXXZ
    void SetAllAmortized10();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAmortizedRenderOperations10@CDevice@@QEAAXXZ
    void SetAmortizedRenderOperations10();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmptyGuardRect@CDevice@@UEAAXPEAUID3D11Texture2D@@@Z
    virtual void SetEmptyGuardRect(ID3D11Texture2D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExceptionMode@CDevice@@UEAAJI@Z
    virtual long SetExceptionMode(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGuardRect@CDevice@@UEAAXPEAUID3D11Texture2D@@UtagRECT@@@Z
    virtual void SetGuardRect(ID3D11Texture2D *, tagRECT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareProtection@CDevice@@QEAAJPEAV?$CResource@UID3D11Resource@@@@_N@Z
    long SetHardwareProtection(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultithreadProtected@CDevice@@UEAAHH@Z
    virtual int SetMultithreadProtected(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CDevice@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CDevice@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnguarded@CDevice@@UEAAXPEAUID3D11Texture2D@@@Z
    virtual void SetUnguarded(ID3D11Texture2D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCallAssignDebugBinary@CDevice@@QEBA_NXZ
    bool ShouldCallAssignDebugBinary() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsLevel9PerfFeatures@CDevice@@UEAAHXZ
    virtual int SupportsLevel9PerfFeatures();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TiledResourcesTier@CDevice@@QEBA?AW4D3D11_TILED_RESOURCES_TIER@@XZ
    int TiledResourcesTier() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerAmortizedRenderOperations10@CDevice@@QEAAXXZ
    void TriggerAmortizedRenderOperations10();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimRuntimeMemory@CDevice@@QEAAXXZ
    void TrimRuntimeMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TypedUAVLoadAdditionalFormats@CDevice@@QEBA_NXZ
    bool TypedUAVLoadAdditionalFormats() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TypedUAVLoadAtLeastMinimallySupported@CDevice@@QEBA_NXZ
    bool TypedUAVLoadAtLeastMinimallySupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UAVOnlyRenderingForcedSampleCountHWMFL@CDevice@@QEBA_NXZ
    bool UAVOnlyRenderingForcedSampleCountHWMFL() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDeviceRemoved@CDevice@@UEAAXK@Z
    virtual void UnregisterDeviceRemoved(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetAllAmortized10@CDevice@@QEAAXXZ
    void UnsetAllAmortized10();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetAmortizedAcquireResourceOperations10@CDevice@@QEAAXXZ
    void UnsetAmortizedAcquireResourceOperations10();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetAmortizedRenderOperations10@CDevice@@QEAAXXZ
    void UnsetAmortizedRenderOperations10();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WNFDeviceRemoved@CDevice@@QEAAXXZ
    void WNFDeviceRemoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WarpEscape@CDevice@@UEAAJPEAX@Z
    virtual long WarpEscape(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToSubresource@CDevice@@UEAAXPEAUID3D11Resource@@IPEBUD3D11_BOX@@PEBXII@Z
    virtual void WriteToSubresource(ID3D11Resource *, unsigned int, D3D11_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevice@@QEAA@XZ
    ~CDevice();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRasterizerStateDual@CDevice@@IEAAXPEAVCRasterizerState@@@Z
    void AddRasterizerStateDual(CRasterizerState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRasterizerStateDuals@CDevice@@IEAAXXZ
    void BeginRasterizerStateDuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndConvertIndirectMapCopyBox@CDevice@@IEBA_NPEAV?$CResource@UID3D11Resource@@@@IPEBUD3D11_BOX@@PEAU3@@Z
    bool CheckAndConvertIndirectMapCopyBox(WindissectOpaque *, unsigned int, D3D11_BOX const *, D3D11_BOX *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlendState_Worker@CDevice@@IEAAJPEBUD3D11_BLEND_DESC@@PEAPEAUID3D11BlendState@@_N@Z
    long CreateBlendState_Worker(D3D11_BLEND_DESC const *, ID3D11BlendState * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBuffer_Worker@CDevice@@IEAAJPEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@PEAUSD3D11SharedResourceCreationArgs@@_N@Z
    long CreateBuffer_Worker(D3D11_BUFFER_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Buffer * *, SD3D11SharedResourceCreationArgs *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCounter_Worker@CDevice@@IEAAJPEBUD3D11_COUNTER_DESC@@PEAPEAXAEBU_GUID@@_N@Z
    long CreateCounter_Worker(D3D11_COUNTER_DESC const *, void * *, _GUID const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDepthStencilState_Worker@CDevice@@IEAAJPEBUD3D11_DEPTH_STENCIL_DESC@@PEAPEAUID3D11DepthStencilState@@_N@Z
    long CreateDepthStencilState_Worker(D3D11_DEPTH_STENCIL_DESC const *, ID3D11DepthStencilState * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDepthStencilView_Worker@CDevice@@IEAAJPEAUID3D11Resource@@PEBUD3D11_DEPTH_STENCIL_VIEW_DESC@@PEAPEAUID3D11DepthStencilView@@_N@Z
    long CreateDepthStencilView_Worker(ID3D11Resource *, D3D11_DEPTH_STENCIL_VIEW_DESC const *, ID3D11DepthStencilView * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryShaderWithStreamOutput_Worker@CDevice@@IEAAJPEBX_KPEBUD3D11_SO_DECLARATION_ENTRY@@IPEBIIIPEAUID3D11ClassLinkage@@PEAPEAXAEBU_GUID@@_N@Z
    long CreateGeometryShaderWithStreamOutput_Worker(void const *, uint64_t, D3D11_SO_DECLARATION_ENTRY const *, unsigned int, unsigned int const *, unsigned int, unsigned int, ID3D11ClassLinkage *, void * *, _GUID const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryShader_Worker@CDevice@@IEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAXAEBU_GUID@@_N@Z
    long CreateGeometryShader_Worker(void const *, uint64_t, ID3D11ClassLinkage *, void * *, _GUID const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputLayout_Worker@CDevice@@IEAAJPEBUD3D11_INPUT_ELEMENT_DESC@@IPEBX_KPEAPEAUID3D11InputLayout@@_N@Z
    long CreateInputLayout_Worker(D3D11_INPUT_ELEMENT_DESC const *, unsigned int, void const *, uint64_t, ID3D11InputLayout * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePixelShader_Worker@CDevice@@IEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAXAEBU_GUID@@_N@Z
    long CreatePixelShader_Worker(void const *, uint64_t, ID3D11ClassLinkage *, void * *, _GUID const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePredicate_Worker@CDevice@@IEAAJPEBUD3D11_QUERY_DESC@@PEAPEAUID3D11Predicate@@_N@Z
    long CreatePredicate_Worker(D3D11_QUERY_DESC const *, ID3D11Predicate * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQuery_Worker@CDevice@@IEAAJPEBUD3D11_QUERY_DESC@@PEAPEAUID3D11Query@@_N@Z
    long CreateQuery_Worker(D3D11_QUERY_DESC const *, ID3D11Query * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQuery_Worker@CDevice@@IEAAJPEBUD3D11_QUERY_DESC1@@AEBU_GUID@@PEAPEAX_N@Z
    long CreateQuery_Worker(D3D11_QUERY_DESC1const *, _GUID const &, void * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRasterizerStateD3D10@CDevice@@IEAAJPEBUD3D10_RASTERIZER_DESC@@PEAPEAUID3D10RasterizerState@@@Z
    long CreateRasterizerStateD3D10(D3D10_RASTERIZER_DESC const *, ID3D10RasterizerState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRasterizerState_Worker@CDevice@@IEAAJPEBUD3D11_RASTERIZER_DESC2@@AEBU_GUID@@PEAPEAX_N@Z
    long CreateRasterizerState_Worker(D3D11_RASTERIZER_DESC2const *, _GUID const &, void * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetView_Worker@CDevice@@IEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC1@@AEBU_GUID@@PEAPEAX_N4@Z
    long CreateRenderTargetView_Worker(ID3D11Resource *, D3D11_RENDER_TARGET_VIEW_DESC1const *, _GUID const &, void * *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetView_Worker@CDevice@@IEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@_N@Z
    long CreateRenderTargetView_Worker(ID3D11Resource *, D3D11_RENDER_TARGET_VIEW_DESC const *, ID3D11RenderTargetView * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSamplerState_Worker@CDevice@@IEAAJPEBUD3D11_SAMPLER_DESC@@PEAPEAUID3D11SamplerState@@_N@Z
    long CreateSamplerState_Worker(D3D11_SAMPLER_DESC const *, ID3D11SamplerState * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderResourceView_Worker@CDevice@@IEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC1@@AEBU_GUID@@PEAPEAX_N4@Z
    long CreateShaderResourceView_Worker(ID3D11Resource *, D3D11_SHADER_RESOURCE_VIEW_DESC1const *, _GUID const &, void * *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShaderResourceView_Worker@CDevice@@IEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@_N@Z
    long CreateShaderResourceView_Worker(ID3D11Resource *, D3D11_SHADER_RESOURCE_VIEW_DESC const *, ID3D11ShaderResourceView * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture1D_Worker@CDevice@@IEAAJPEBUD3D11_TEXTURE1D_DESC@@W4D3D11_TEXTURE_LAYOUT@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture1D@@PEAUSD3D11SharedResourceCreationArgs@@_N5@Z
    long CreateTexture1D_Worker(D3D11_TEXTURE1D_DESC const *, int, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture1D * *, SD3D11SharedResourceCreationArgs *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture2D_Worker@CDevice@@IEAAJPEBUD3D11_TEXTURE2D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@W4CreateTex2DFlags@@PEAPEAUID3D11Texture2D1@@PEAUSD3D11SharedResourceCreationArgs@@PEAUID3D11LayeredUseCounted@@@Z
    long CreateTexture2D_Worker(D3D11_TEXTURE2D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, int, ID3D11Texture2D1* *, SD3D11SharedResourceCreationArgs *, ID3D11LayeredUseCounted *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture3D_Worker@CDevice@@IEAAJPEBUD3D11_TEXTURE3D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture3D1@@PEAUSD3D11SharedResourceCreationArgs@@_N4@Z
    long CreateTexture3D_Worker(D3D11_TEXTURE3D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Texture3D1* *, SD3D11SharedResourceCreationArgs *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUnorderedAccessView_Worker@CDevice@@IEAAJPEAUID3D11Resource@@PEBUD3D11_UNORDERED_ACCESS_VIEW_DESC1@@AEBU_GUID@@PEAPEAX_N@Z
    long CreateUnorderedAccessView_Worker(ID3D11Resource *, D3D11_UNORDERED_ACCESS_VIEW_DESC1const *, _GUID const &, void * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVertexShader_Worker@CDevice@@IEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAXAEBU_GUID@@_N@Z
    long CreateVertexShader_Worker(void const *, uint64_t, ID3D11ClassLinkage *, void * *, _GUID const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeDownSampleFormat@CDevice@@IEAA_NPEBU_GUID@@W4DXGI_FORMAT@@@Z
    bool DecodeDownSampleFormat(_GUID const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRasterizerStateDuals@CDevice@@IEAAXXZ
    void EndRasterizerStateDuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRSDual@CDevice@@IEAAPEAVCRasterizerState@@PEAV2@@Z
    CRasterizerState * EnsureRSDual(CRasterizerState *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCrossApiShareableTexture2D@CDevice@@IEAA_NPEBUD3D11_TEXTURE2D_DESC1@@@Z
    bool IsCrossApiShareableTexture2D(D3D11_TEXTURE2D_DESC1const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidVideoColorSpace@CDevice@@IEAA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    bool IsValidVideoColorSpace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateVideoDecoderProfiles@CDevice@@IEAAXXZ
    void PopulateVideoDecoderProfiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDecoderDesc@CDevice@@IEAAXPEBUD3D11_VIDEO_DECODER_DESC@@@Z
    void ValidateDecoderDesc(D3D11_VIDEO_DECODER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDecoderProfile@CDevice@@IEAAXPEBU_GUID@@@Z
    void ValidateDecoderProfile(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVideoProcessorContentDesc@CDevice@@IEAAXPEBUD3D11_VIDEO_PROCESSOR_CONTENT_DESC@@@Z
    void ValidateVideoProcessorContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC const *);
};
