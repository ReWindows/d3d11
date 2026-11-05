#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CDeviceContextState {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeviceContextState@@QEAA@AEBUTConstructorArgs@0@@Z
    CDeviceContextState(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDeviceContextState@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsD3D10_0Interface@CDeviceContextState@@QEBA_NXZ
    bool IsD3D10_0Interface() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceContextState@@QEAA@XZ
    ~CDeviceContextState();
};
