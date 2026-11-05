#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class HazardTracking {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAcquired@HazardTracking@@QEAAX_NPEAV?$CResource@UID3D11Resource@@@@@Z
    void SetAcquired(bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotCommitted@HazardTracking@@QEAAX_NPEAV?$CResource@UID3D11Resource@@@@@Z
    void SetNotCommitted(bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffered@HazardTracking@@QEAAX_NPEAV?$CResource@UID3D11Resource@@@@@Z
    void SetOffered(bool, WindissectOpaque *);
};
