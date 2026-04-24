#include "LockFreeQueue.h"

// Lock-free queue for HFT market data (trading-system-notes binding)
void pushMarketData(const MarketData& data) {
    queue.push(data);  // zero-copy, NUMA-aware
}
