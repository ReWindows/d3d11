#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CDecodeBuffer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDecodeBuffer@@QEAA@PEAVCDecodeContext@@@Z
    CDecodeBuffer(CDecodeContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CDecodeBuffer@@QEAAXPEAPEAXPEAI@Z
    void GetBuffer(void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDecodeBuffer@@QEAAXPEAUD3D11_1DDI_VIDEO_DECODER_BUFFER_INFO@@_N@Z
    void Init(D3D11_1DDI_VIDEO_DECODER_BUFFER_INFO *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CDecodeBuffer@@QEAAXXZ
    void ReleaseBuffer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDecodeBuffer@@QEAA@XZ
    ~CDecodeBuffer();
};
