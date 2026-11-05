#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
namespace ATL {
class CComObjectRootBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalQueryInterface@CComObjectRootBase@ATL@@SAJPEAXPEBU_ATL_INTMAP_ENTRY@2@AEBU_GUID@@PEAPEAX@Z
    static long InternalQueryInterface(void *, WindissectOpaque const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OuterAddRef@CComObjectRootBase@ATL@@QEAAKXZ
    unsigned long OuterAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Chain@CComObjectRootBase@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long _Chain(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Delegate@CComObjectRootBase@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long _Delegate(void *, _GUID const &, void * *, uint64_t);
};
} // namespace ATL
