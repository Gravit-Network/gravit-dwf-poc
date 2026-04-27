#include "FalconYieldContext.h"

bool detectContradiction(const FalconYieldContext& ctx) {
    return ctx.overcollateralization < 100.0f;
}
