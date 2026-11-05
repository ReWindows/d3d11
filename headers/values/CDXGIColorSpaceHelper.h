#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class CDXGIColorSpaceHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFromLegacyColorSpace@CDXGIColorSpaceHelper@@SA?AW4DXGI_COLOR_SPACE_TYPE@@_NI000@Z
    static int ConvertFromLegacyColorSpace(bool, unsigned int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2020ColorSpace@CDXGIColorSpaceHelper@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool Is2020ColorSpace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is709ColorSpace@CDXGIColorSpaceHelper@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool Is709ColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRGBColorSpace@CDXGIColorSpaceHelper@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool IsRGBColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStudioColorSpace@CDXGIColorSpaceHelper@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool IsStudioColorSpace(int);
};
