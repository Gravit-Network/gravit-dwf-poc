Task<void> executeHFTCoroutine() {
    co_await scheduler.scheduleOnNumaNode(0);
    // C++20 coroutine executor for A→B→C pipeline
    co_return;
}
