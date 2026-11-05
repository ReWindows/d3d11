#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 2 member(s).
class ETWRenamePrivateData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enabled@ETWRenamePrivateData@@QEBA_NXZ
    bool Enabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@ETWRenamePrivateData@@QEBAXAEBVCPrivateData@@0@Z
    void Write(CPrivateData const &, CPrivateData const &) const;
};
