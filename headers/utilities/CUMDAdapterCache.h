#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 8 member(s).
namespace CCreateDeviceCache {
class CUMDAdapterCache {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUMDAdapterCache@CCreateDeviceCache@@QEAA@XZ
    CUMDAdapterCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUMDExists@CUMDAdapterCache@CCreateDeviceCache@@QEBA_NXZ
    bool CheckUMDExists() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachAdapter10@CUMDAdapterCache@CCreateDeviceCache@@QEAAPEAVCUMDAdapter@NDXGI@@_K@Z
    WindissectOpaque * DetachAdapter10(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachAdapter10_2@CUMDAdapterCache@CCreateDeviceCache@@QEAAPEAVCUMDAdapter@NDXGI@@_K@Z
    WindissectOpaque * DetachAdapter10_2(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsAdapter10_2@CUMDAdapterCache@CCreateDeviceCache@@QEBA_NXZ
    bool ExistsAdapter10_2() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFL9Win8@CUMDAdapterCache@CCreateDeviceCache@@QEBA_NXZ
    bool IsFL9Win8() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CUMDAdapterCache@CCreateDeviceCache@@QEAAJAEAVCAdapterCache@2@W4_KMTUMDVERSION@@IAEAUUMDFailureData@FailureData@@AEA_N@Z
    long Load(WindissectOpaque &, int, unsigned int, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUMDAdapterCache@CCreateDeviceCache@@QEAA@XZ
    ~CUMDAdapterCache();
};
} // namespace CCreateDeviceCache
