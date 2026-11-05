#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CSignatureParser {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSignatureParser@@QEAA@XZ
    CSignatureParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindParameter@CSignatureParser@@QEBAJPEBDIPEAPEAUD3D11_SIGNATURE_PARAMETER@@@Z
    long FindParameter(char const *, unsigned int, D3D11_SIGNATURE_PARAMETER * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSignature11_1@CSignatureParser@@QEAAJPEBXI_N@Z
    long ReadSignature11_1(void const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSignature4@CSignatureParser@@QEAAJPEBXI_N@Z
    long ReadSignature4(void const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSignature5@CSignatureParser@@QEAAJPEAUD3D11_SIGNATURE_PARAMETER@@PEAII@Z
    long ReadSignature5(D3D11_SIGNATURE_PARAMETER *, unsigned int *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSignatureParser@@QEAA@XZ
    ~CSignatureParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CSignatureParser@@AEAAXXZ
    void Cleanup();
};
