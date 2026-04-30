#include "FalconYieldContext.h"
#include "grpc_interface.h"

FalconYieldContext fetchFalconMetrics(const std::string& asset) {
    FalconYieldContext metrics;
    metrics.cumulativePayout = 21360000.0f;
    metrics.supply = 1630000000.0f;
    metrics.overcollateralization = 107.93f;
    metrics.xstocksEquityId = "xStocks_Equities_1B";
    metrics.proof.proofHash = "gqrvp_hash_" + asset;
    metrics.proof.valid = true;
    return metrics;
}
