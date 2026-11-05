#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class SWDC_WriteTrackedDynamicCIAB {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Discard@SWDC_WriteTrackedDynamicCIAB@@QEAAPEAXPEAUSWDC_Context@@PEAV?$CResource@UID3D11Resource@@@@@Z
    void * Discard(SWDC_Context *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeTracking@SWDC_WriteTrackedDynamicCIAB@@QEAAXPEAUSWDC_Context@@@Z
    void FinalizeTracking(SWDC_Context *);
};
