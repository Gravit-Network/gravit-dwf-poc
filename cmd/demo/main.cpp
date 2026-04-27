#include <iostream>
#include "TestScenario.h"
#include "FalconYieldContext.h"
#include "grpc_interface.h"

int main() {
    std::cout << "=== Gravit × DWF Demo (Triad v2.0 EES) ===" << std::endl;

    TestScenario scenario;
    scenario.asset = "sUSDF";
    scenario.agentId = "agent_falcon_001";
    scenario.expectedYield = 21.36f;

    FalconYieldContext result = executeAtoBtoC(scenario);

    std::cout << "Cumulative payout: $" << result.cumulativePayout / 1000000 << "M" << std::endl;
    std::cout << "Overcollateralization: " << result.overcollateralization << "%" << std::endl;
    std::cout << "Decision: " << (result.proof.valid ? "ACCEPTED" : "REJECTED") << std::endl;
    std::cout << "Demo completed successfully." << std::endl;

    return 0;
}
