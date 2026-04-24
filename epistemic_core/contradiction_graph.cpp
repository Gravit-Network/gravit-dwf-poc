#include <vector>

bool detectContradiction(const FalconYieldContext& ctx) {
    // Detects alignment drift or oracle inconsistency
    if (ctx.overcollateralization < 100.0) {
        return true;  // contradiction detected
    }
    return false;
}
