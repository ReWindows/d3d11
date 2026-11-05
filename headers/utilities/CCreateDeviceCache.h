#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CCreateDeviceCache {
public:
    class CAdapterCache;
    class CUMDAdapterCache;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Factory@CCreateDeviceCache@@QEAAPEAUIDXGIFactory1@@XZ
    IDXGIFactory1* Factory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFactory@CCreateDeviceCache@@QEAAJXZ
    long InitFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAdapter@CCreateDeviceCache@@QEAAJPEAUIUnknown@@W4D3D_DRIVER_TYPE@@PEAUHINSTANCE__@@W4D3D_FEATURE_LEVEL@@AEAVUniqueHMODULE@@_NPEAPEAVCAdapterCache@1@@Z
    long SelectAdapter(IUnknown *, int, HINSTANCE__*, int, UniqueHMODULE &, bool, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCreateDeviceCache@@QEAA@XZ
    ~CCreateDeviceCache();
};
