#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 7 member(s).
class CClassLinkage {
public:
    class CStringHash;
    class SStringTable;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@CClassLinkage@@QEAAXW4EStringTable@1@PEBDPEAI@Z
    void AddString(int, char const *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CClassLinkage@@QEAA@AEBUTConstructorArgs@0@@Z
    CClassLinkage(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClassInstance@CClassLinkage@@UEAAJPEBDIIIIPEAPEAUID3D11ClassInstance@@@Z
    virtual long CreateClassInstance(char const *, unsigned int, unsigned int, unsigned int, unsigned int, ID3D11ClassInstance * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInstance@CClassLinkage@@UEAAJPEBDIPEAPEAUID3D11ClassInstance@@@Z
    virtual long GetClassInstance(char const *, unsigned int, ID3D11ClassInstance * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CClassLinkage@@QEAAXW4EStringTable@1@IPEADPEA_K@Z
    void GetString(int, unsigned int, char *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CClassLinkage@@QEAA@XZ
    ~CClassLinkage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewClassInstance@CClassLinkage@@IEAAPEAUID3D11ClassInstance@@_NIIIIII@Z
    ID3D11ClassInstance * NewClassInstance(bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
};
