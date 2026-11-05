#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 14 member(s).
class CD3D11TelemetryHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3D11TelemetryHelper@@QEAA@XZ
    CD3D11TelemetryHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateDeviceEvent@CD3D11TelemetryHelper@@QEAAXPEAXW4D3D_DRIVER_TYPE@@PEBW4D3D_FEATURE_LEVEL@@IW43@3U_LUID@@PEBUD3D11_FEATURE_DATA_D3D11_OPTIONS@@W4D3D11_TILED_RESOURCES_TIER@@W4D3D11On12Reason@@@Z
    void LogCreateDeviceEvent(void *, int, int const *, unsigned int, int, int, _LUID, D3D11_FEATURE_DATA_D3D11_OPTIONS const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInvalidUpdateSubresourceOnSwapChainBuffersEvent@CD3D11TelemetryHelper@@QEAAXPEAUID3D11Resource@@@Z
    void LogInvalidUpdateSubresourceOnSwapChainBuffersEvent(ID3D11Resource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogRemoveDeviceEvent@CD3D11TelemetryHelper@@QEAAXPEAXJU_LUID@@W4_D3DKMT_DEVICEEXECUTION_STATE@@@Z
    void LogRemoveDeviceEvent(void *, long, _LUID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTextureUINTViewUsage@CD3D11TelemetryHelper@@QEAAXW4DXGI_FORMAT@@@Z
    void LogTextureUINTViewUsage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTextureUsage@CD3D11TelemetryHelper@@QEAAXW4DXGI_FORMAT@@W4D3D11_TEXTURE_LAYOUT@@I@Z
    void LogTextureUsage(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogVideoDecoderStats@CD3D11TelemetryHelper@@QEAAXAEAUVideoDecoderData@@AEAUD3D11_VIDEO_DECODER_DESC@@@Z
    void LogVideoDecoderStats(VideoDecoderData &, D3D11_VIDEO_DECODER_DESC &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogVideoProcessorSetStreamAlpha@CD3D11TelemetryHelper@@QEAAXIHM@Z
    void LogVideoProcessorSetStreamAlpha(unsigned int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogVideoProcessorSetStreamAutoProcessingMode@CD3D11TelemetryHelper@@QEAAXIH@Z
    void LogVideoProcessorSetStreamAutoProcessingMode(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogVideoProcessorSetStreamFilter@CD3D11TelemetryHelper@@QEAAXIIHH@Z
    void LogVideoProcessorSetStreamFilter(unsigned int, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogVideoProcessorSetStreamFrameFormat@CD3D11TelemetryHelper@@QEAAXIW4D3D11_VIDEO_FRAME_FORMAT@@@Z
    void LogVideoProcessorSetStreamFrameFormat(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogVideoProcessorSetStreamLumaKey@CD3D11TelemetryHelper@@QEAAXIH@Z
    void LogVideoProcessorSetStreamLumaKey(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogVideoProcessorStreamUsage@CD3D11TelemetryHelper@@QEAAXII@Z
    void LogVideoProcessorStreamUsage(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D11TelemetryHelper@@QEAA@XZ
    ~CD3D11TelemetryHelper();
};
