#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 11 member(s).
namespace NOutermost {
class CDevice {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginLayeredChildCreation@CDevice@NOutermost@@UEAAXI@Z
    virtual void BeginLayeredChildCreation(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayeredChild@CDevice@NOutermost@@UEAAJIPEBX_KPEAUID3D11LayeredUseCounted@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateLayeredChild(unsigned int, void const *, uint64_t, ID3D11LayeredUseCounted *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndLayeredChildCreation@CDevice@NOutermost@@UEAAXI@Z
    virtual void EndLayeredChildCreation(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDeletionPool@CDevice@NOutermost@@QEAAX_N0@Z
    void FlushDeletionPool(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayeredChildSize@CDevice@NOutermost@@UEAA_KIPEBX_K@Z
    virtual uint64_t GetLayeredChildSize(unsigned int, void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LLOBeginLayerDestruction@CDevice@NOutermost@@UEAAXXZ
    virtual void LLOBeginLayerDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LLOCompleteLayerConstruction@CDevice@NOutermost@@UEAAJXZ
    virtual long LLOCompleteLayerConstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOEnter@CDevice@NOutermost@@UEAAXXZ
    virtual void LOEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOLeave@CDevice@NOutermost@@UEAAXXZ
    virtual void LOLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOTryEnter@CDevice@NOutermost@@UEAAHXZ
    virtual int LOTryEnter();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevice@NOutermost@@QEAA@XZ
    ~CDevice();
};
} // namespace NOutermost
