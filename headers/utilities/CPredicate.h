#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 20 member(s).
class CPredicate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSize@CPredicate@@UEAAIXZ
    virtual unsigned int GetDataSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CPredicate@@UEAAXPEAUD3D11_QUERY_DESC@@@Z
    virtual void GetDesc(D3D11_QUERY_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CPredicate@@UEAAXPEAUD3D11_QUERY_DESC1@@@Z
    virtual void GetDesc1(D3D11_QUERY_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CPredicate@@UEAAXPEAPEAUID3D11Device@@@Z
    virtual void GetDevice(ID3D11Device * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CPredicate@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LUCDestroyStatus@CPredicate@@QEAA?AW4E_LUC_Destroy@@W42@@Z
    int LUCDestroyStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QID3D10@CPredicate@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QID3D10(void *, _GUID const &, void * *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CPredicate@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CPredicate@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
};
