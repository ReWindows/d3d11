#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 191 member(s).
class SWDC_Context {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewDataMemChunk@SWDC_Context@@QEAAPEAX_K0@Z
    void * AllocateNewDataMemChunk(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewDiscardDataMemChunk@SWDC_Context@@QEAAPEAXXZ
    void * AllocateNewDiscardDataMemChunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewUpdateDataMemChunk@SWDC_Context@@QEAAPEAXXZ
    void * AllocateNewUpdateDataMemChunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_AbandonCommandList_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_AbandonCommandList_(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CSSetUnorderedAccessViews_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D11DDI_HUNORDEREDACCESSVIEW@@PEBI@Z
    static void DDI_CSSetUnorderedAccessViews_(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D11DDI_HUNORDEREDACCESSVIEW const *, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcDeferredContextHandleSize_IC@SWDC_Context@@SA_KUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAX@Z
    static uint64_t DDI_CalcDeferredContextHandleSize_IC(D3D10DDI_HDEVICE, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateCommandListSize_IC@SWDC_Context@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATECOMMANDLIST@@@Z
    static uint64_t DDI_CalcPrivateCommandListSize_IC(D3D10DDI_HDEVICE, D3D11DDIARG_CREATECOMMANDLIST const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CalcPrivateDeferredContextSize_IC@SWDC_Context@@SA_KUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CALCPRIVATEDEFERREDCONTEXTSIZE@@@Z
    static uint64_t DDI_CalcPrivateDeferredContextSize_IC(D3D10DDI_HDEVICE, D3D11DDIARG_CALCPRIVATEDEFERREDCONTEXTSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CheckDeferredContextHandleSizes_IC@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAIPEAUD3D11DDI_HANDLESIZE@@@Z
    static void DDI_CheckDeferredContextHandleSizes_IC(D3D10DDI_HDEVICE, unsigned int *, D3D11DDI_HANDLESIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearDepthStencilView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILVIEW@@IME@Z
    static void DDI_ClearDepthStencilView_(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILVIEW, unsigned int, float, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearRenderTargetView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRENDERTARGETVIEW@@QEAM@Z
    static void DDI_ClearRenderTargetView_(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW, float * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearUnorderedAccessViewFloat_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HUNORDEREDACCESSVIEW@@QEBM@Z
    static void DDI_ClearUnorderedAccessViewFloat_(D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW, float const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearUnorderedAccessViewUint_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HUNORDEREDACCESSVIEW@@QEBI@Z
    static void DDI_ClearUnorderedAccessViewUint_(D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW, unsigned int const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ClearView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAXQEBMPEBUtagRECT@@I@Z
    static void DDI_ClearView_(D3D10DDI_HDEVICE, int, void *, float const * const, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CommandListExecute_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_CommandListExecute_(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ConstantBufferUpdateSubresourceUP11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXIII@Z
    static void DDI_ConstantBufferUpdateSubresourceUP11_1_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ConstantBufferUpdateSubresourceUP11_1_SSE2@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXIII@Z
    static void DDI_ConstantBufferUpdateSubresourceUP11_1_SSE2(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ConstantBufferUpdateSubresourceUP_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXII@Z
    static void DDI_ConstantBufferUpdateSubresourceUP_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ConstantBufferUpdateSubresourceUP_SSE2@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXII@Z
    static void DDI_ConstantBufferUpdateSubresourceUP_SSE2(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CopyStructureCount_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IUD3D11DDI_HUNORDEREDACCESSVIEW@@@Z
    static void DDI_CopyStructureCount_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D11DDI_HUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CopyTileMappings_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@12PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@I@Z
    static void DDI_CopyTileMappings_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CopyTiles_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@1_KI@Z
    static void DDI_CopyTiles_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, D3D10DDI_HRESOURCE, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateBlendState11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1_DDI_BLEND_DESC@@UD3D10DDI_HBLENDSTATE@@UD3D10DDI_HRTBLENDSTATE@@@Z
    static void DDI_CreateBlendState11_1_(D3D10DDI_HDEVICE, D3D11_1_DDI_BLEND_DESC const *, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateBlendState1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_1_DDI_BLEND_DESC@@UD3D10DDI_HBLENDSTATE@@UD3D10DDI_HRTBLENDSTATE@@@Z
    static void DDI_CreateBlendState1_(D3D10DDI_HDEVICE, D3D10_1_DDI_BLEND_DESC const *, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateBlendState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_BLEND_DESC@@UD3D10DDI_HBLENDSTATE@@UD3D10DDI_HRTBLENDSTATE@@@Z
    static void DDI_CreateBlendState_(D3D10DDI_HDEVICE, D3D10_DDI_BLEND_DESC const *, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateCommandList_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATECOMMANDLIST@@UD3D11DDI_HCOMMANDLIST@@UD3D11DDI_HRTCOMMANDLIST@@@Z
    static void DDI_CreateCommandList_(D3D10DDI_HDEVICE, D3D11DDIARG_CREATECOMMANDLIST const *, D3D11DDI_HCOMMANDLIST, D3D11DDI_HRTCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateCommandList_IC@SWDC_Context@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATECOMMANDLIST@@UD3D11DDI_HCOMMANDLIST@@UD3D11DDI_HRTCOMMANDLIST@@@Z
    static long DDI_CreateCommandList_IC(D3D10DDI_HDEVICE, D3D11DDIARG_CREATECOMMANDLIST const *, D3D11DDI_HCOMMANDLIST, D3D11DDI_HRTCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateComputeShader_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@@Z
    static void DDI_CreateComputeShader_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDeferredContext_IC@SWDC_Context@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEDEFERREDCONTEXT@@@Z
    static long DDI_CreateDeferredContext_IC(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEDEFERREDCONTEXT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDepthStencilState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_DEPTH_STENCIL_DESC@@UD3D10DDI_HDEPTHSTENCILSTATE@@UD3D10DDI_HRTDEPTHSTENCILSTATE@@@Z
    static void DDI_CreateDepthStencilState_(D3D10DDI_HDEVICE, D3D10_DDI_DEPTH_STENCIL_DESC const *, D3D10DDI_HDEPTHSTENCILSTATE, D3D10DDI_HRTDEPTHSTENCILSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDepthStencilView11_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEDEPTHSTENCILVIEW@@UD3D10DDI_HDEPTHSTENCILVIEW@@UD3D10DDI_HRTDEPTHSTENCILVIEW@@@Z
    static void DDI_CreateDepthStencilView11_(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEDEPTHSTENCILVIEW const *, D3D10DDI_HDEPTHSTENCILVIEW, D3D10DDI_HRTDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDepthStencilView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEDEPTHSTENCILVIEW@@UD3D10DDI_HDEPTHSTENCILVIEW@@UD3D10DDI_HRTDEPTHSTENCILVIEW@@@Z
    static void DDI_CreateDepthStencilView_(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEDEPTHSTENCILVIEW const *, D3D10DDI_HDEPTHSTENCILVIEW, D3D10DDI_HRTDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDomainShader11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateDomainShader11_1_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateDomainShader_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateDomainShader_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateElementLayout_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEELEMENTLAYOUT@@UD3D10DDI_HELEMENTLAYOUT@@UD3D10DDI_HRTELEMENTLAYOUT@@@Z
    static void DDI_CreateElementLayout_(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEELEMENTLAYOUT const *, D3D10DDI_HELEMENTLAYOUT, D3D10DDI_HRTELEMENTLAYOUT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShader11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShader11_1_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShaderWithStreamOutput11_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@UD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShaderWithStreamOutput11_(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShaderWithStreamOutput11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@UD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShaderWithStreamOutput11_1_(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShaderWithStreamOutput_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT@@UD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShaderWithStreamOutput_(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateGeometryShader_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateGeometryShader_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateHullShader11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateHullShader11_1_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateHullShader_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11DDIARG_TESSELLATION_IO_SIGNATURES@@@Z
    static void DDI_CreateHullShader_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11DDIARG_TESSELLATION_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreatePixelShader11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreatePixelShader11_1_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreatePixelShader_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreatePixelShader_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateQueryWDDM2_0_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATEQUERY@@UD3D10DDI_HQUERY@@UD3D10DDI_HRTQUERY@@@Z
    static void DDI_CreateQueryWDDM2_0_(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATEQUERY const *, D3D10DDI_HQUERY, D3D10DDI_HRTQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateQuery_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATEQUERY@@UD3D10DDI_HQUERY@@UD3D10DDI_HRTQUERY@@@Z
    static void DDI_CreateQuery_(D3D10DDI_HDEVICE, D3D10DDIARG_CREATEQUERY const *, D3D10DDI_HQUERY, D3D10DDI_HRTQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRasterizerState11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11_1_DDI_RASTERIZER_DESC@@UD3D10DDI_HRASTERIZERSTATE@@UD3D10DDI_HRTRASTERIZERSTATE@@@Z
    static void DDI_CreateRasterizerState11_1_(D3D10DDI_HDEVICE, D3D11_1_DDI_RASTERIZER_DESC const *, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRasterizerStateWDDM2_0_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDI_RASTERIZER_DESC@@UD3D10DDI_HRASTERIZERSTATE@@UD3D10DDI_HRTRASTERIZERSTATE@@@Z
    static void DDI_CreateRasterizerStateWDDM2_0_(D3D10DDI_HDEVICE, D3DWDDM2_0DDI_RASTERIZER_DESC const *, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRasterizerState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_RASTERIZER_DESC@@UD3D10DDI_HRASTERIZERSTATE@@UD3D10DDI_HRTRASTERIZERSTATE@@@Z
    static void DDI_CreateRasterizerState_(D3D10DDI_HDEVICE, D3D10_DDI_RASTERIZER_DESC const *, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRenderTargetViewWDDM2_0_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW@@UD3D10DDI_HRENDERTARGETVIEW@@UD3D10DDI_HRTRENDERTARGETVIEW@@@Z
    static void DDI_CreateRenderTargetViewWDDM2_0_(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW const *, D3D10DDI_HRENDERTARGETVIEW, D3D10DDI_HRTRENDERTARGETVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateRenderTargetView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATERENDERTARGETVIEW@@UD3D10DDI_HRENDERTARGETVIEW@@UD3D10DDI_HRTRENDERTARGETVIEW@@@Z
    static void DDI_CreateRenderTargetView_(D3D10DDI_HDEVICE, D3D10DDIARG_CREATERENDERTARGETVIEW const *, D3D10DDI_HRENDERTARGETVIEW, D3D10DDI_HRTRENDERTARGETVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateResource11_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATERESOURCE@@UD3D10DDI_HRESOURCE@@UD3D10DDI_HRTRESOURCE@@@Z
    static void DDI_CreateResource11_(D3D10DDI_HDEVICE, D3D11DDIARG_CREATERESOURCE const *, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateResource_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATERESOURCE@@UD3D10DDI_HRESOURCE@@UD3D10DDI_HRTRESOURCE@@@Z
    static void DDI_CreateResource_(D3D10DDI_HDEVICE, D3D10DDIARG_CREATERESOURCE const *, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateSampler_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_DDI_SAMPLER_DESC@@UD3D10DDI_HSAMPLER@@UD3D10DDI_HRTSAMPLER@@@Z
    static void DDI_CreateSampler_(D3D10DDI_HDEVICE, D3D10_DDI_SAMPLER_DESC const *, D3D10DDI_HSAMPLER, D3D10DDI_HRTSAMPLER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderCacheSession_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3DWDDM2_2DDI_HCACHESESSION@@UD3DWDDM2_2DDI_HRTCACHESESSION@@@Z
    static void DDI_CreateShaderCacheSession_(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_HCACHESESSION, D3DWDDM2_2DDI_HRTCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceView11_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceView11_(D3D10DDI_HDEVICE, D3D11DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceView1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10_1DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceView1_(D3D10DDI_HDEVICE, D3D10_1DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceViewWDDM2_0_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceViewWDDM2_0_(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateShaderResourceView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDIARG_CREATESHADERRESOURCEVIEW@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRTSHADERRESOURCEVIEW@@@Z
    static void DDI_CreateShaderResourceView_(D3D10DDI_HDEVICE, D3D10DDIARG_CREATESHADERRESOURCEVIEW const *, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateUnorderedAccessViewWDDM2_0_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW@@UD3D11DDI_HUNORDEREDACCESSVIEW@@UD3D11DDI_HRTUNORDEREDACCESSVIEW@@@Z
    static void DDI_CreateUnorderedAccessViewWDDM2_0_(D3D10DDI_HDEVICE, D3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW const *, D3D11DDI_HUNORDEREDACCESSVIEW, D3D11DDI_HRTUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateUnorderedAccessView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEUNORDEREDACCESSVIEW@@UD3D11DDI_HUNORDEREDACCESSVIEW@@UD3D11DDI_HRTUNORDEREDACCESSVIEW@@@Z
    static void DDI_CreateUnorderedAccessView_(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEUNORDEREDACCESSVIEW const *, D3D11DDI_HUNORDEREDACCESSVIEW, D3D11DDI_HRTUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVertexShader11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D11_1DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateVertexShader11_1_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D11_1DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_CreateVertexShader_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBIUD3D10DDI_HSHADER@@UD3D10DDI_HRTSHADER@@PEBUD3D10DDIARG_STAGE_IO_SIGNATURES@@@Z
    static void DDI_CreateVertexShader_(D3D10DDI_HDEVICE, unsigned int const *, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, D3D10DDIARG_STAGE_IO_SIGNATURES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyBlendState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HBLENDSTATE@@@Z
    static void DDI_DestroyBlendState_(D3D10DDI_HDEVICE, D3D10DDI_HBLENDSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyCommandList_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_DestroyCommandList_(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyCommandList_IC@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_DestroyCommandList_IC(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyDepthStencilState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILSTATE@@@Z
    static void DDI_DestroyDepthStencilState_(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyDepthStencilView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILVIEW@@@Z
    static void DDI_DestroyDepthStencilView_(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyDevice_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_DestroyDevice_(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyElementLayout_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HELEMENTLAYOUT@@@Z
    static void DDI_DestroyElementLayout_(D3D10DDI_HDEVICE, D3D10DDI_HELEMENTLAYOUT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyQuery_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@@Z
    static void DDI_DestroyQuery_(D3D10DDI_HDEVICE, D3D10DDI_HQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyRasterizerState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRASTERIZERSTATE@@@Z
    static void DDI_DestroyRasterizerState_(D3D10DDI_HDEVICE, D3D10DDI_HRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyRenderTargetView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRENDERTARGETVIEW@@@Z
    static void DDI_DestroyRenderTargetView_(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyResource_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@@Z
    static void DDI_DestroyResource_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroySampler_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSAMPLER@@@Z
    static void DDI_DestroySampler_(D3D10DDI_HDEVICE, D3D10DDI_HSAMPLER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyShaderCacheSession_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3DWDDM2_2DDI_HCACHESESSION@@@Z
    static void DDI_DestroyShaderCacheSession_(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_HCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyShaderResourceView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADERRESOURCEVIEW@@@Z
    static void DDI_DestroyShaderResourceView_(D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyShader_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADER@@@Z
    static void DDI_DestroyShader_(D3D10DDI_HDEVICE, D3D10DDI_HSHADER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DestroyUnorderedAccessView_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HUNORDEREDACCESSVIEW@@@Z
    static void DDI_DestroyUnorderedAccessView_(D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Discard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAXPEBUtagRECT@@I@Z
    static void DDI_Discard_(D3D10DDI_HDEVICE, int, void *, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DispatchIndirect_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_DispatchIndirect_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Dispatch_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@III@Z
    static void DDI_Dispatch_(D3D10DDI_HDEVICE, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawAuto_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_DrawAuto_(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawIndexedInstancedIndirect_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_DrawIndexedInstancedIndirect_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawIndexedInstanced_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIIHI@Z
    static void DDI_DrawIndexedInstanced_(D3D10DDI_HDEVICE, unsigned int, unsigned int, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawIndexed_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIH@Z
    static void DDI_DrawIndexed_(D3D10DDI_HDEVICE, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawInstancedIndirect_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_DrawInstancedIndirect_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DrawInstanced_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIII@Z
    static void DDI_DrawInstanced_(D3D10DDI_HDEVICE, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_Draw_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@II@Z
    static void DDI_Draw_(D3D10DDI_HDEVICE, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DynamicCIABufferMapDiscard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IW4D3D10_DDI_MAP@@IPEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void DDI_DynamicCIABufferMapDiscard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, int, unsigned int, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DynamicCIABufferMapDiscard_SSE2@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IW4D3D10_DDI_MAP@@IPEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void DDI_DynamicCIABufferMapDiscard_SSE2(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, int, unsigned int, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DynamicCIABufferMapNoOverwrite_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IW4D3D10_DDI_MAP@@IPEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void DDI_DynamicCIABufferMapNoOverwrite_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, int, unsigned int, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_DynamicResourceMapDiscard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IW4D3D10_DDI_MAP@@IPEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void DDI_DynamicResourceMapDiscard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, int, unsigned int, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_GenerateMips_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADERRESOURCEVIEW@@@Z
    static void DDI_GenerateMips_(D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetIndexBuffer_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@W4DXGI_FORMAT@@I@Z
    static void DDI_IaSetIndexBuffer_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetInputLayout_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HELEMENTLAYOUT@@@Z
    static void DDI_IaSetInputLayout_(D3D10DDI_HDEVICE, D3D10DDI_HELEMENTLAYOUT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetPrimitiveTopology_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@W4D3D10_DDI_PRIMITIVE_TOPOLOGY@@@Z
    static void DDI_IaSetPrimitiveTopology_(D3D10DDI_HDEVICE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_IaSetVertexBuffers_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HRESOURCE@@PEBI2@Z
    static void DDI_IaSetVertexBuffers_(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HRESOURCE const *, unsigned int const *, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_LargeConstantBufferUpdateSubresourceUP11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3D10_DDI_BOX@@PEBXII@Z
    static void DDI_LargeConstantBufferUpdateSubresourceUP11_1_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_LargeConstantBufferUpdateSubresourceUP_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBX@Z
    static void DDI_LargeConstantBufferUpdateSubresourceUP_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryBegin_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@@Z
    static void DDI_QueryBegin_(D3D10DDI_HDEVICE, D3D10DDI_HQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_QueryEnd_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@@Z
    static void DDI_QueryEnd_(D3D10DDI_HDEVICE, D3D10DDI_HQUERY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RecycleCommandList_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_RecycleCommandList_(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RecycleCreateCommandList_IC@SWDC_Context@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATECOMMANDLIST@@UD3D11DDI_HCOMMANDLIST@@UD3D11DDI_HRTCOMMANDLIST@@@Z
    static long DDI_RecycleCreateCommandList_IC(D3D10DDI_HDEVICE, D3D11DDIARG_CREATECOMMANDLIST const *, D3D11DDI_HCOMMANDLIST, D3D11DDI_HRTCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RecycleCreateDeferredContext_IC@SWDC_Context@@SAJUD3D10DDI_HDEVICE@@PEBUD3D11DDIARG_CREATEDEFERREDCONTEXT@@@Z
    static long DDI_RecycleCreateDeferredContext_IC(D3D10DDI_HDEVICE, D3D11DDIARG_CREATEDEFERREDCONTEXT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RecycleDestroyCommandList_IC@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D11DDI_HCOMMANDLIST@@@Z
    static void DDI_RecycleDestroyCommandList_IC(D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs11_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3D11DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs11_(D3D10DDI_HDEVICE, D3D11DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3D11_1DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs11_1_(D3D10DDI_HDEVICE, D3D11_1DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3D10_1DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs1_(D3D10DDI_HDEVICE, D3D10_1DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM1_3_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM1_3DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM1_3_(D3D10DDI_HDEVICE, D3DWDDM1_3DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_0M2_2_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_0M2_2DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_0M2_2_(D3D10DDI_HDEVICE, D3DWDDM2_0M2_2DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_0_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_0DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_0_(D3D10DDI_HDEVICE, D3DWDDM2_0DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_1DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_1_(D3D10DDI_HDEVICE, D3DWDDM2_1DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_2_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_2DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_2_(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncsWDDM2_6_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3DWDDM2_6DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncsWDDM2_6_(D3D10DDI_HDEVICE, D3DWDDM2_6DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_RelocateDeviceFuncs_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEAUD3D10DDI_DEVICEFUNCS@@@Z
    static void DDI_RelocateDeviceFuncs_(D3D10DDI_HDEVICE, D3D10DDI_DEVICEFUNCS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResizeTilePool_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@_K@Z
    static void DDI_ResizeTilePool_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceCopyRegion11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IIII1IPEBUD3D10_DDI_BOX@@I@Z
    static void DDI_ResourceCopyRegion11_1_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int, unsigned int, unsigned int, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceCopyRegion_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IIII1IPEBUD3D10_DDI_BOX@@@Z
    static void DDI_ResourceCopyRegion_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, unsigned int, unsigned int, unsigned int, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceCopy_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@1@Z
    static void DDI_ResourceCopy_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceReadAfterWriteHazard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@@Z
    static void DDI_ResourceReadAfterWriteHazard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceResolveSubresource_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I1IW4DXGI_FORMAT@@@Z
    static void DDI_ResourceResolveSubresource_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10DDI_HRESOURCE, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceUnmap_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@I@Z
    static void DDI_ResourceUnmap_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceUpdateSubresourceUP11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXIII@Z
    static void DDI_ResourceUpdateSubresourceUP11_1_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ResourceUpdateSubresourceUP_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3D10_DDI_BOX@@PEBXII@Z
    static void DDI_ResourceUpdateSubresourceUP_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SOSetTargets_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10DDI_HRESOURCE@@PEBI@Z
    static void DDI_SOSetTargets_(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10DDI_HRESOURCE const *, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetBlendState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HBLENDSTATE@@QEBMI@Z
    static void DDI_SetBlendState_(D3D10DDI_HDEVICE, D3D10DDI_HBLENDSTATE, float const * const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetDepthStencilState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HDEPTHSTENCILSTATE@@I@Z
    static void DDI_SetDepthStencilState_(D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILSTATE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetMarkerMode_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@W4D3DWDDM1_3DDI_MARKER_TYPE@@I@Z
    static void DDI_SetMarkerMode_(D3D10DDI_HDEVICE, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetMarker_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@@Z
    static void DDI_SetMarker_(D3D10DDI_HDEVICE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetPredication_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HQUERY@@H@Z
    static void DDI_SetPredication_(D3D10DDI_HDEVICE, D3D10DDI_HQUERY, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetRasterizerState_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRASTERIZERSTATE@@@Z
    static void DDI_SetRasterizerState_(D3D10DDI_HDEVICE, D3D10DDI_HRASTERIZERSTATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetRenderTargets11_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDI_HRENDERTARGETVIEW@@IIUD3D10DDI_HDEPTHSTENCILVIEW@@PEBUD3D11DDI_HUNORDEREDACCESSVIEW@@PEBIIIII@Z
    static void DDI_SetRenderTargets11_(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW const *, unsigned int, unsigned int, D3D10DDI_HDEPTHSTENCILVIEW, D3D11DDI_HUNORDEREDACCESSVIEW const *, unsigned int const *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetRenderTargets_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@PEBUD3D10DDI_HRENDERTARGETVIEW@@IIUD3D10DDI_HDEPTHSTENCILVIEW@@@Z
    static void DDI_SetRenderTargets_(D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW const *, unsigned int, unsigned int, D3D10DDI_HDEPTHSTENCILVIEW);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetScissorRects_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIPEBUtagRECT@@@Z
    static void DDI_SetScissorRects_(D3D10DDI_HDEVICE, unsigned int, unsigned int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetShaderCacheSession_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3DWDDM2_2DDI_HCACHESESSION@@@Z
    static void DDI_SetShaderCacheSession_(D3D10DDI_HDEVICE, D3DWDDM2_2DDI_HCACHESESSION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetTextFilterSize_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@II@Z
    static void DDI_SetTextFilterSize_(D3D10DDI_HDEVICE, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_SetViewports_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@IIPEBUD3D10_DDI_VIEWPORT@@@Z
    static void DDI_SetViewports_(D3D10DDI_HDEVICE, unsigned int, unsigned int, D3D10_DDI_VIEWPORT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_ShaderResourceViewReadAfterWriteHazard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HSHADERRESOURCEVIEW@@UD3D10DDI_HRESOURCE@@@Z
    static void DDI_ShaderResourceViewReadAfterWriteHazard_(D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRESOURCE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_TiledResourceBarrier_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@W4D3D11DDI_HANDLETYPE@@PEAX12@Z
    static void DDI_TiledResourceBarrier_(D3D10DDI_HDEVICE, int, void *, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_UpdateTileMappings_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@IPEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@1IPEBI44I@Z
    static void DDI_UpdateTileMappings_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, unsigned int, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, D3D10DDI_HRESOURCE, unsigned int, unsigned int const *, unsigned int const *, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DDI_UpdateTiles_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE@@PEBUD3DWDDM1_3DDI_TILE_REGION_SIZE@@PEBXI@Z
    static void DDI_UpdateTiles_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE const *, D3DWDDM1_3DDI_TILE_REGION_SIZE const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LargeDynamicBufferMapDiscard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void LargeDynamicBufferMapDiscard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LargeDynamicResourceMapDiscard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@AEBUSBlockInfo@@PEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void LargeDynamicResourceMapDiscard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, SBlockInfo const &, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediumConstantBufferUpdateSubresourceUP11_1_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3D10_DDI_BOX@@PEBXII@Z
    static void MediumConstantBufferUpdateSubresourceUP11_1_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediumConstantBufferUpdateSubresourceUP11_1_SSE2@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBUD3D10_DDI_BOX@@PEBXII@Z
    static void MediumConstantBufferUpdateSubresourceUP11_1_SSE2(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10_DDI_BOX const *, void const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediumConstantBufferUpdateSubresourceUP_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBX@Z
    static void MediumConstantBufferUpdateSubresourceUP_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediumConstantBufferUpdateSubresourceUP_SSE2@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEBX@Z
    static void MediumConstantBufferUpdateSubresourceUP_SSE2(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediumDynamicCIABufferMapDiscard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void MediumDynamicCIABufferMapDiscard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediumDynamicCIABufferMapDiscard_SSE2@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void MediumDynamicCIABufferMapDiscard_SSE2(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediumDynamicResourceMapDiscard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@AEBUSBlockInfo@@PEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void MediumDynamicResourceMapDiscard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, SBlockInfo const &, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@SWDC_Context@@QEAAXPEBUD3D11DDIARG_CREATEDEFERREDCONTEXT@@@Z
    void Reset(D3D11DDIARG_CREATEDEFERREDCONTEXT const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SWDC_Context@@QEAA@XZ
    SWDC_Context();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WTDynamicBufferMapDiscard_@SWDC_Context@@SAXUD3D10DDI_HDEVICE@@UD3D10DDI_HRESOURCE@@PEAUD3D10DDI_MAPPED_SUBRESOURCE@@@Z
    static void WTDynamicBufferMapDiscard_(D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_MAPPED_SUBRESOURCE *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SWDC_Context@@QEAA@XZ
    ~SWDC_Context();
};
