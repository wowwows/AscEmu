#pragma once
#include <memory>
#include "Threading/AEThread.h"

class BroadcastMgr
{
    std::unique_ptr<AscEmu::Threading::AEThread> m_thread;
    void threadRunner(AscEmu::Threading::AEThread& thread);
    void threadInit();
    void sendBroadcast();
public:
    BroadcastMgr();
    ~BroadcastMgr();
};
