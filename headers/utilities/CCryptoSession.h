#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 15 member(s).
class CCryptoSession {
public:
    class CLS;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCryptoSession@@QEAA@AEBUTConstructorArgs@0@@Z
    CCryptoSession(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCryptoSessionStatus@CCryptoSession@@UEAAJPEAW4D3D11_CRYPTO_SESSION_STATUS@@@Z
    virtual long CheckCryptoSessionStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptionBlt@CCryptoSession@@UEAAXPEAUID3D11Texture2D@@0PEAUD3D11_ENCRYPTED_BLOCK_INFO@@IPEBXIPEAX@Z
    virtual void DecryptionBlt(ID3D11Texture2D *, ID3D11Texture2D *, D3D11_ENCRYPTED_BLOCK_INFO *, unsigned int, void const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptionBlt@CCryptoSession@@UEAAXPEAUID3D11Texture2D@@0IPEAX@Z
    virtual void EncryptionBlt(ID3D11Texture2D *, ID3D11Texture2D *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishSessionKeyRefresh@CCryptoSession@@UEAAXXZ
    virtual void FinishSessionKeyRefresh();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCertificate@CCryptoSession@@UEAAJIPEAE@Z
    virtual long GetCertificate(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCertificateSize@CCryptoSession@@UEAAJPEAI@Z
    virtual long GetCertificateSize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCryptoSessionHandle@CCryptoSession@@UEAAXPEAPEAX@Z
    virtual void GetCryptoSessionHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCryptoType@CCryptoSession@@UEAAXPEAU_GUID@@@Z
    virtual void GetCryptoType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataForNewHardwareKey@CCryptoSession@@UEAAJIPEBXPEA_K@Z
    virtual long GetDataForNewHardwareKey(unsigned int, void const *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecoderProfile@CCryptoSession@@UEAAXPEAU_GUID@@@Z
    virtual void GetDecoderProfile(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEncryptionBltKey@CCryptoSession@@UEAAJIPEAX@Z
    virtual long GetEncryptionBltKey(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateKeyExchange@CCryptoSession@@UEAAJW4D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS@@IPEAX_N@Z
    virtual long NegotiateKeyExchange(int, unsigned int, void *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSessionKeyRefresh@CCryptoSession@@UEAAXIPEAX@Z
    virtual void StartSessionKeyRefresh(unsigned int, void *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHWDRMNegotiateKeyExchange@CCryptoSession@@IEAA_NI@Z
    bool IsHWDRMNegotiateKeyExchange(unsigned int);
};
