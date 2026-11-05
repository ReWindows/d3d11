#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 1 member(s).
class CCreateTexture2DValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCreateTexture2DValidator@@QEAAJPEBUD3D11_TEXTURE2D_DESC1@@PEBUD3D11_SUBRESOURCE_DATA@@PEAUID3D11Device2@@AEAIIPEBVCAPICaps@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@CD3D11FormatHelper@@_N7W4D3D11_TILED_RESOURCES_TIER@@7777@Z
    long Validate(D3D11_TEXTURE2D_DESC1const *, D3D11_SUBRESOURCE_DATA const *, ID3D11Device2*, unsigned int &, unsigned int, CAPICaps const *, int, int, bool, bool, int, bool, bool, bool, bool);
};
