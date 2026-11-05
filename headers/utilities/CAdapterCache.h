#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 12 member(s).
namespace CCreateDeviceCache {
class CAdapterCache {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAdapterCache@CCreateDeviceCache@@QEAA@AEAUAdapterFailureData@FailureData@@@Z
    CAdapterCache(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseDXCoreAdapter@CAdapterCache@CCreateDeviceCache@@QEAAPEAV12@PEAV2@PEAUIDXCoreAdapter@@@Z
    WindissectOpaque * ChooseDXCoreAdapter(CCreateDeviceCache *, IDXCoreAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseHardwareAdapter@CAdapterCache@CCreateDeviceCache@@QEAAPEAV12@PEAV2@PEAUIDXGIAdapter@@@Z
    WindissectOpaque * ChooseHardwareAdapter(CCreateDeviceCache *, IDXGIAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLevel9@CAdapterCache@CCreateDeviceCache@@QEAAPEAV12@W4D3D_FEATURE_LEVEL@@PEAUIDXGIAdapter@@@Z
    WindissectOpaque * CreateLevel9(int, IDXGIAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSoftware@CAdapterCache@CCreateDeviceCache@@QEAAPEAV12@PEAV2@PEAUHINSTANCE__@@@Z
    WindissectOpaque * CreateSoftware(CCreateDeviceCache *, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceId@CAdapterCache@CCreateDeviceCache@@QEAAIXZ
    unsigned int DeviceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWddmVersion@CAdapterCache@CCreateDeviceCache@@QEBA?AW4_QAI_DRIVERVERSION@@XZ
    int GetWddmVersion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitVendorDeviceSubsysIdIfNeeded@CAdapterCache@CCreateDeviceCache@@QEAAXXZ
    void InitVendorDeviceSubsysIdIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAcgCompatible@CAdapterCache@CCreateDeviceCache@@QEBA_NXZ
    bool IsAcgCompatible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubSysId@CAdapterCache@CCreateDeviceCache@@QEAAIXZ
    unsigned int SubSysId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VendorId@CAdapterCache@CCreateDeviceCache@@QEAAIXZ
    unsigned int VendorId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAdapterCache@CCreateDeviceCache@@QEAA@XZ
    ~CAdapterCache();
};
} // namespace CCreateDeviceCache
