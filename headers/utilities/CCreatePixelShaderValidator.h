#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class CCreatePixelShaderValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCreatePixelShaderValidator@@QEAA_NPEBX_KPEAUID3D11ClassLinkage@@PEAUID3D11LayeredDevicePrivate@@W4D3D_FEATURE_LEVEL@@W4_D3D_DRIVER_DDI_VERSION@@HHHHIHHHW4D3D11_CONSERVATIVE_RASTERIZATION_TIER@@H@Z
    bool Validate(void const *, uint64_t, ID3D11ClassLinkage *, ID3D11LayeredDevicePrivate *, int, int, int, int, int, int, unsigned int, int, int, int, int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateShader@CCreatePixelShaderValidator@@IEAAXXZ
    void ValidateShader();
};
