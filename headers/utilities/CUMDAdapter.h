#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 28 member(s).
namespace NDXGI {
class CUMDAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUMDAdapter@NDXGI@@QEAA@PEAUIDXCoreAdapter@@W4_KMTUMDVERSION@@I@Z
    CUMDAdapter(IDXCoreAdapter *, int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUMDAdapter@NDXGI@@QEAA@PEAUIDXGIAdapterInternal2@@W4_KMTUMDVERSION@@I@Z
    CUMDAdapter(IDXGIAdapterInternal2*, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPrivateDeviceSize@CUMDAdapter@NDXGI@@QEAA_KIII@Z
    uint64_t CalcPrivateDeviceSize(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUMDExists@CUMDAdapter@NDXGI@@QEBA_NXZ
    bool CheckUMDExists() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitAdapter10_2@CUMDAdapter@NDXGI@@QEAAX_K@Z
    void CommitAdapter10_2(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWriteDriverStringTableIfAvailable@CUMDAdapter@NDXGI@@QEBAXXZ
    void ETWWriteDriverStringTableIfAvailable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaps@CUMDAdapter@NDXGI@@QEAAJW4D3D10_2DDICAPS_TYPE@@PEAX1I@Z
    long GetCaps(int, void *, void *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFenceSupport@CUMDAdapter@NDXGI@@QEBAXAEA_N0@Z
    void GetFenceSupport(bool &, bool &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryVidPnSourceId@CUMDAdapter@NDXGI@@QEBAIXZ
    unsigned int GetPrimaryVidPnSourceId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedVersions@CUMDAdapter@NDXGI@@QEAAJPEAIPEA_K@Z
    long GetSupportedVersions(unsigned int *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUMDVersionFromKernel@CUMDAdapter@NDXGI@@QEBA_JXZ
    int64_t GetUMDVersionFromKernel() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDriverVerifier@CUMDAdapter@NDXGI@@QEAAXI@Z
    void InitDriverVerifier(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExplicitDriverType@CUMDAdapter@NDXGI@@QEBA_NW4D3D_DRIVER_TYPE@@@Z
    bool IsExplicitDriverType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWARP@CUMDAdapter@NDXGI@@QEBA_NXZ
    bool IsWARP() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NTStatusToHResult@CUMDAdapter@NDXGI@@SAJJ@Z
    static long NTStatusToHResult(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAdapter10@CUMDAdapter@NDXGI@@QEAAJ_K@Z
    long OpenAdapter10(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAdapter10_2@CUMDAdapter@NDXGI@@QEAAJXZ
    long OpenAdapter10_2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAdapterD3D11On12@CUMDAdapter@NDXGI@@QEAAJAEAUSOpenAdapterArgs@D3D11On12@@@Z
    long OpenAdapterD3D11On12(::D3D11On12::SOpenAdapterArgs &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsSharedResources@CUMDAdapter@NDXGI@@QEBA_NXZ
    bool SupportsSharedResources() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UMDLoadStatus@CUMDAdapter@NDXGI@@QEBAJXZ
    long UMDLoadStatus() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUMDAdapter@NDXGI@@QEAA@XZ
    ~CUMDAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectedDriverMismatch@CUMDAdapter@NDXGI@@KAXXZ
    static void DetectedDriverMismatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill11On12OpenAdapterStructs@CUMDAdapter@NDXGI@@IEAAXPEAUD3D10DDIARG_OPENADAPTER@@PEAUSOpenAdapterArgs@D3D11On12@@@Z
    void Fill11On12OpenAdapterStructs(D3D10DDIARG_OPENADAPTER *, ::D3D11On12::SOpenAdapterArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultisampleMethodListCB@CUMDAdapter@NDXGI@@KAJPEAXPEAU_D3DDDICB_GETMULTISAMPLEMETHODLIST@@@Z
    static long GetMultisampleMethodListCB(void *, _D3DDDICB_GETMULTISAMPLEMETHODLIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStringTableEntryCB@CUMDAdapter@NDXGI@@KAJPEAXIPEBG@Z
    static long LogStringTableEntryCB(void *, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAdapterInfoCB@CUMDAdapter@NDXGI@@KAJPEAXPEBU_D3DDDICB_QUERYADAPTERINFO@@@Z
    static long QueryAdapterInfoCB(void *, _D3DDDICB_QUERYADAPTERINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAdapterInfoCB2@CUMDAdapter@NDXGI@@KAJPEAXPEBU_D3DDDICB_QUERYADAPTERINFO2@@@Z
    static long QueryAdapterInfoCB2(void *, _D3DDDICB_QUERYADAPTERINFO2const *);
};
} // namespace NDXGI
