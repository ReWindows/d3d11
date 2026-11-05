#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 1 member(s).
class CCreateUnorderedAccessViewValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCreateUnorderedAccessViewValidator@@QEAA_NPEAUID3D11Resource@@PEBUD3D11_UNORDERED_ACCESS_VIEW_DESC1@@PEAUID3D11Device@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@CD3D11FormatHelper@@H_NPEA_N@Z
    bool Validate(ID3D11Resource *, D3D11_UNORDERED_ACCESS_VIEW_DESC1const *, ID3D11Device *, int, int, int, bool, bool *);
};
