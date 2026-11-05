#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 4 member(s).
class CD3D11SynchronizedChannel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandle@CD3D11SynchronizedChannel@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandle(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWaitableObject@CD3D11SynchronizedChannel@@UEAAJPEAPEAX@Z
    virtual long GetWaitableObject(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopReceivedData@CD3D11SynchronizedChannel@@UEAAJPEAPEAUID3D11SynchronizedChannelData@@@Z
    virtual long PopReceivedData(ID3D11SynchronizedChannelData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitData@CD3D11SynchronizedChannel@@UEAAJPEAUID3D11Fence@@_KIPEBUD3D11_SYNCHRONIZED_CHANNEL_DATA_SUBMISSION@@@Z
    virtual long SubmitData(ID3D11Fence *, uint64_t, unsigned int, D3D11_SYNCHRONIZED_CHANNEL_DATA_SUBMISSION const *);
};
