#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CSignatureParser5 {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSignatureParser5@@QEAA@XZ
    CSignatureParser5();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RastSignature@CSignatureParser5@@QEBAPEBVCSignatureParser@@XZ
    CSignatureParser const * RastSignature() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSignature11_1@CSignatureParser5@@QEAAJPEBXI_N@Z
    long ReadSignature11_1(void const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSignature4@CSignatureParser5@@QEAAJPEBXI_N@Z
    long ReadSignature4(void const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSignature5@CSignatureParser5@@QEAAJPEBXI_N@Z
    long ReadSignature5(void const *, unsigned int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSignatureParser5@@QEAA@XZ
    ~CSignatureParser5();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CSignatureParser5@@AEAAXXZ
    void Cleanup();
};
