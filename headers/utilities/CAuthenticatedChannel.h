#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 6 member(s).
class CAuthenticatedChannel {
public:
    class CLS;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Configure@CAuthenticatedChannel@@UEAAJIPEBXPEAUD3D11_AUTHENTICATED_CONFIGURE_OUTPUT@@@Z
    virtual long Configure(unsigned int, void const *, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCertificate@CAuthenticatedChannel@@UEAAJIPEAE@Z
    virtual long GetCertificate(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCertificateSize@CAuthenticatedChannel@@UEAAJPEAI@Z
    virtual long GetCertificateSize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelHandle@CAuthenticatedChannel@@UEAAXPEAPEAX@Z
    virtual void GetChannelHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateKeyExchange@CAuthenticatedChannel@@UEAAJIPEAX@Z
    virtual long NegotiateKeyExchange(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Query@CAuthenticatedChannel@@UEAAJIPEBXIPEAX@Z
    virtual long Query(unsigned int, void const *, unsigned int, void *);
};
