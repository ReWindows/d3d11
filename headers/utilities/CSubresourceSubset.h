#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CSubresourceSubset {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSubresourceSubset@@QEAA@AEBUD3D11_SHADER_RESOURCE_VIEW_DESC1@@@Z
    CSubresourceSubset(D3D11_SHADER_RESOURCE_VIEW_DESC1const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSubresourceSubset@@QEAA@AEBUD3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC@@W4DXGI_FORMAT@@@Z
    CSubresourceSubset(D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC const &, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSubresourceSubset@@QEAA@AEBUD3D11_UNORDERED_ACCESS_VIEW_DESC1@@@Z
    CSubresourceSubset(D3D11_UNORDERED_ACCESS_VIEW_DESC1const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSubresourceSubset@@QEAA@AEBUD3D11_DEPTH_STENCIL_VIEW_DESC@@@Z
    CSubresourceSubset(D3D11_DEPTH_STENCIL_VIEW_DESC const &);
};
