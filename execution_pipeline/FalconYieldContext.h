#pragma once
#include <string>
#include "GQRVPProof.h"

struct FalconYieldContext {
    float cumulativePayout = 0.0f;
    float supply = 0.0f;
    float overcollateralization = 0.0f;
    std::string xstocksEquityId;
    GQRVPProof proof;
};
