#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CPatchedDriverShaderCode {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPatchedDriverShaderCode@@QEAA@PEBXW4EDDIVersion@@_N0@Z
    CPatchedDriverShaderCode(void const *, int, bool, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPatchedDriverShaderCode@@QEAA@XZ
    ~CPatchedDriverShaderCode();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipPlaneMappingFromLegacyShader@CPatchedDriverShaderCode@@AEAAIPEBXPEAU_Clip_Plane_Constant_Mapping@1@@Z
    unsigned int GetClipPlaneMappingFromLegacyShader(void const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraverseOperand@CPatchedDriverShaderCode@@AEAAX_N@Z
    void TraverseOperand(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraverseShader@CPatchedDriverShaderCode@@AEAAXPEBI_N@Z
    void TraverseShader(unsigned int const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraverseTokens@CPatchedDriverShaderCode@@AEAAXI_N@Z
    void TraverseTokens(unsigned int, bool);
};
