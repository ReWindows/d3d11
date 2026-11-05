#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 9 member(s).
class CVideoProcessorEnum {
public:
    class CLS;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVideoProcessorFormat@CVideoProcessorEnum@@UEAAJW4DXGI_FORMAT@@PEAI@Z
    virtual long CheckVideoProcessorFormat(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVideoProcessorFormatConversion@CVideoProcessorEnum@@UEAAJW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@01PEAH@Z
    virtual long CheckVideoProcessorFormatConversion(int, int, int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoProcessorCaps@CVideoProcessorEnum@@UEAAJPEAUD3D11_VIDEO_PROCESSOR_CAPS@@@Z
    virtual long GetVideoProcessorCaps(D3D11_VIDEO_PROCESSOR_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoProcessorContentDesc@CVideoProcessorEnum@@UEAAJPEAUD3D11_VIDEO_PROCESSOR_CONTENT_DESC@@@Z
    virtual long GetVideoProcessorContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoProcessorCustomRate@CVideoProcessorEnum@@UEAAJIIPEAUD3D11_VIDEO_PROCESSOR_CUSTOM_RATE@@@Z
    virtual long GetVideoProcessorCustomRate(unsigned int, unsigned int, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoProcessorFilterRange@CVideoProcessorEnum@@UEAAJW4D3D11_VIDEO_PROCESSOR_FILTER@@PEAUD3D11_VIDEO_PROCESSOR_FILTER_RANGE@@@Z
    virtual long GetVideoProcessorFilterRange(int, D3D11_VIDEO_PROCESSOR_FILTER_RANGE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoProcessorRateConversionCaps@CVideoProcessorEnum@@UEAAJIPEAUD3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS@@@Z
    virtual long GetVideoProcessorRateConversionCaps(unsigned int, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheVideoProcessorCaps@CVideoProcessorEnum@@IEAAXXZ
    void CacheVideoProcessorCaps();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidLegacyFormatWithColorSpace@CVideoProcessorEnum@@IEAA_NW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z
    bool IsValidLegacyFormatWithColorSpace(int, int);
};
