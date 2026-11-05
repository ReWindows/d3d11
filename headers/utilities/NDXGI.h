#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 5 member(s).
class NDXGI {
public:
    class CContext;
    class CDevice;
    class CHwQueue;
    class CKMResource;
    class CResource;
    class CSafeKMResourcePtr;
    class CSubresourceSurface;
    class CSurfaceView;
    class CUMDAdapter;
    class SafeSyncObject;
    class SyncPacket;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeriveUsage@NDXGI@@YAIW4ED3D11DeviceChildType@@AEBTUD3D11LayeredResourceCreationArgs@1@@Z
    unsigned int DeriveUsage(int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTexelSize@NDXGI@@YAIII@Z
    unsigned int GetTexelSize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDC@NDXGI@@YAXPEAUHDC__@@@Z
    void InitializeDC(HDC__*);
};
