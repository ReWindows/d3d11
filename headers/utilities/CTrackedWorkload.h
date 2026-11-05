#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 16 member(s).
class CTrackedWorkload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrackedWorkloadEndpoint@CTrackedWorkload@@QEAAJPEAVCContext@@W4TrackedWorkloadEndpointType@@PEBUD3D11_TRACKED_WORKLOAD_DEADLINE@@@Z
    long AddTrackedWorkloadEndpoint(CContext *, int, D3D11_TRACKED_WORKLOAD_DEADLINE const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTrackedWorkload@@QEAA@AEBUTConstructorArgs@0@@Z
    CTrackedWorkload(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTrackedWorkload@CTrackedWorkload@@QEAAJPEAVCContext@@@Z
    long EndTrackedWorkload(CContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CTrackedWorkload@@QEAAXAEBUTConstructorArgs@1@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CTrackedWorkload@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CTrackedWorkload@@UEAA?AUD3D11_TRACKED_WORKLOAD_DESC@@XZ
    virtual D3D11_TRACKED_WORKLOAD_DESC GetDesc();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatistics@CTrackedWorkload@@UEAAJPEAUD3D11_TRACKED_WORKLOAD_STATISTICS@@@Z
    virtual long GetStatistics(D3D11_TRACKED_WORKLOAD_STATISTICS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetStatistics@CTrackedWorkload@@UEAAJXZ
    virtual long ResetStatistics();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrackedWorkload@@QEAA@XZ
    ~CTrackedWorkload();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProcessedInstances@CTrackedWorkload@@AEAAXXZ
    void ClearProcessedInstances();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimestampData@CTrackedWorkload@@AEAAXXZ
    void CreateTimestampData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCompletedInstances@CTrackedWorkload@@AEAAXPEAVCContext@@PEA_KI_KAEAUCLock@CCriticalSection@@@Z
    void ProcessCompletedInstances(CContext *, uint64_t *, unsigned int, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActiveInstance@CTrackedWorkload@@AEAAXXZ
    void StartActiveInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimestampMonitoringThread@CTrackedWorkload@@AEAAXXZ
    void TimestampMonitoringThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimestampMonitoringThreadEntry@CTrackedWorkload@@CAKPEAX@Z
    static unsigned long TimestampMonitoringThreadEntry(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTrackedWorkloadEndpoint@CTrackedWorkload@@AEAAXW4TrackedWorkloadEndpointType@@@Z
    void ValidateTrackedWorkloadEndpoint(int);
};
