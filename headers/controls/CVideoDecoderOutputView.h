#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CVideoDecoderOutputView {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVideoDecoderOutputView@@QEAA@AEBUTConstructorArgs@0@@Z
    CVideoDecoderOutputView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CVideoDecoderOutputView@@UEAAXPEAUD3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC@@@Z
    virtual void GetDesc(D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVideoDecoderOutputView@@QEAA@XZ
    ~CVideoDecoderOutputView();
};
