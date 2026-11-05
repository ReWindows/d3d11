#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 1 member(s).
class CCreateTexture1DValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCreateTexture1DValidator@@QEAAJPEBUD3D11_TEXTURE1D_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAUID3D11Device@@AEAIIPEBVCAPICaps@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@CD3D11FormatHelper@@_NW4D3D11_TILED_RESOURCES_TIER@@77@Z
    long Validate(D3D11_TEXTURE1D_DESC const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Device *, unsigned int &, unsigned int, CAPICaps const *, int, int, bool, int, bool, bool);
};
