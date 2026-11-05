#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 30 member(s).
class CD3D11FormatHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?APIFormatExists@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static bool APIFormatExists(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateExtraPlanarRows@CD3D11FormatHelper@@SAJW4DXGI_FORMAT@@IAEAI@Z
    static long CalculateExtraPlanarRows(int, unsigned int, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMinimumRowMajorRowPitch@CD3D11FormatHelper@@SAJW4DXGI_FORMAT@@IAEAI@Z
    static long CalculateMinimumRowMajorRowPitch(int, unsigned int, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateResourceSize@CD3D11FormatHelper@@SAJIIIW4DXGI_FORMAT@@IIAEA_KPEAUD3D11_MAPPED_SUBRESOURCE@@@Z
    static long CalculateResourceSize(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int, uint64_t &, D3D11_MAPPED_SUBRESOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeCastEvenFullyTyped@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static bool CanBeCastEvenFullyTyped(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeHistogramAllowedForOutputFormatSupport@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@@Z
    static bool DecodeHistogramAllowedForOutputFormatSupport(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayableSupport@CD3D11FormatHelper@@SA?AW4D3D11_REQUIREMENTS@@W4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@_N@Z
    static int DisplayableSupport(int, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatExists@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static bool FormatExists(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByteAlignment@CD3D11FormatHelper@@SAIW4DXGI_FORMAT@@@Z
    static unsigned int GetByteAlignment(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentName@CD3D11FormatHelper@@SA?AW4D3D11_FORMAT_COMPONENT_NAME@@W4DXGI_FORMAT@@I@Z
    static int GetComponentName(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormat@CD3D11FormatHelper@@SA?AW4DXGI_FORMAT@@_KW4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static int GetFormat(uint64_t, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatCastSet@CD3D11FormatHelper@@SAPEBW4DXGI_FORMAT@@W42@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static int const * GetFormatCastSet(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentFormat@CD3D11FormatHelper@@SA?AW4DXGI_FORMAT@@W42@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static int GetParentFormat(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneParentFormat@CD3D11FormatHelper@@SA?AW4DXGI_FORMAT@@W42@I@Z
    static int GetPlaneParentFormat(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneSliceFromViewFormat@CD3D11FormatHelper@@SAIW4DXGI_FORMAT@@0@Z
    static unsigned int GetPlaneSliceFromViewFormat(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileShape@CD3D11FormatHelper@@SAXPEAUD3D11_TILE_SHAPE@@W4DXGI_FORMAT@@W4D3D11_RESOURCE_DIMENSION@@I@Z
    static void GetTileShape(D3D11_TILE_SHAPE *, int, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYCbCrChromaSubsampling@CD3D11FormatHelper@@SAXW4DXGI_FORMAT@@AEAI1@Z
    static void GetYCbCrChromaSubsampling(int, unsigned int &, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlockCompressFormat@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@@Z
    static bool IsBlockCompressFormat(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCrossD3DAPIShareableFormat@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static bool IsCrossD3DAPIShareableFormat(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOptionalFormat@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static bool IsOptionalFormat(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonOpaquePlanar@CD3D11FormatHelper@@SAHW4DXGI_FORMAT@@@Z
    static int NonOpaquePlanar(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonOpaquePlaneCount@CD3D11FormatHelper@@SAIW4DXGI_FORMAT@@@Z
    static unsigned int NonOpaquePlaneCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedResourceSupport@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static bool SharedResourceSupport(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TiledResourceSupport@CD3D11FormatHelper@@SA?AW4D3D11_REQUIREMENTS@@W4DXGI_FORMAT@@W4D3D11_RESOURCE_DIMENSION@@IW4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static int TiledResourceSupport(int, int, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UAVAtomicCompareStoreOrCompareExchangeSupport@CD3D11FormatHelper@@SA?AW4D3D11_REQUIREMENTS@@W4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static int UAVAtomicCompareStoreOrCompareExchangeSupport(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UAVTypedLoadSupport@CD3D11FormatHelper@@SA?AW4D3D11_REQUIREMENTS@@W4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static int UAVTypedLoadSupport(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidCastToR32UAV@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@0@Z
    static bool ValidCastToR32UAV(int, int);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailTableIndexThrow@CD3D11FormatHelper@@KAIW4DXGI_FORMAT@@@Z
    static unsigned int GetDetailTableIndexThrow(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFormats@CD3D11FormatHelper@@KAIW4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static unsigned int GetNumFormats(int, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequirementsTable@CD3D11FormatHelper@@CAPEBUFORMAT_REQUIREMENTS@1@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static WindissectOpaque const * GetRequirementsTable(int, int);
};
