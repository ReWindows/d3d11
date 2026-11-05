#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 20 member(s).
class CDecodeContext {
public:
    class CLS;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFrame@CDecodeContext@@UEAAJPEAUID3D11VideoDecoderOutputView@@PEBXIIPEBIPEBQEAUID3D11Buffer@@@Z
    virtual long BeginFrame(ID3D11VideoDecoderOutputView *, void const *, unsigned int, unsigned int, unsigned int const *, ID3D11Buffer * const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDecodeContext@@QEAA@AEBUTConstructorArgs@0@@Z
    CDecodeContext(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeExtension@CDecodeContext@@UEAAJPEBUD3D11_VIDEO_DECODER_EXTENSION@@@Z
    virtual long DecodeExtension(D3D11_VIDEO_DECODER_EXTENSION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDownsampling@CDecodeContext@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@PEBUD3D11_VIDEO_SAMPLE_DESC@@I@Z
    virtual long EnableDownsampling(int, D3D11_VIDEO_SAMPLE_DESC const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrame@CDecodeContext@@UEAAJXZ
    virtual long EndFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CDecodeContext@@QEAAXAEBUTConstructorArgs@1@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDecodeContext@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CDecodeContext@@UEAAJW4D3D11_VIDEO_DECODER_BUFFER_TYPE@@PEAIPEAPEAX@Z
    virtual long GetBuffer(int, unsigned int *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreationParameters@CDecodeContext@@UEAAJPEAUD3D11_VIDEO_DECODER_DESC@@PEAUD3D11_VIDEO_DECODER_CONFIG@@@Z
    virtual long GetCreationParameters(D3D11_VIDEO_DECODER_DESC *, D3D11_VIDEO_DECODER_CONFIG *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriverHandle@CDecodeContext@@UEAAJPEAPEAX@Z
    virtual long GetDriverHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CDecodeContext@@UEAAJW4D3D11_VIDEO_DECODER_BUFFER_TYPE@@@Z
    virtual long ReleaseBuffer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffers@CDecodeContext@@UEAAJIPEBUD3D11_VIDEO_DECODER_BUFFER_DESC@@@Z
    virtual long SubmitBuffers(unsigned int, D3D11_VIDEO_DECODER_BUFFER_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffers1@CDecodeContext@@UEAAJIPEBUD3D11_VIDEO_DECODER_BUFFER_DESC1@@@Z
    virtual long SubmitBuffers1(unsigned int, D3D11_VIDEO_DECODER_BUFFER_DESC1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffers2@CDecodeContext@@UEAAJIPEBUD3D11_VIDEO_DECODER_BUFFER_DESC2@@@Z
    virtual long SubmitBuffers2(unsigned int, D3D11_VIDEO_DECODER_BUFFER_DESC2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffersImpl@CDecodeContext@@QEAAJI@Z
    long SubmitBuffersImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDownsampling@CDecodeContext@@UEAAJPEBUD3D11_VIDEO_SAMPLE_DESC@@@Z
    virtual long UpdateDownsampling(D3D11_VIDEO_SAMPLE_DESC const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDecodeContext@@QEAA@XZ
    ~CDecodeContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrowDDIDecodeBufferDesc@CDecodeContext@@IEAAPEAUD3DWDDM2_4DDI_VIDEO_DECODER_BUFFER_DESC@@I@Z
    D3DWDDM2_4DDI_VIDEO_DECODER_BUFFER_DESC * GrowDDIDecodeBufferDesc(unsigned int);
};
