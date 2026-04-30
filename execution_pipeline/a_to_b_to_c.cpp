#include "grpc_interface.h"
#include "TestScenario.h"
#include "FalconYieldContext.h"
#include <iostream>

FalconYieldContext executeAtoBtoC(TestScenario scenario) {
    registerAgentCard(scenario.agentId);
    FalconYieldContext verified = fetchFalconMetrics(scenario.asset);

    if (verified.proof.valid) {
        FalconYieldContext ctx = verified;
        storeQuantumTrace(ctx);
        std::cout << "[A→B→C] Level C Autopilot activated for " << scenario.asset << std::endl;
        return ctx;
    }

    std::cout << "[A→B→C] Validation failed" << std::endl;
    return FalconYieldContext{};
}
