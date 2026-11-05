#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CCreateInputLayoutValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCreateInputLayoutValidator@@QEAAJPEBUD3D11_INPUT_ELEMENT_DESC@@PEAUID3D11Device@@IPEBX_KPEAUID3D11LayeredDevicePrivate@@PEBVCAPICaps@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@CD3D11FormatHelper@@_N8@Z
    long Validate(D3D11_INPUT_ELEMENT_DESC const *, ID3D11Device *, unsigned int, void const *, uint64_t, ID3D11LayeredDevicePrivate *, CAPICaps const *, int, int, bool, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInputElements@CCreateInputLayoutValidator@@IEAAXPEBVCAPICaps@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@CD3D11FormatHelper@@_N3@Z
    void ValidateInputElements(CAPICaps const *, int, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSignature@CCreateInputLayoutValidator@@IEAAXXZ
    void ValidateSignature();
};
