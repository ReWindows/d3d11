#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 10 member(s).
namespace NDXGI::CResource {
class CGdiInterop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CGdiInterop@CResource@NDXGI@@QEAAXPEAVCDevice@3@@Z
    void Destroy(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDC@CGdiInterop@CResource@NDXGI@@QEAAJPEAVCDevice@3@PEAUID3D11Texture2D@@IHPEAUD3D11_TEXTURE2D_DESC@@PEAPEAUHDC__@@@Z
    long GetDC(WindissectOpaque *, ID3D11Texture2D *, unsigned int, int, D3D11_TEXTURE2D_DESC *, HDC__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDC@CGdiInterop@CResource@NDXGI@@QEAAJPEAVCDevice@3@PEAUID3D11Texture2D@@IPEAUD3D11_TEXTURE2D_DESC@@PEAUtagRECT@@@Z
    long ReleaseDC(WindissectOpaque *, ID3D11Texture2D *, unsigned int, D3D11_TEXTURE2D_DESC *, tagRECT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeviceBitmap@CGdiInterop@CResource@NDXGI@@AEAAJPEAUD3D11_TEXTURE2D_DESC@@I@Z
    long CreateDeviceBitmap(D3D11_TEXTURE2D_DESC *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDeviceBitmap@CGdiInterop@CResource@NDXGI@@AEAAXXZ
    void DestroyDeviceBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyStagingBuffer@CGdiInterop@CResource@NDXGI@@AEAAXPEAVCDevice@3@PEAUHDC__@@@Z
    void DestroyStagingBuffer(WindissectOpaque *, HDC__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceBitmapDC@CGdiInterop@CResource@NDXGI@@AEAAPEAUHDC__@@PEAVCDevice@3@H@Z
    HDC__* GetDeviceBitmapDC(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStagingBufferDC@CGdiInterop@CResource@NDXGI@@AEAAJPEAVCDevice@3@PEAUID3D11Texture2D@@IPEAUD3D11_TEXTURE2D_DESC@@HPEAPEAUHDC__@@@Z
    long GetStagingBufferDC(WindissectOpaque *, ID3D11Texture2D *, unsigned int, D3D11_TEXTURE2D_DESC *, int, HDC__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDeviceBitmapDC@CGdiInterop@CResource@NDXGI@@AEAAJPEAVCDevice@3@PEAUtagRECT@@@Z
    long ReleaseDeviceBitmapDC(WindissectOpaque *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseStagingBufferDC@CGdiInterop@CResource@NDXGI@@AEAAJPEAVCDevice@3@PEAUID3D11Texture2D@@IPEAUD3D11_TEXTURE2D_DESC@@PEAUtagRECT@@PEAUHDC__@@@Z
    long ReleaseStagingBufferDC(WindissectOpaque *, ID3D11Texture2D *, unsigned int, D3D11_TEXTURE2D_DESC *, tagRECT *, HDC__*);
};
} // namespace NDXGI::CResource
