#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CSafeDDIResource {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSafeDDIResource@@QEAA@AEBUSD3D11LayeredBufferCreationArgs@@@Z
    CSafeDDIResource(SD3D11LayeredBufferCreationArgs const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSafeDDIResource@@QEAA@AEBUSD3D11_3LayeredTexture2DCreationArgs@@_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@CD3D11FormatHelper@@@Z
    CSafeDDIResource(SD3D11_3LayeredTexture2DCreationArgs const &, bool, int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSafeDDIResource@@QEAA@AEBUSD3D11_3LayeredTexture3DCreationArgs@@W4DXGI_FORMAT@@@Z
    CSafeDDIResource(SD3D11_3LayeredTexture3DCreationArgs const &, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSafeDDIResource@@QEAA@AEBUSD3D11_3LayeredTexture1DCreationArgs@@@Z
    CSafeDDIResource(SD3D11_3LayeredTexture1DCreationArgs const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSafeDDIResource@@QEAA@XZ
    ~CSafeDDIResource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteConversionConstruction@CSafeDDIResource@@IEAAXIIIPEBUD3D11_SUBRESOURCE_DATA@@@Z
    void CompleteConversionConstruction(unsigned int, unsigned int, unsigned int, D3D11_SUBRESOURCE_DATA const *);
};
