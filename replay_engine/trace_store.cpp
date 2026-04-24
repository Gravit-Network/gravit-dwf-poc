void storeQuantumTrace(const FalconYieldContext& ctx) {
    // Ω Trace Store - immutable History Keeper
    traceStore.append(ctx, generateQuantumHash(ctx));
}
