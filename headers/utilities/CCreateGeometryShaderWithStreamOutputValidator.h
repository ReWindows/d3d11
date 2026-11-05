#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class CCreateGeometryShaderWithStreamOutputValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCreateGeometryShaderWithStreamOutputValidator@@QEAA_NPEBX_KPEAUID3D11ClassLinkage@@PEBUD3D11_SO_DECLARATION_ENTRY@@IPEBIIIPEAUID3D11LayeredDevicePrivate@@W4D3D_FEATURE_LEVEL@@W4_D3D_DRIVER_DDI_VERSION@@HHHPEAI8HHHH@Z
    bool Validate(void const *, uint64_t, ID3D11ClassLinkage *, D3D11_SO_DECLARATION_ENTRY const *, unsigned int, unsigned int const *, unsigned int, unsigned int, ID3D11LayeredDevicePrivate *, int, int, int, int, int, unsigned int *, unsigned int *, int, int, int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDecl@CCreateGeometryShaderWithStreamOutputValidator@@IEAAXXZ
    void ValidateDecl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateShader@CCreateGeometryShaderWithStreamOutputValidator@@IEAAXXZ
    void ValidateShader();
};
