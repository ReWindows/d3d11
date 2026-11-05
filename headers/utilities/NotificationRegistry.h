#pragma once
#include "../windissect_forwards.h"

// Reconstructed from d3d11.dll by Windissect. 3 member(s).
class NotificationRegistry {
public:
    class NotificationRecord;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationRegistry@@QEAA@XZ
    NotificationRegistry();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationRegistry@@QEAA@XZ
    ~NotificationRegistry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertNotificationRecord@NotificationRegistry@@AEAAJPEAUNotificationRecord@1@_NAEAK@Z
    long InsertNotificationRecord(WindissectOpaque *, bool, unsigned long &);
};
