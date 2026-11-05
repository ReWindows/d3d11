#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 10 member(s).
class CModule {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CModule@@QEAA@XZ
    CModule();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DllMain@CModule@@QEAAHPEAUHINSTANCE__@@KPEAX@Z
    int DllMain(HINSTANCE__*, unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatValue@CModule@@QEAAHPEBDPEA_K@Z
    int GetCompatValue(char const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordJournal@CModule@@QEAAXIPEBD_N1@Z
    void RecordJournal(unsigned int, char const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportJournal@CModule@@QEAAXXZ
    void ReportJournal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SDKLoadLibraryW@CModule@@QEAAPEAUHINSTANCE__@@PEBG@Z
    HINSTANCE__* SDKLoadLibraryW(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CModule@@UEAA@XZ
    virtual ~CModule();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnceGetProcAddress@CModule@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceGetProcAddress(_RTL_RUN_ONCE *, void *, void * *);
};
