#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class STiledResourceContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastAccessibleState@STiledResourceContext@@QEAAXPEAVCDevice@@@Z
    void BroadcastAccessibleState(CDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromTilePool@STiledResourceContext@@QEAAXPEAVCDevice@@@Z
    void RemoveFromTilePool(CDevice *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTilePool@STiledResourceContext@@QEAAXPEAV?$CResource@UID3D11Resource@@@@PEAUCLS@2@01@Z
    void SetTilePool(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
};
