#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 70 member(s).
class CVideoProcessor {
public:
    class CLS;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustRectForFormat@CVideoProcessor@@UEAAHW4DXGI_FORMAT@@HPEAUtagRECT@@@Z
    virtual int AdjustRectForFormat(int, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Blt@CVideoProcessor@@UEAAJPEAUID3D11VideoProcessorOutputView@@IIPEBUD3D11_VIDEO_PROCESSOR_STREAM@@@Z
    virtual long Blt(ID3D11VideoProcessorOutputView *, unsigned int, unsigned int, D3D11_VIDEO_PROCESSOR_STREAM const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVideoProcessor@@QEAA@AEBUTConstructorArgs@0@@Z
    CVideoProcessor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckInputHazardTracking@CVideoProcessor@@QEAAXPEAVCVideoProcessorInputView@@@Z
    void CheckInputHazardTracking(CVideoProcessorInputView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOutputHazardTracking@CVideoProcessor@@QEAAPEBUtagRECT@@PEAVCVideoProcessorOutputView@@@Z
    tagRECT const * CheckOutputHazardTracking(CVideoProcessorOutputView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmulateGetBehaviorHints@CVideoProcessor@@UEAAJIIW4DXGI_FORMAT@@IPEBUD3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT@@PEAI@Z
    virtual long EmulateGetBehaviorHints(unsigned int, unsigned int, int, unsigned int, D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBehaviorHints@CVideoProcessor@@UEAAJIIW4DXGI_FORMAT@@IPEBUD3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT@@PEAIPEAH@Z
    virtual long GetBehaviorHints(unsigned int, unsigned int, int, unsigned int, D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentDesc@CVideoProcessor@@UEAAXPEAUD3D11_VIDEO_PROCESSOR_CONTENT_DESC@@@Z
    virtual void GetContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputAlphaFillMode@CVideoProcessor@@UEAAXPEAW4D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE@@PEAI@Z
    virtual void GetOutputAlphaFillMode(int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputBackgroundColor@CVideoProcessor@@UEAAXPEAHPEAUD3D11_VIDEO_COLOR@@@Z
    virtual void GetOutputBackgroundColor(int *, D3D11_VIDEO_COLOR *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputColorSpace@CVideoProcessor@@UEAAXPEAUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void GetOutputColorSpace(D3D11_VIDEO_PROCESSOR_COLOR_SPACE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputColorSpace1@CVideoProcessor@@UEAAXPEAW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void GetOutputColorSpace1(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputConstriction@CVideoProcessor@@UEAAXPEAHPEAUtagSIZE@@@Z
    virtual void GetOutputConstriction(int *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputExtension@CVideoProcessor@@UEAAJPEBU_GUID@@IPEAX@Z
    virtual long GetOutputExtension(_GUID const *, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputFramesForCustomRate@CVideoProcessor@@QEAAIPEBUDXGI_RATIONAL@@W4D3D11_VIDEO_FRAME_FORMAT@@@Z
    unsigned int GetOutputFramesForCustomRate(DXGI_RATIONAL const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputHDRMetaData@CVideoProcessor@@QEAAXPEAW4DXGI_HDR_METADATA_TYPE@@IPEAX@Z
    void GetOutputHDRMetaData(int *, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputShaderUsage@CVideoProcessor@@UEAAXPEAH@Z
    virtual void GetOutputShaderUsage(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStereoMode@CVideoProcessor@@UEAAXPEAH@Z
    virtual void GetOutputStereoMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputTargetRect@CVideoProcessor@@UEAAXPEAHPEAUtagRECT@@@Z
    virtual void GetOutputTargetRect(int *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRateConversionCaps@CVideoProcessor@@UEAAXPEAUD3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS@@@Z
    virtual void GetRateConversionCaps(D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamAlpha@CVideoProcessor@@UEAAXIPEAHPEAM@Z
    virtual void GetStreamAlpha(unsigned int, int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamAutoProcessingMode@CVideoProcessor@@UEAAXIPEAH@Z
    virtual void GetStreamAutoProcessingMode(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamColorSpace@CVideoProcessor@@UEAAXIPEAUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void GetStreamColorSpace(unsigned int, D3D11_VIDEO_PROCESSOR_COLOR_SPACE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamColorSpace1@CVideoProcessor@@UEAAXIPEAW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void GetStreamColorSpace1(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamDestRect@CVideoProcessor@@UEAAXIPEAHPEAUtagRECT@@@Z
    virtual void GetStreamDestRect(unsigned int, int *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamExtension@CVideoProcessor@@UEAAJIPEBU_GUID@@IPEAX@Z
    virtual long GetStreamExtension(unsigned int, _GUID const *, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamFilter@CVideoProcessor@@UEAAXIW4D3D11_VIDEO_PROCESSOR_FILTER@@PEAH1@Z
    virtual void GetStreamFilter(unsigned int, int, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamFrameFormat@CVideoProcessor@@UEAAXIPEAW4D3D11_VIDEO_FRAME_FORMAT@@@Z
    virtual void GetStreamFrameFormat(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamHDRMetaData@CVideoProcessor@@QEAAXIPEAW4DXGI_HDR_METADATA_TYPE@@IPEAX@Z
    void GetStreamHDRMetaData(unsigned int, int *, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamLumaKey@CVideoProcessor@@UEAAXIPEAHPEAM1@Z
    virtual void GetStreamLumaKey(unsigned int, int *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamMirror@CVideoProcessor@@UEAAXIPEAH00@Z
    virtual void GetStreamMirror(unsigned int, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamOutputRate@CVideoProcessor@@UEAAXIPEAW4D3D11_VIDEO_PROCESSOR_OUTPUT_RATE@@PEAHPEAUDXGI_RATIONAL@@@Z
    virtual void GetStreamOutputRate(unsigned int, int *, int *, DXGI_RATIONAL *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamPalette@CVideoProcessor@@UEAAXIIPEAI@Z
    virtual void GetStreamPalette(unsigned int, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamPixelAspectRatio@CVideoProcessor@@UEAAXIPEAHPEAUDXGI_RATIONAL@@1@Z
    virtual void GetStreamPixelAspectRatio(unsigned int, int *, DXGI_RATIONAL *, DXGI_RATIONAL *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamRotation@CVideoProcessor@@UEAAXIPEAHPEAW4D3D11_VIDEO_PROCESSOR_ROTATION@@@Z
    virtual void GetStreamRotation(unsigned int, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamSourceRect@CVideoProcessor@@UEAAXIPEAHPEAUtagRECT@@@Z
    virtual void GetStreamSourceRect(unsigned int, int *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamStereoFormat@CVideoProcessor@@UEAAXIPEAHPEAW4D3D11_VIDEO_PROCESSOR_STEREO_FORMAT@@00PEAW4D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE@@0@Z
    virtual void GetStreamStereoFormat(unsigned int, int *, int *, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitRateAndFilterRange@CVideoProcessor@@QEAAXPEAUVP_INPUT_STREAM_STATE@@PEBUD3D11_VIDEO_PROCESSOR_FILTER_RANGE@@PEAUD3D11_VIDEO_PROCESSOR_CUSTOM_RATE@@@Z
    void InitRateAndFilterRange(VP_INPUT_STREAM_STATE *, D3D11_VIDEO_PROCESSOR_FILTER_RANGE const *, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitState@CVideoProcessor@@QEAAXXZ
    void InitState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLegacyOutputColorSpace@CVideoProcessor@@QEAAXUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@W4DXGI_FORMAT@@@Z
    void SetLegacyOutputColorSpace(D3D11_VIDEO_PROCESSOR_COLOR_SPACE, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLegacyStreamColorSpace@CVideoProcessor@@QEAAXIUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@W4DXGI_FORMAT@@@Z
    void SetLegacyStreamColorSpace(unsigned int, D3D11_VIDEO_PROCESSOR_COLOR_SPACE, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputAlphaFillMode@CVideoProcessor@@UEAAXW4D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE@@I@Z
    virtual void SetOutputAlphaFillMode(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputBackgroundColor@CVideoProcessor@@UEAAXHPEBUD3D11_VIDEO_COLOR@@@Z
    virtual void SetOutputBackgroundColor(int, D3D11_VIDEO_COLOR const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputColorSpace@CVideoProcessor@@UEAAXPEBUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void SetOutputColorSpace(D3D11_VIDEO_PROCESSOR_COLOR_SPACE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputColorSpace1@CVideoProcessor@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetOutputColorSpace1(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputConstriction@CVideoProcessor@@UEAAXHUtagSIZE@@@Z
    virtual void SetOutputConstriction(int, tagSIZE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputExtension@CVideoProcessor@@UEAAJPEBU_GUID@@IPEAX@Z
    virtual long SetOutputExtension(_GUID const *, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputHDRMetaData@CVideoProcessor@@QEAAXW4DXGI_HDR_METADATA_TYPE@@IPEBX@Z
    void SetOutputHDRMetaData(int, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputShaderUsage@CVideoProcessor@@UEAAXH@Z
    virtual void SetOutputShaderUsage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputStereoMode@CVideoProcessor@@UEAAXH@Z
    virtual void SetOutputStereoMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputTargetRect@CVideoProcessor@@UEAAXHPEBUtagRECT@@@Z
    virtual void SetOutputTargetRect(int, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamAlpha@CVideoProcessor@@UEAAXIHM@Z
    virtual void SetStreamAlpha(unsigned int, int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamAutoProcessingMode@CVideoProcessor@@UEAAXIH@Z
    virtual void SetStreamAutoProcessingMode(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamColorSpace@CVideoProcessor@@UEAAXIPEBUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    virtual void SetStreamColorSpace(unsigned int, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamColorSpace1@CVideoProcessor@@UEAAXIW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetStreamColorSpace1(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamDestRect@CVideoProcessor@@UEAAXIHPEBUtagRECT@@@Z
    virtual void SetStreamDestRect(unsigned int, int, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamExtension@CVideoProcessor@@UEAAJIPEBU_GUID@@IPEAX@Z
    virtual long SetStreamExtension(unsigned int, _GUID const *, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamFilter@CVideoProcessor@@UEAAXIW4D3D11_VIDEO_PROCESSOR_FILTER@@HH@Z
    virtual void SetStreamFilter(unsigned int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamFrameFormat@CVideoProcessor@@UEAAXIW4D3D11_VIDEO_FRAME_FORMAT@@@Z
    virtual void SetStreamFrameFormat(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamHDRMetaData@CVideoProcessor@@QEAAXIW4DXGI_HDR_METADATA_TYPE@@IPEBX@Z
    void SetStreamHDRMetaData(unsigned int, int, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamLumaKey@CVideoProcessor@@UEAAXIHMM@Z
    virtual void SetStreamLumaKey(unsigned int, int, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamMirror@CVideoProcessor@@UEAAXIHHH@Z
    virtual void SetStreamMirror(unsigned int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamOutputRate@CVideoProcessor@@UEAAXIW4D3D11_VIDEO_PROCESSOR_OUTPUT_RATE@@HPEBUDXGI_RATIONAL@@@Z
    virtual void SetStreamOutputRate(unsigned int, int, int, DXGI_RATIONAL const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamPalette@CVideoProcessor@@UEAAXIIPEBI@Z
    virtual void SetStreamPalette(unsigned int, unsigned int, unsigned int const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamPixelAspectRatio@CVideoProcessor@@UEAAXIHPEBUDXGI_RATIONAL@@0@Z
    virtual void SetStreamPixelAspectRatio(unsigned int, int, DXGI_RATIONAL const *, DXGI_RATIONAL const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamRotation@CVideoProcessor@@UEAAXIHW4D3D11_VIDEO_PROCESSOR_ROTATION@@@Z
    virtual void SetStreamRotation(unsigned int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamSourceRect@CVideoProcessor@@UEAAXIHPEBUtagRECT@@@Z
    virtual void SetStreamSourceRect(unsigned int, int, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamStereoFormat@CVideoProcessor@@UEAAXIHW4D3D11_VIDEO_PROCESSOR_STEREO_FORMAT@@HHW4D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE@@H@Z
    virtual void SetStreamStereoFormat(unsigned int, int, int, int, int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVideoProcessor@@QEAA@XZ
    ~CVideoProcessor();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToLegacyColorSpace@CVideoProcessor@@IEAAXW4DXGI_COLOR_SPACE_TYPE@@PEAUD3D11_VIDEO_PROCESSOR_COLOR_SPACE@@@Z
    void ConvertToLegacyColorSpace(int, D3D11_VIDEO_PROCESSOR_COLOR_SPACE *);
};
