#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CVideoProcessorOutputView {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVideoProcessorOutputView@@QEAA@AEBUTConstructorArgs@0@@Z
    CVideoProcessorOutputView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CVideoProcessorOutputView@@UEAAXPEAUD3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC@@@Z
    virtual void GetDesc(D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVideoProcessorOutputView@@QEAA@XZ
    ~CVideoProcessorOutputView();
};
