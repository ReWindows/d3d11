#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CVideoProcessorInputView {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVideoProcessorInputView@@QEAA@AEBUTConstructorArgs@0@@Z
    CVideoProcessorInputView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CVideoProcessorInputView@@UEAAXPEAUD3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC@@@Z
    virtual void GetDesc(D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVideoProcessorInputView@@QEAA@XZ
    ~CVideoProcessorInputView();
};
