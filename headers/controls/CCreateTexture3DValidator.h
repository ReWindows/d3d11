#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 1 member(s).
class CCreateTexture3DValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCreateTexture3DValidator@@QEAAJPEBUD3D11_TEXTURE3D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@PEAUID3D11Device@@AEAIIPEBVCAPICaps@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@CD3D11FormatHelper@@_N777W4D3D11_TILED_RESOURCES_TIER@@@Z
    long Validate(D3D11_TEXTURE3D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Device *, unsigned int &, unsigned int, CAPICaps const *, int, int, bool, bool, bool, bool, int);
};
